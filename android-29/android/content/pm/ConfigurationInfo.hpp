#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ConfigurationInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject ConfigurationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ConfigurationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ConfigurationInfo::GL_ES_VERSION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"GL_ES_VERSION_UNDEFINED"
		);
	}
	inline jint ConfigurationInfo::INPUT_FEATURE_FIVE_WAY_NAV()
	{
		return getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"INPUT_FEATURE_FIVE_WAY_NAV"
		);
	}
	inline jint ConfigurationInfo::INPUT_FEATURE_HARD_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"INPUT_FEATURE_HARD_KEYBOARD"
		);
	}
	inline jint ConfigurationInfo::reqGlEsVersion()
	{
		return getField<jint>(
			"reqGlEsVersion"
		);
	}
	inline jint ConfigurationInfo::reqInputFeatures()
	{
		return getField<jint>(
			"reqInputFeatures"
		);
	}
	inline jint ConfigurationInfo::reqKeyboardType()
	{
		return getField<jint>(
			"reqKeyboardType"
		);
	}
	inline jint ConfigurationInfo::reqNavigation()
	{
		return getField<jint>(
			"reqNavigation"
		);
	}
	inline jint ConfigurationInfo::reqTouchScreen()
	{
		return getField<jint>(
			"reqTouchScreen"
		);
	}
	
	// Constructors
	inline ConfigurationInfo::ConfigurationInfo()
		: JObject(
			"android.content.pm.ConfigurationInfo",
			"()V"
		) {}
	inline ConfigurationInfo::ConfigurationInfo(android::content::pm::ConfigurationInfo &arg0)
		: JObject(
			"android.content.pm.ConfigurationInfo",
			"(Landroid/content/pm/ConfigurationInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ConfigurationInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString ConfigurationInfo::getGlEsVersion() const
	{
		return callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JString ConfigurationInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ConfigurationInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
