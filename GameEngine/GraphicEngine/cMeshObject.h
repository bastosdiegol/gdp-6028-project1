#pragma once
#include <string>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>

#include "cModel.h"
#include "iMovable.h"

class cMeshObject : public iMovable {
public:
	cMeshObject(cModel* parent);
	~cMeshObject();

	cModel*			m_parentModel;

	std::string		m_meshName;
	glm::vec3		m_position;
	glm::vec3		m_rotation;
	float			m_scale;
	bool			m_bUse_RGBA_colour; // When true, it will overwrite the vertex colours
	glm::vec4		m_RGBA_colour; // Diffuse Colour RGB & Alpha, 0,0,0,1 (black, with transparency of 1.0)
	bool			m_isWireframe;
	bool			m_bDoNotLight;
	bool			m_bIsVisible;
	bool			m_displayBoundingBox;

	glm::vec3	getGLMPosition();
	Vector3		getVECPosition();
	void		setPosition(glm::vec3 pos);
	void		setPosition(Vector3 pos);
};

