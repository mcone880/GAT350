#pragma once
#include "Types.h"
#include "Ray.h"
#include "Material.h"

class Geometry
{
public:
    Geometry() = default;
    Geometry(std::shared_ptr<Material> material) : material{ material } {}
    virtual ~Geometry() = default;

    virtual bool Hit(const ray_t& r, float tMin, float tMax, rayCastHit_t& hit) = 0;
public:
    std::shared_ptr<Material> material;
};