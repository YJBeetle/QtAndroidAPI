#pragma once

#include "./MediaStore_Images.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline MediaStore_Images::MediaStore_Images()
		: JObject(
			"android.provider.MediaStore$Images",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
