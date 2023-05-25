
#ifndef _BLOCK_H_                 // Prevent multiple definitions if this 
#define _BLOCK_H_                 // file is included in more than one place
#define WIN32_LEAN_AND_MEAN

#include "entity.h"
#include "constants.h"

namespace blockNS
{
    const int WIDTH = 64;                   // image width
    const int HEIGHT = 64;                  // image height
    const int X = 0;   // location on screen
    const int Y = 0;
    const float SPEED = 0;                // 100 pixels per second
    const float MASS = 0;// 10.0f;              // mass
    const int   TEXTURE_COLS = 1;           // texture has 8 columns
    const int   BLOCK_START_FRAME = 0;      // ball starts at frame 0
    const int   BLOCK_END_FRAME = 0;        // ball animation 
}

// inherits from Entity class
class Block : public Entity
{
private:

public:
    // constructor
    Block();

    // inherited member functions
    virtual void draw();
    virtual bool initialize(Game* gamePtr, int width, int height, int ncols,
        TextureManager* textureM);
    void update(float frameTime);
    void damage(WEAPON);
};
#endif

