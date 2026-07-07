#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UwbComplexChannel.def.hpp"

namespace android::ranging::uwb
{
	// Fields
	inline JObject UwbComplexChannel::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.uwb.UwbComplexChannel",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint UwbComplexChannel::UWB_CHANNEL_10()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_CHANNEL_10"
		);
	}
	inline jint UwbComplexChannel::UWB_CHANNEL_12()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_CHANNEL_12"
		);
	}
	inline jint UwbComplexChannel::UWB_CHANNEL_13()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_CHANNEL_13"
		);
	}
	inline jint UwbComplexChannel::UWB_CHANNEL_14()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_CHANNEL_14"
		);
	}
	inline jint UwbComplexChannel::UWB_CHANNEL_5()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_CHANNEL_5"
		);
	}
	inline jint UwbComplexChannel::UWB_CHANNEL_6()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_CHANNEL_6"
		);
	}
	inline jint UwbComplexChannel::UWB_CHANNEL_8()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_CHANNEL_8"
		);
	}
	inline jint UwbComplexChannel::UWB_CHANNEL_9()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_CHANNEL_9"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_10()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_10"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_11()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_11"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_12()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_12"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_25()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_25"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_26()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_26"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_27()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_27"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_28()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_28"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_29()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_29"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_30()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_30"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_31()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_31"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_32()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_32"
		);
	}
	inline jint UwbComplexChannel::UWB_PREAMBLE_CODE_INDEX_9()
	{
		return getStaticField<jint>(
			"android.ranging.uwb.UwbComplexChannel",
			"UWB_PREAMBLE_CODE_INDEX_9"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UwbComplexChannel::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UwbComplexChannel::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint UwbComplexChannel::getChannel() const
	{
		return callMethod<jint>(
			"getChannel",
			"()I"
		);
	}
	inline jint UwbComplexChannel::getPreambleIndex() const
	{
		return callMethod<jint>(
			"getPreambleIndex",
			"()I"
		);
	}
	inline jint UwbComplexChannel::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UwbComplexChannel::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UwbComplexChannel::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
