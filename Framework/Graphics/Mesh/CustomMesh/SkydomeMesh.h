//===============================================================================================================================
// SkydomeMesh.h
//
//===============================================================================================================================
// History
//
// -Created on 1/10/2014 by Dustin Watson
//===============================================================================================================================
#ifndef __SKYDOMEMESH_H
#define __SKYDOMEMESH_H
//===============================================================================================================================
//===============================================================================================================================

//
// Includes
//
#include "D3D.h"
#include "MeshUtil.h"
#include "CustomMesh.h"

//===============================================================================================================================
//===============================================================================================================================
namespace ZShadeSandboxMesh {
class SkydomeMesh : public ZShadeSandboxMesh::CustomMesh
{
public:
	
	// Loads a skydome mesh in 3D space
	SkydomeMesh(D3D* d3d, ZShadeSandboxMesh::MeshParameters mp);
	~SkydomeMesh();

	void Initialize();
};
}
//===============================================================================================================================
//===============================================================================================================================
#endif//__SKYDOMEMESH_H