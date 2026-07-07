#pragma once

#include "./Config.def.hpp"

namespace android::util
{
	// Fields
	inline jboolean Config::DEBUG()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"DEBUG"
		);
	}
	inline jboolean Config::LOGD()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"LOGD"
		);
	}
	inline jboolean Config::LOGV()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"LOGV"
		);
	}
	inline jboolean Config::PROFILE()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"PROFILE"
		);
	}
	inline jboolean Config::RELEASE()
	{
		return getStaticField<jboolean>(
			"android.util.Config",
			"RELEASE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
