#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./AppInfo.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline JObject AppInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.ondevicepersonalization.AppInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AppInfo::AppInfo(jboolean arg0)
		: JObject(
			"android.adservices.ondevicepersonalization.AppInfo",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline jint AppInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AppInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AppInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AppInfo::isInstalled() const
	{
		return callMethod<jboolean>(
			"isInstalled",
			"()Z"
		);
	}
	inline void AppInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
