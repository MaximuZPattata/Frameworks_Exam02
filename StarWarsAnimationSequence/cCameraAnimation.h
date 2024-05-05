#pragma once
#include "pch.h"
#include <cControlGameEngine.h>

class cCameraAnimation
{
public:
	void InitializeCamDetails(glm::vec3 startPos, glm::vec3 endPos, float animationTime)
	{
		this->mAnimationTime = animationTime;

		this->mTotalDistance = endPos - startPos;

		this->mMoveDirection = glm::normalize(this->mTotalDistance);

		float totalDistance = glm::distance(endPos, startPos);
		this->mSpeed = totalDistance / animationTime;

		this->mVelocity = this->mMoveDirection * this->mSpeed;
	}

	void UpdateCameraAnimation(cControlGameEngine& gameEngine)
	{
		this->mElapsedTime += gameEngine.deltaTime;

		glm::vec3 cameraPos = gameEngine.GetCurrentCameraPosition();

		//float multiplicationFactor = mElapsedTime / mAnimationTime;

		//// glm::clamp - To make sure the multiplicationFactor is between 0 and 1
		//multiplicationFactor = glm::clamp(multiplicationFactor, 0.0f, 1.0f);

		//glm::vec3 interpolatedPosition = cameraPos + (float)gameEngine.deltaTime * (mCamEndPosition - cameraPos);

		cameraPos += (this->mVelocity * (float)gameEngine.deltaTime);

		gameEngine.MoveCameraPosition(cameraPos.x, cameraPos.y, cameraPos.z);
	}

	bool isCamAnimationDone(void)
	{
		if (this->mElapsedTime >= this->mAnimationTime)
			return true;

		return false;
	}

private:
	glm::vec3 mTotalDistance = glm::vec3(0.f);
	glm::vec3 mMoveDirection = glm::vec3(0.f);
	glm::vec3 mVelocity = glm::vec3(0.f);

	double mElapsedTime = 0.0;
	float mAnimationTime = 0.f;
	float mSpeed = 0.f;
	
};
