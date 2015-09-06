//===============================================================================================================================
// TreeEnvironment
//
//===============================================================================================================================
// History
//
//	-Created on 8/20/2015 by Dustin Watson
//===============================================================================================================================
#ifndef __ROOMENVIRONMENT_H
#define __ROOMENVIRONMENT_H
//===============================================================================================================================
//===============================================================================================================================

//
// Includes
//

#include "Environment3D.h"
#include "Tree.h"

//===============================================================================================================================
//===============================================================================================================================

//
// Tree Environment
//
class TreeEnvironment : public Environment3D
{
public:
	
	TreeEnvironment(EngineOptions* eo);
	~TreeEnvironment();
	
	bool Initialize();
	void Shutdown();
	
	void Update();
	void Render();
	void RenderDeferred();
	
private:
	
	bool bTreeBillboardTextureCreated;
	
	// Uses instancing to create many trees
	Tree* mTrees;
};

//===============================================================================================================================
//===============================================================================================================================
#endif//__ROOMENVIRONMENT_H