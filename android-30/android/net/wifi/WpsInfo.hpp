#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./WpsInfo.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JString WpsInfo::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		);
	}
	inline JObject WpsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WpsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint WpsInfo::DISPLAY()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"DISPLAY"
		);
	}
	inline jint WpsInfo::INVALID()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"INVALID"
		);
	}
	inline jint WpsInfo::KEYPAD()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"KEYPAD"
		);
	}
	inline jint WpsInfo::LABEL()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"LABEL"
		);
	}
	inline jint WpsInfo::PBC()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"PBC"
		);
	}
	inline JString WpsInfo::pin()
	{
		return getObjectField(
			"pin",
			"Ljava/lang/String;"
		);
	}
	inline jint WpsInfo::setup()
	{
		return getField<jint>(
			"setup"
		);
	}
	
	// Constructors
	inline WpsInfo::WpsInfo()
		: JObject(
			"android.net.wifi.WpsInfo",
			"()V"
		) {}
	inline WpsInfo::WpsInfo(android::net::wifi::WpsInfo &arg0)
		: JObject(
			"android.net.wifi.WpsInfo",
			"(Landroid/net/wifi/WpsInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint WpsInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString WpsInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WpsInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

