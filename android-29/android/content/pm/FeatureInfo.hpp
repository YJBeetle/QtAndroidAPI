#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./FeatureInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject FeatureInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.FeatureInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint FeatureInfo::FLAG_REQUIRED()
	{
		return getStaticField<jint>(
			"android.content.pm.FeatureInfo",
			"FLAG_REQUIRED"
		);
	}
	inline jint FeatureInfo::GL_ES_VERSION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.pm.FeatureInfo",
			"GL_ES_VERSION_UNDEFINED"
		);
	}
	inline jint FeatureInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline JString FeatureInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	inline jint FeatureInfo::reqGlEsVersion()
	{
		return getField<jint>(
			"reqGlEsVersion"
		);
	}
	inline jint FeatureInfo::version()
	{
		return getField<jint>(
			"version"
		);
	}
	
	// Constructors
	inline FeatureInfo::FeatureInfo()
		: JObject(
			"android.content.pm.FeatureInfo",
			"()V"
		) {}
	inline FeatureInfo::FeatureInfo(android::content::pm::FeatureInfo &arg0)
		: JObject(
			"android.content.pm.FeatureInfo",
			"(Landroid/content/pm/FeatureInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint FeatureInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString FeatureInfo::getGlEsVersion() const
	{
		return callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JString FeatureInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FeatureInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

