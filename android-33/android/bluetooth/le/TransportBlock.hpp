#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./TransportBlock.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline JObject TransportBlock::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.TransportBlock",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TransportBlock::TransportBlock(jint arg0, jint arg1, jint arg2, JByteArray arg3)
		: JObject(
			"android.bluetooth.le.TransportBlock",
			"(III[B)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		) {}
	
	// Methods
	inline jint TransportBlock::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TransportBlock::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint TransportBlock::getOrgId() const
	{
		return callMethod<jint>(
			"getOrgId",
			"()I"
		);
	}
	inline jint TransportBlock::getTdsFlags() const
	{
		return callMethod<jint>(
			"getTdsFlags",
			"()I"
		);
	}
	inline JByteArray TransportBlock::getTransportData() const
	{
		return callObjectMethod(
			"getTransportData",
			"()[B"
		);
	}
	inline jint TransportBlock::getTransportDataLength() const
	{
		return callMethod<jint>(
			"getTransportDataLength",
			"()I"
		);
	}
	inline JByteArray TransportBlock::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline jint TransportBlock::totalBytes() const
	{
		return callMethod<jint>(
			"totalBytes",
			"()I"
		);
	}
	inline void TransportBlock::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
