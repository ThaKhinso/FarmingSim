#pragma once
#include "raylib.h"


struct Animation {
    Texture2D texture;       // The sprite sheet texture
    int frameWidth;          // Width of one frame in the sprite sheet
    int frameHeight;         // Height of one frame in the sprite sheet
    int currentFrame;        // The current frame index in the animation
    int totalFrames;         // Total number of frames in the sprite sheet (e.g., columns * rows)
    float updateTime;        // Time between frame updates (how fast the animation plays)
    float elapsedTime;       // Elapsed time for frame updates
    bool loop;               // Should the animation loop when it reaches the end?
    int rows;                // Number of rows in the sprite sheet
    int columns;             // Number of columns in the sprite sheet
};

void UpdateAnimation(Animation *anim, float deltaTime);
void DrawAnimation(Animation *anim, Vector2 position);
