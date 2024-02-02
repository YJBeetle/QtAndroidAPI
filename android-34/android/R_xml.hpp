#pragma once

#include "./R_xml.def.hpp"

namespace android
{
	// Fields
	
	// Constructors
	inline R_xml::R_xml()
		: JObject(
			"android.R$xml",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
