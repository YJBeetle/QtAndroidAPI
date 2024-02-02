#pragma once

#include "../os/Parcel.def.hpp"
#include "./NfcAntennaInfo.def.hpp"

namespace android::nfc
{
	// Fields
	inline JObject NfcAntennaInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.NfcAntennaInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline NfcAntennaInfo::NfcAntennaInfo(jint arg0, jint arg1, jboolean arg2, JObject arg3)
		: JObject(
			"android.nfc.NfcAntennaInfo",
			"(IIZLjava/util/List;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline jint NfcAntennaInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject NfcAntennaInfo::getAvailableNfcAntennas() const
	{
		return callObjectMethod(
			"getAvailableNfcAntennas",
			"()Ljava/util/List;"
		);
	}
	inline jint NfcAntennaInfo::getDeviceHeight() const
	{
		return callMethod<jint>(
			"getDeviceHeight",
			"()I"
		);
	}
	inline jint NfcAntennaInfo::getDeviceWidth() const
	{
		return callMethod<jint>(
			"getDeviceWidth",
			"()I"
		);
	}
	inline jboolean NfcAntennaInfo::isDeviceFoldable() const
	{
		return callMethod<jboolean>(
			"isDeviceFoldable",
			"()Z"
		);
	}
	inline void NfcAntennaInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc;
#endif
