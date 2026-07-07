#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UwbAddress.def.hpp"

namespace android::ranging::uwb
{
	// Fields
	inline JObject UwbAddress::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.uwb.UwbAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint UwbAddress::EXTENDED_ADDRESS_BYTE_LENGTH()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbAddress",
			"EXTENDED_ADDRESS_BYTE_LENGTH"
		);
	}
	inline jint UwbAddress::SHORT_ADDRESS_BYTE_LENGTH()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbAddress",
			"SHORT_ADDRESS_BYTE_LENGTH"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::ranging::uwb::UwbAddress UwbAddress::createRandomShortAddress()
	{
		return callStaticObjectMethod(
			"android.ranging.uwb.UwbAddress",
			"createRandomShortAddress",
			"()Landroid/ranging/uwb/UwbAddress;"
		);
	}
	inline android::ranging::uwb::UwbAddress UwbAddress::fromBytes(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.ranging.uwb.UwbAddress",
			"fromBytes",
			"([B)Landroid/ranging/uwb/UwbAddress;",
			arg0.object<jbyteArray>()
		);
	}
	inline jint UwbAddress::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UwbAddress::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray UwbAddress::getAddressBytes() const
	{
		return callObjectMethod(
			"getAddressBytes",
			"()[B"
		);
	}
	inline jint UwbAddress::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UwbAddress::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UwbAddress::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::uwb

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::uwb;
#endif
