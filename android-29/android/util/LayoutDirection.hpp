#pragma once

#include "./LayoutDirection.def.hpp"

namespace android::util
{
	// Fields
	inline jint LayoutDirection::INHERIT()
	{
		return getStaticField<jint>(
			"android.util.LayoutDirection",
			"INHERIT"
		);
	}
	inline jint LayoutDirection::LOCALE()
	{
		return getStaticField<jint>(
			"android.util.LayoutDirection",
			"LOCALE"
		);
	}
	inline jint LayoutDirection::LTR()
	{
		return getStaticField<jint>(
			"android.util.LayoutDirection",
			"LTR"
		);
	}
	inline jint LayoutDirection::RTL()
	{
		return getStaticField<jint>(
			"android.util.LayoutDirection",
			"RTL"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
