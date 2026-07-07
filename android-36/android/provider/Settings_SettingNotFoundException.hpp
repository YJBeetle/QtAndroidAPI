#pragma once

#include "../../JString.hpp"
#include "./Settings_SettingNotFoundException.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline Settings_SettingNotFoundException::Settings_SettingNotFoundException(JString arg0)
		: android::util::AndroidException(
			"android.provider.Settings$SettingNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
