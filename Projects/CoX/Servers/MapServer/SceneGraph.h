/*
 * SEGS - Super Entity Game Server
 * http://www.segs.io/
 * Copyright (c) 2006 - 2018 SEGS Team (see Authors.txt)
 * This software is licensed! (See License.txt for details)
 */

#pragma once
#include <glm/vec3.hpp>

class QString;

///
/// \brief The SceneGraph class and functions operating on it are central point of access to the world's geometry
///
class SceneGraph
{
    glm::vec3 m_spawn_point;
public:
    SceneGraph();
    bool loadFromFile(const QString &);
    void set_default_spawn_point(glm::vec3 loc) { m_spawn_point = loc; }
    glm::vec3 spawn_location() const { return m_spawn_point; }
};
