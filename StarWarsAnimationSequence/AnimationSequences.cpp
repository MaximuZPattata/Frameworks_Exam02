#include "pch.h"
#include "cAnimationCommand.h"
#include "cCameraAnimation.h"

#include <cControlGameEngine.h>

extern std::vector<std::vector <cAnimationCommand>> groupAnimationsList;
extern std::vector<cCameraAnimation> camAnimationList;
extern cControlGameEngine gameEngine;

void SetScene01Sequence()
{
	cCameraAnimation camAnimation;

	camAnimation.InitializeCamDetails(gameEngine.GetCurrentCameraPosition() , glm::vec3(-170.f,	100.f, 1000.f), 3.0f);

	camAnimationList.push_back(camAnimation);

	//----------------------Animation Sequences for the Falcon---------------------------------
	
	std::vector<cAnimationCommand> falconAnimations;

	std::string modelNameForNow = "Falcon";

	glm::vec3 falconCurrentPos = gameEngine.GetModelPosition(modelNameForNow);
	glm::vec3 falconDestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveFalcon01(modelNameForNow);

	//----------------------Animation Sequences for Asteroid01--------------------------------

	std::vector<cAnimationCommand> asteroidAnimations;

	modelNameForNow = "Asteroid01";

	glm::vec3 asteroid01CurrentPos = gameEngine.GetModelPosition(modelNameForNow);
	glm::vec3 asteroid01DestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveAsteroid01(modelNameForNow);

	//----------------------------------------------------

	std::vector<cAnimationCommand> asteroidAnimations2;

	modelNameForNow = "Asteroid02";

	glm::vec3 asteroid02CurrentPos = gameEngine.GetModelPosition(modelNameForNow);
	glm::vec3 asteroid02DestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveAsteroid02(modelNameForNow); 

	//----------------------------------------------------
	
	std::vector<cAnimationCommand> asteroidClusterAnimations;

	modelNameForNow = "AsteroidClusters01";

	glm::vec3 asteroidCluster01CurrentPos = gameEngine.GetModelPosition(modelNameForNow);
	glm::vec3 asteroidCluster01DestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveAsteroidCluster01(modelNameForNow);

	//----------------------------------------------------

	std::vector<cAnimationCommand> asteroidCluster02Animations;

	modelNameForNow = "AsteroidClusters02";

	glm::vec3 asteroidCluster02CurrentPos = gameEngine.GetModelPosition(modelNameForNow);
	glm::vec3 asteroidCluster02DestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveAsteroidCluster02(modelNameForNow);

	//----------------------Animation Set 01--------------------------------- 0.00 seconds

	//-----------------------Falcon--------------------------

	modelNameForNow = "Falcon";

	moveFalcon01.InitializeTranformation(true, false);
	falconDestinationPos = glm::vec3(-15.0f, 35.0f, 0.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.25f);
	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//----------------------Asteroids------------------------
	
	moveAsteroid01.InitializeTranformation(true, true);
	asteroid01DestinationPos = glm::vec3(2900.0f, 0.0f, 0.0f);

	moveAsteroid01.MoveAnimation(asteroid01CurrentPos, asteroid01DestinationPos, 10.0f);
	moveAsteroid01.RotateAnimation(180, glm::vec3(0.0f, 0.0f, 1.0f), 10.0f);
	asteroidAnimations.push_back(moveAsteroid01);

	//----------------------------------------------------

	moveAsteroid02.InitializeTranformation(true, false);
	asteroid02DestinationPos = glm::vec3(2900.0f, 20.0f, 700.0f);
	
	moveAsteroid02.MoveAnimation(asteroid02CurrentPos, asteroid02DestinationPos, 10.0f);
	asteroidAnimations2.push_back(moveAsteroid02);
	
	//----------------------------------------------------

	moveAsteroidCluster01.InitializeTranformation(true, false);
	asteroidCluster01DestinationPos = glm::vec3(1500.0f, 600.0f, -100.0f);

	moveAsteroidCluster01.MoveAnimation(asteroidCluster01CurrentPos, asteroidCluster01DestinationPos, 10.0f);
	asteroidClusterAnimations.push_back(moveAsteroidCluster01);

	//----------------------------------------------------

	moveAsteroidCluster02.InitializeTranformation(true, false);
	asteroidCluster02DestinationPos = glm::vec3(2900.0f, 300.0f, 200.0f);

	moveAsteroidCluster02.MoveAnimation(asteroidCluster02CurrentPos, asteroidCluster02DestinationPos, 10.0f);
	asteroidCluster02Animations.push_back(moveAsteroidCluster02);

	//----------------------Animation Set 02--------------------------------- 0.25 seconds
	
	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-30.0f, 35.0f, -7.5f);

	//falconCurrentPos = gameEngine.GetModelPosition(modelNameForNow);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.25f);
	moveFalcon01.RotateAnimation(-3.5, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//----------------------Animation Set 03--------------------------------- 0.50 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-60.0f, 35.0f, 0.0f);

	//falconCurrentPos = gameEngine.GetModelPosition(modelNameForNow);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//----------------------Animation Set 04--------------------------------- 1.00 second

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-120.0f, 80.0f, 850.0f);

	//falconCurrentPos = gameEngine.GetModelPosition(modelNameForNow);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 1.0f);
	moveFalcon01.RotateAnimation(20.0, glm::vec3(1.0f, 0.0f, 0.0f), 1.0f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//----------------------Animation Set 05--------------------------------- 2.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-170.0f, 80.0f, 800.0f);

	//falconCurrentPos = gameEngine.GetModelPosition(modelNameForNow);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(-50.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//----------------------Animation Set 06--------------------------------- 2.50 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-200.0f, 60.0f, 500.0f);

	//falconCurrentPos = gameEngine.GetModelPosition(modelNameForNow);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(-30.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	moveFalcon01.lastAnimationInScene = true;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------------------------- 3.00 seconds

	groupAnimationsList.push_back(falconAnimations); 
	groupAnimationsList.push_back(asteroidAnimations);
	groupAnimationsList.push_back(asteroidAnimations2);
	groupAnimationsList.push_back(asteroidClusterAnimations);
	groupAnimationsList.push_back(asteroidCluster02Animations);
	
}

