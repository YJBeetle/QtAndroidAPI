#pragma once

#include "../content/Context.def.hpp"
#include "../os/LocaleList.def.hpp"
#include "../../JString.hpp"
#include "./LocaleConfig.def.hpp"

namespace android::app
{
	// Fields
	inline jint LocaleConfig::STATUS_NOT_SPECIFIED()
	{
		return getStaticField<jint>(
			"android.app.LocaleConfig",
			"STATUS_NOT_SPECIFIED"
		);
	}
	inline jint LocaleConfig::STATUS_PARSING_FAILED()
	{
		return getStaticField<jint>(
			"android.app.LocaleConfig",
			"STATUS_PARSING_FAILED"
		);
	}
	inline jint LocaleConfig::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.app.LocaleConfig",
			"STATUS_SUCCESS"
		);
	}
	inline JString LocaleConfig::TAG_LOCALE()
	{
		return getStaticObjectField(
			"android.app.LocaleConfig",
			"TAG_LOCALE",
			"Ljava/lang/String;"
		);
	}
	inline JString LocaleConfig::TAG_LOCALE_CONFIG()
	{
		return getStaticObjectField(
			"android.app.LocaleConfig",
			"TAG_LOCALE_CONFIG",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline LocaleConfig::LocaleConfig(android::content::Context arg0)
		: JObject(
			"android.app.LocaleConfig",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint LocaleConfig::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline android::os::LocaleList LocaleConfig::getSupportedLocales() const
	{
		return callObjectMethod(
			"getSupportedLocales",
			"()Landroid/os/LocaleList;"
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
