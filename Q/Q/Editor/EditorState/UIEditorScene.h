/*
	File Name: UIEditorScene.h
	Project Name: Q
	Author(s):
		Primary: Yoonki Kim
		Secondary:
	All content (C) 2021 DigiPen (USA) Corporation, all rights reserved.
*/

#pragma once
#include "Engine/GameState.h"
class UIEditorScene final : public q_engine::UIState
{
public:
	void Load() override;
	void Unload() override{};
};