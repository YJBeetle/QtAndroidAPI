#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./UwbAddress.def.hpp"
#include "./UwbComplexChannel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UwbRangingParams.def.hpp"

namespace android::ranging::uwb
{
	// Fields
	inline jint UwbRangingParams::CONFIG_MULTICAST_DS_TWR()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"CONFIG_MULTICAST_DS_TWR"
		);
	}
	inline jint UwbRangingParams::CONFIG_PROVISIONED_INDIVIDUAL_MULTICAST_DS_TWR()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"CONFIG_PROVISIONED_INDIVIDUAL_MULTICAST_DS_TWR"
		);
	}
	inline jint UwbRangingParams::CONFIG_PROVISIONED_MULTICAST_DS_TWR()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"CONFIG_PROVISIONED_MULTICAST_DS_TWR"
		);
	}
	inline jint UwbRangingParams::CONFIG_PROVISIONED_UNICAST_DS_TWR()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"CONFIG_PROVISIONED_UNICAST_DS_TWR"
		);
	}
	inline jint UwbRangingParams::CONFIG_PROVISIONED_UNICAST_DS_TWR_VERY_FAST()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"CONFIG_PROVISIONED_UNICAST_DS_TWR_VERY_FAST"
		);
	}
	inline jint UwbRangingParams::CONFIG_UNICAST_DS_TWR()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"CONFIG_UNICAST_DS_TWR"
		);
	}
	inline JObject UwbRangingParams::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.uwb.UwbRangingParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint UwbRangingParams::DURATION_1_MS()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"DURATION_1_MS"
		);
	}
	inline jint UwbRangingParams::DURATION_2_MS()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"DURATION_2_MS"
		);
	}
	inline jint UwbRangingParams::SUB_SESSION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbRangingParams",
			"SUB_SESSION_UNDEFINED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UwbRangingParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UwbRangingParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::ranging::uwb::UwbComplexChannel UwbRangingParams::getComplexChannel() const
	{
		return callObjectMethod(
			"getComplexChannel",
			"()Landroid/ranging/uwb/UwbComplexChannel;"
		);
	}
	inline jint UwbRangingParams::getConfigId() const
	{
		return callMethod<jint>(
			"getConfigId",
			"()I"
		);
	}
	inline android::ranging::uwb::UwbAddress UwbRangingParams::getDeviceAddress() const
	{
		return callObjectMethod(
			"getDeviceAddress",
			"()Landroid/ranging/uwb/UwbAddress;"
		);
	}
	inline android::ranging::uwb::UwbAddress UwbRangingParams::getPeerAddress() const
	{
		return callObjectMethod(
			"getPeerAddress",
			"()Landroid/ranging/uwb/UwbAddress;"
		);
	}
	inline jint UwbRangingParams::getRangingUpdateRate() const
	{
		return callMethod<jint>(
			"getRangingUpdateRate",
			"()I"
		);
	}
	inline jint UwbRangingParams::getSessionId() const
	{
		return callMethod<jint>(
			"getSessionId",
			"()I"
		);
	}
	inline JByteArray UwbRangingParams::getSessionKeyInfo() const
	{
		return callObjectMethod(
			"getSessionKeyInfo",
			"()[B"
		);
	}
	inline jint UwbRangingParams::getSlotDuration() const
	{
		return callMethod<jint>(
			"getSlotDuration",
			"()I"
		);
	}
	inline jint UwbRangingParams::getSubSessionId() const
	{
		return callMethod<jint>(
			"getSubSessionId",
			"()I"
		);
	}
	inline JByteArray UwbRangingParams::getSubSessionKeyInfo() const
	{
		return callObjectMethod(
			"getSubSessionKeyInfo",
			"()[B"
		);
	}
	inline jint UwbRangingParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UwbRangingParams::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UwbRangingParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
