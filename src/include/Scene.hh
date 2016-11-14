#pragma once

#include <cstddef>

#include <tdogl/Camera.h>

#include <Algorithm.hh>

class Manager;

class Scene {
public:
    Scene(Manager* manager) : manager_(manager) {}
    virtual ~Scene() {}

    virtual void init() = 0;
    virtual void load(Algorithm* algorithm) = 0;
    virtual void unload() = 0;
    virtual bool update(float elapsedTime) = 0;
    virtual void render() = 0;
    virtual void processErrors(bool quiet=false) = 0;

    virtual void resize(size_t width, size_t height) {
        width_ = width;
        height_ = height;
        aspect_ratio_ = (float)width / (float)height;
    }

protected:
    Manager* manager_;
    tdogl::Camera camera_;

    size_t width_;
    size_t height_;
    float aspect_ratio_;
};
