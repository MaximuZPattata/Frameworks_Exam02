#include "pch.h"
#include "cAnimationCommand.h"

cAnimationCommand::cAnimationCommand(std::string modelName)
{
	this->mMeshName = modelName;
}

void cAnimationCommand::InitializeTranformation(bool moveAnimation, bool rotateAnimation)
{
	this->bMoveAnimation = moveAnimation;
	this->bRotateAnimation = rotateAnimation;
}

void cAnimationCommand::MoveAnimation(glm::vec3 startXYZ, glm::vec3 endXYZ, float timeToMove)
{
	this->mStartingPos = startXYZ;
	this->mEndingPos = endXYZ;
	this->mTimeToMove = timeToMove;

	this->mTotalDistance = this->mEndingPos - this->mStartingPos;

	this->mMoveDirection = glm::normalize(this->mTotalDistance);

	float totalDistance = glm::distance(this->mEndingPos, this->mStartingPos);
	this->mSpeed = totalDistance / timeToMove;

	this->mVelocity = this->mMoveDirection * this->mSpeed;

	//std::cout << "Velocity this command : (" << this->mVelocity.x << ", " << this->mVelocity.y << ", " << this->mVelocity.z << ")" << std::endl;
}

void cAnimationCommand::RotateAnimation(float degrees, glm::vec3 rotationDirection, float timeToRotate)
{
	this->mTotalDegreesToBeRotated = degrees;
	this->mTimeToRotate = timeToRotate;
	this->mRotationDirection = rotationDirection;
}

void cAnimationCommand::UpdateAnimation(cControlGameEngine& gameEngine)
{
	this->mElapsedTime += gameEngine.deltaTime;

	if (bMoveAnimation)
	{
		glm::vec3 currentXYZ = gameEngine.GetModelPosition(this->mMeshName);

		currentXYZ += (this->mVelocity * (float)gameEngine.deltaTime);

		gameEngine.MoveModel(this->mMeshName, currentXYZ.x, currentXYZ.y, currentXYZ.z);

		mCurrentPos = currentXYZ;
	}

	if (bRotateAnimation)
	{
		float rotationDegrees = ((mTotalDegreesToBeRotated / mTimeToRotate) * (float)gameEngine.deltaTime);

		gameEngine.RotateMeshModel(this->mMeshName, rotationDegrees, this->mRotationDirection.x, this->mRotationDirection.y, this->mRotationDirection.z);
	}

	return;
}

bool cAnimationCommand::isAnimationDone(void)
{
	if (this->mElapsedTime >= this->mTimeToMove && this->mElapsedTime >= this->mTimeToRotate)
	{
		if(this->mTimeToMove > 0.0 && this->mMeshName == "Falcon")
			std::cout << "Position this command : (" << this->mCurrentPos.x << ", " << this->mCurrentPos.y << ", " << this->mCurrentPos.z << ")" << std::endl;
		return true;
	}

	return false;
}

