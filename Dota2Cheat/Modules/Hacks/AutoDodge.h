#pragma once
#include "../../pch.h"
#include "../../CheatSDK/include.h"
#include "../MListeners.h"
namespace Modules {
	inline class AutoDodge : public IRunFrameListener {
	public:
		void OnFrame() override;
	} AutoDodge;
}