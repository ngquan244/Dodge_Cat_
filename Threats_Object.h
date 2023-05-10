#pragma once
/*
#ifndef THREATS_OBJECT_H_
#define THREATS_OBJECT_H_

#include "Common_Func.h"

class ThreatsObject
{
public:
	ThreatsObject();
	~ThreatsObject();

	void set_x_val(const float& xVal) { x_val_ = xVal; }
	void set_y_val(const float& yVal) { y_val_ = yVal; }

	void set_x_pos(const float& xp) { x_pos_ = xp; }
	void set_y_pos(const float& yp) { y_pos_ = yp; }
	float get_x_pos() const { return x_pos_; }
	float get_y_pos() const { return y_pos_; }

	void set_clips();
	bool LoadImg(std::string path, SDL_Renderer* screen);
	bool _BaseObject_LoadImg(std::string path, SDL_Renderer* screen);
	void Show(SDL_Renderer* des);
	int get_width_frame() const { return width_frame_; }
	int get_height_frame() const { return height_frame_; }
	void set_drop_speed(const float& ds) { drop_speed = ds; }

private:
	int drop_speed;
	int map_x_;
	int map_y_;
	float x_val_;
	float y_val_;
	float x_pos_;
	float y_pos_;

	bool on_ground_;
	int come_back_time;
	SDL_Rect frame_clip_[4];
	int width_frame_;
	int height_frame_;
	int frame_;
	SDL_Rect rect_;
	SDL_Texture* p_object_;
};

#endif
*/