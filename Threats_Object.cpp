/*
#include"Threats_Object.h"

//BEGIN THREATS
ThreatsObject::ThreatsObject()
{
    p_object_ = NULL;
    rect_.x = 0;
    rect_.y = 0;
    width_frame_ = 0;
    height_frame_ = 0;
    x_val_ = 0.0;
    y_val_ = 0.0;
    x_pos_ = 0.0;
    y_pos_ = 0.0;
    on_ground_ = 0;
    come_back_time = 0;
    frame_ = 0;
    drop_speed = 40;
}
ThreatsObject::~ThreatsObject()
{

}
bool ThreatsObject::_BaseObject_LoadImg(std::string path, SDL_Renderer* screen)
{
    SDL_Texture* new_texture = NULL;

    SDL_Surface* load_surface = IMG_Load(path.c_str());
    if (load_surface != NULL)
    {
        SDL_SetColorKey(load_surface, SDL_TRUE, SDL_MapRGB(load_surface->format, COLOR_KEY_R, COLOR_KEY_G, COLOR_KEY_B));
        new_texture = SDL_CreateTextureFromSurface(screen, load_surface);
        if (new_texture != NULL)
        {
            rect_.w = load_surface->w;
            rect_.h = load_surface->h;

        }
        SDL_FreeSurface(load_surface);
    }
    p_object_ = new_texture;

    if (p_object_ != NULL) return true;
    return false;
}
bool ThreatsObject::LoadImg(std::string path, SDL_Renderer* screen)
{
    bool ret = ThreatsObject::_BaseObject_LoadImg(path, screen);

    if (ret)
    {
        width_frame_ = rect_.w / 4;
        height_frame_ = rect_.h;
    }
    if (ret) return true;
    else return false;
}

void ThreatsObject::set_clips()
{
    if (width_frame_ > 0 && height_frame_ > 0)
    {
        frame_clip_[0].x = 0;
        frame_clip_[0].y = 0;
        frame_clip_[0].w = width_frame_;
        frame_clip_[0].h = height_frame_;

        frame_clip_[1].x = width_frame_;
        frame_clip_[1].y = 0;
        frame_clip_[1].w = width_frame_;
        frame_clip_[1].h = height_frame_;

        frame_clip_[2].x = 2 * width_frame_;
        frame_clip_[2].y = 0;
        frame_clip_[2].w = width_frame_;
        frame_clip_[2].h = height_frame_;

        frame_clip_[3].x = 3 * width_frame_;
        frame_clip_[3].y = 0;
        frame_clip_[3].w = width_frame_;
        frame_clip_[3].h = height_frame_;
    }
}

void ThreatsObject::Show(SDL_Renderer* des)
{
    LoadImg("CatPNG//ball.png", des);

    rect_.x = x_pos_;// - map_x_;
    rect_.y = y_pos_ += drop_speed;//- map_y_;
    if (y_pos_ >= 600)
    {
        y_pos_ = 0;
        x_pos_ = rand() % (SCREEN_WIDTH - width_frame_);
    }
    frame_++;
    if (frame_ >= 4)
    {
        frame_ = 0;
    }
    SDL_Rect* currentClip = &frame_clip_[frame_];
    SDL_Rect renderQuad = { rect_.x, rect_.y, width_frame_, height_frame_ };
    SDL_RenderCopy(des, p_object_, currentClip, &renderQuad);
}

//END THREAT

*/