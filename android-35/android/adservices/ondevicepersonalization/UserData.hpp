#pragma once

#include "../../net/NetworkCapabilities.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./UserData.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline JObject UserData::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.ondevicepersonalization.UserData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UserData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UserData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject UserData::getAppInfos() const
	{
		return callObjectMethod(
			"getAppInfos",
			"()Ljava/util/Map;"
		);
	}
	inline jlong UserData::getAvailableStorageBytes() const
	{
		return callMethod<jlong>(
			"getAvailableStorageBytes",
			"()J"
		);
	}
	inline jint UserData::getBatteryPercentage() const
	{
		return callMethod<jint>(
			"getBatteryPercentage",
			"()I"
		);
	}
	inline JString UserData::getCarrier() const
	{
		return callObjectMethod(
			"getCarrier",
			"()Ljava/lang/String;"
		);
	}
	inline jint UserData::getDataNetworkType() const
	{
		return callMethod<jint>(
			"getDataNetworkType",
			"()I"
		);
	}
	inline android::net::NetworkCapabilities UserData::getNetworkCapabilities() const
	{
		return callObjectMethod(
			"getNetworkCapabilities",
			"()Landroid/net/NetworkCapabilities;"
		);
	}
	inline jint UserData::getOrientation() const
	{
		return callMethod<jint>(
			"getOrientation",
			"()I"
		);
	}
	inline java::time::Duration UserData::getTimezoneUtcOffset() const
	{
		return callObjectMethod(
			"getTimezoneUtcOffset",
			"()Ljava/time/Duration;"
		);
	}
	inline jint UserData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void UserData::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
