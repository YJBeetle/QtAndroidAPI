#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./TransportDiscoveryData.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline JObject TransportDiscoveryData::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.TransportDiscoveryData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TransportDiscoveryData::TransportDiscoveryData(JByteArray arg0)
		: JObject(
			"android.bluetooth.le.TransportDiscoveryData",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline TransportDiscoveryData::TransportDiscoveryData(jint arg0, JObject arg1)
		: JObject(
			"android.bluetooth.le.TransportDiscoveryData",
			"(ILjava/util/List;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint TransportDiscoveryData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TransportDiscoveryData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject TransportDiscoveryData::getTransportBlocks() const
	{
		return callObjectMethod(
			"getTransportBlocks",
			"()Ljava/util/List;"
		);
	}
	inline jint TransportDiscoveryData::getTransportDataType() const
	{
		return callMethod<jint>(
			"getTransportDataType",
			"()I"
		);
	}
	inline JByteArray TransportDiscoveryData::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline jint TransportDiscoveryData::totalBytes() const
	{
		return callMethod<jint>(
			"totalBytes",
			"()I"
		);
	}
	inline void TransportDiscoveryData::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
