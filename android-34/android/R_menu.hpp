#pragma once

#include "./R_menu.def.hpp"

namespace android
{
	// Fields
	
	// Constructors
	inline R_menu::R_menu()
		: JObject(
			"android.R$menu",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
