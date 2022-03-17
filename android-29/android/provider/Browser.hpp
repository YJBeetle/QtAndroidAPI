#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./Browser.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Browser::EXTRA_APPLICATION_ID()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_APPLICATION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Browser::EXTRA_CREATE_NEW_TAB()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_CREATE_NEW_TAB",
			"Ljava/lang/String;"
		);
	}
	inline JString Browser::EXTRA_HEADERS()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"EXTRA_HEADERS",
			"Ljava/lang/String;"
		);
	}
	inline JString Browser::INITIAL_ZOOM_LEVEL()
	{
		return getStaticObjectField(
			"android.provider.Browser",
			"INITIAL_ZOOM_LEVEL",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Browser::Browser()
		: JObject(
			"android.provider.Browser",
			"()V"
		) {}
	
	// Methods
	inline void Browser::sendString(android::content::Context arg0, JString arg1)
	{
		callStaticMethod<void>(
			"android.provider.Browser",
			"sendString",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