void SetScene02Sequence()
{
	gameEngine.MoveCameraPosition(-5000, 125, 400);
	gameEngine.MoveCameraTarget(0.99, -0.14, 0.05);
	gameEngine.yaw = 2.5;
	gameEngine.pitch = -7.75;

	//----------------------Animation Sequences for the Falcon---------------------------------

	std::vector<cAnimationCommand> falconAnimations;

	std::string modelNameForNow = "Falcon";

	glm::vec3 falconCurrentPos = glm::vec3(-200.0f, 60.0f, 500.0f);
	glm::vec3 falconDestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveFalcon01(modelNameForNow);

	//----------------------Animation Sequences for Asteroids--------------------------------

	std::vector<cAnimationCommand> asteroidAnimations;

	modelNameForNow = "AsteroidBigChunk01";

	glm::vec3 asteroid01CurrentPos = gameEngine.GetModelPosition(modelNameForNow);
	glm::vec3 asteroid01DestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveAsteroid01(modelNameForNow);

	//----------------------Animation Sequences for TieFighters------------------------------

	std::vector<cAnimationCommand> tieFighterAnimations;

	modelNameForNow = "TieFighter01";

	glm::vec3 tieFighterCurrentPos = gameEngine.GetModelPosition(modelNameForNow);
	glm::vec3 tieFighterDestinationPos = glm::vec3(0.0f);

	cAnimationCommand tieFighter01(modelNameForNow);

	//----------------------Animation Set 01--------------------------------- 3.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-1000.0f, 50.0f, 500.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 1.0f);
	moveFalcon01.RotateAnimation(50.0, glm::vec3(1.0f, 0.0f, 0.0f), 1.0f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------Asteroid-------------------------------

	moveAsteroid01.InitializeTranformation(true, true);
	asteroid01DestinationPos = glm::vec3(3000.0f, 20.0f, 120.0f);

	moveAsteroid01.MoveAnimation(asteroid01CurrentPos, asteroid01DestinationPos, 20.0f);
	moveAsteroid01.RotateAnimation(180, glm::vec3(1.0f, 1.0f, 0.0f), 15.0f);
	asteroidAnimations.push_back(moveAsteroid01);

	//--------------------TieFighter------------------------------- 

	tieFighter01.InitializeTranformation(true, false);
	tieFighterCurrentPos = glm::vec3(-600.0f, 100.f, 500.f);
	tieFighterDestinationPos = glm::vec3(-800.0f, 100.0f, 500.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 1.0f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 1.5--------------------------------- 4.00 seconds 

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-1400.0f, 75.0f, 675.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(-40.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-1300.0f, 85.0f, 600.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.5f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 02--------------------------------- 4.50 seconds 

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-1800.0f, 85.0f, 850.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(-40.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-1700.0f, 95.0f, 725.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.5f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 03--------------------------------- 5.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-2000.0f, 80.0f, 825.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.25f);
	moveFalcon01.RotateAnimation(-10.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, true);
	tieFighterDestinationPos = glm::vec3(-1900.0f, 85.0f, 800.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.25f);
	tieFighter01.RotateAnimation(-10.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 3.5--------------------------------- 5.25 seconds 

	moveFalcon01.InitializeTranformation(true, false);
	falconDestinationPos = glm::vec3(-2200.0f, 80.0f, 800.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.25f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-2100.0f, 70.0f, 750.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.25f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 04--------------------------------- 5.50 seconds 
	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-2600.0f, 50.0f, 700.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-2500.0f, 70.0f, 750.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.5f);
	tieFighter01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 4.5--------------------------------- 6.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-3000.0f, 35.0f, 600.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-2900.0f, 60.0f, 700.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.5f);
	tieFighter01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 05--------------------------------- 6.50 seconds 

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-3400.0f, -10.0f, 500.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-3200.0f, 25.0f, 600.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.5f);
	tieFighter01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 5.5--------------------------------- 7.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-3800.0f, 25.0f, 450.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(85.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-3600.0f, 50.0f, 550.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.5f);
	tieFighter01.RotateAnimation(85.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 06--------------------------------- 7.50 seconds 

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-4000.0f, 60.0f, 350.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.25f);
	moveFalcon01.RotateAnimation(25.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);
	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-3800.0f, 85.0f, 400.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.25f);
	tieFighter01.RotateAnimation(85.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 07--------------------------------- 7.75 seconds 

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-4200.0f, 95.0f, 300.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.25f);
	moveFalcon01.RotateAnimation(25.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-4000.0f, 110.0f, 350.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.25f);
	tieFighter01.RotateAnimation(25.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 08--------------------------------- 8.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-4400.0f, 125.0f, 300.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.25f);
	moveFalcon01.RotateAnimation(15.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);
	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-4200.0f, 140.0f, 350.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.25f);
	tieFighter01.RotateAnimation(15.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	//----------------------Animation Set 09--------------------------------- 8.25 seconds 

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-4800.0f, 175.0f, 300.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 0.5f);
	moveFalcon01.RotateAnimation(15.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.5f);
	falconCurrentPos = falconDestinationPos;
	moveFalcon01.lastAnimationInScene = true;
	falconAnimations.push_back(moveFalcon01);

	//---------------------------------------------------

	tieFighter01.InitializeTranformation(true, false);
	tieFighterDestinationPos = glm::vec3(-4600.0f, 190.0f, 320.0f);

	tieFighter01.MoveAnimation(tieFighterCurrentPos, tieFighterDestinationPos, 0.25f);
	tieFighter01.RotateAnimation(15.0, glm::vec3(1.0f, 0.0f, 0.0f), 0.25f);

	tieFighterCurrentPos = tieFighterDestinationPos;
	tieFighterAnimations.push_back(tieFighter01);

	groupAnimationsList.push_back(falconAnimations);
	groupAnimationsList.push_back(asteroidAnimations); 
	groupAnimationsList.push_back(tieFighterAnimations);
}

