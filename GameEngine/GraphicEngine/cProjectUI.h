#pragma once
#include "cProjectManager.h"

class cProjectUI {
private:
	cProjectManager* m_projectManager;
public:
	cProjectUI(cProjectManager* projectManager) : m_projectManager(projectManager) {}
	/// <summary>
	/// Will draw any important information related to Project Manager
	/// </summary>
	void renderUI();
	/// <summary>
	/// After a scene is selected, this method will draw the scene info
	/// </summary>
	void renderSceneUI();
	/// <summary>
	/// After a mesh is selected, this method will draw the mesh info
	/// </summary>
	void renderMeshUI();
};

