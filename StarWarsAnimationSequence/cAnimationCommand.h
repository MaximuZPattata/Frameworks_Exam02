#pragma once
#include <cControlGameEngine.h>

class cAnimationCommand
{
public:
	cAnimationCommand(std::string modelName);

	void InitializeTranformation(bool moveAnimation, bool rotateAnimation);

	void MoveAnimation(glm::vec3 startXYZ, glm::vec3 endXYZ, float timeToMove);

	void RotateAnimation(float degrees, glm::vec3 rotationDirection, float timeToRotate);

	void UpdateAnimation(cControlGameEngine& gameEngine);

	bool isAnimationDone(void);

	bool lastAnimationInScene = false;

private:
	cAnimationCommand() {};

	bool bMoveAnimation = false;
	bool bRotateAnimation = false;

	glm::vec3 mCurrentPos = glm::vec3(0.f);
	glm::vec3 mStartingPos = glm::vec3(0.f);
	glm::vec3 mEndingPos = glm::vec3(0.f);
	glm::vec3 mTotalDistance = glm::vec3(0.f);
	glm::vec3 mMoveDirection = glm::vec3(0.f);
	glm::vec3 mVelocity = glm::vec3(0.f);
	glm::vec3 mRotationDirection = glm::vec3(0.f);

	double mElapsedTime = 0.0;

	float mTotalDegreesToBeRotated = 0.f;
	float mTimeToMove = 0.f;
	float mTimeToRotate = 0.f;
	float mSpeed = 0.f;

	std::string mMeshName = "";
};