void SetScene03Sequence()
{
	gameEngine.MoveCameraPosition(-5000, 125, 400);
	gameEngine.MoveCameraTarget(-0.99, -0.025, -0.18);
	gameEngine.yaw = -173.0;
	gameEngine.pitch = 9.0;

	//----------------------Animation Sequences for the Falcon---------------------------------

	std::vector<cAnimationCommand> falconAnimations;

	std::string modelNameForNow = "Falcon";

	gameEngine.RotateMeshModel(modelNameForNow, -80.0, 1.f, 0.f, 0.f);
	glm::vec3 falconCurrentPos = glm::vec3(-4800.0f, 175.0f, 300.0f);
	glm::vec3 falconDestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveFalcon01(modelNameForNow);

	//----------------------Animation Set 01--------------------------------- 3.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-5600.0f, 175.0f, 100.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 1.0f);
	moveFalcon01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 1.0f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//----------------------Animation Set 02--------------------------------- 3.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-7500.0f, 180.0f, 200.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 2.0f);
	moveFalcon01.RotateAnimation(10.0, glm::vec3(1.0f, 0.0f, 0.0f), 2.0f);
	moveFalcon01.lastAnimationInScene = true;

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	groupAnimationsList.push_back(falconAnimations);
}

void SetScene04Sequence()
{
	gameEngine.MoveCameraPosition(-9'000, 0, 400);
	gameEngine.MoveCameraTarget(0.97, 0.15, -0.19);
	gameEngine.yaw = -113.0;
	gameEngine.pitch = 9.0;

	//----------------------Animation Sequences for the Falcon---------------------------------

	std::vector<cAnimationCommand> falconAnimations;

	std::string modelNameForNow = "Falcon";

	gameEngine.RotateMeshModel(modelNameForNow, -80.0, 1.f, 0.f, 0.f);
	glm::vec3 falconCurrentPos = glm::vec3(-4800.0f, 175.0f, 300.0f);
	glm::vec3 falconDestinationPos = glm::vec3(0.0f);

	cAnimationCommand moveFalcon01(modelNameForNow);

	//----------------------Animation Set 01--------------------------------- 3.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-5600.0f, 175.0f, 100.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 1.0f);
	moveFalcon01.RotateAnimation(5.0, glm::vec3(1.0f, 0.0f, 0.0f), 1.0f);

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	//----------------------Animation Set 02--------------------------------- 3.00 seconds

	moveFalcon01.InitializeTranformation(true, true);
	falconDestinationPos = glm::vec3(-7500.0f, 180.0f, 200.0f);

	moveFalcon01.MoveAnimation(falconCurrentPos, falconDestinationPos, 2.0f);
	moveFalcon01.RotateAnimation(10.0, glm::vec3(1.0f, 0.0f, 0.0f), 2.0f);
	moveFalcon01.lastAnimationInScene;

	falconCurrentPos = falconDestinationPos;
	falconAnimations.push_back(moveFalcon01);

	// 0.15 sec = 200 units  | 0.30 sec = 400 units | 1.00 min = 800 units
	groupAnimationsList.push_back(falconAnimations);
}

void SetScene05Sequence()
{

}