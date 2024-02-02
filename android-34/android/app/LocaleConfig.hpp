#pragma once

#include "../content/Context.def.hpp"
#include "../os/LocaleList.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./LocaleConfig.def.hpp"

namespace android::app
{
	// Fields
	inline JObject LocaleConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.app.LocaleConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
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
	inline LocaleConfig::LocaleConfig(android::os::LocaleList arg0)
		: JObject(
			"android.app.LocaleConfig",
			"(Landroid/os/LocaleList;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::LocaleConfig LocaleConfig::fromContextIgnoringOverride(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.app.LocaleConfig",
			"fromContextIgnoringOverride",
			"(Landroid/content/Context;)Landroid/app/LocaleConfig;",
			arg0.object()
		);
	}
	inline jint LocaleConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
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
	inline void LocaleConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
