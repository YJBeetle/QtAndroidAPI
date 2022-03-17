#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NetworkSliceInfo.def.hpp"

namespace android::telephony::data
{
	// Fields
	inline JObject NetworkSliceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.NetworkSliceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint NetworkSliceInfo::SLICE_DIFFERENTIATOR_NO_SLICE()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_DIFFERENTIATOR_NO_SLICE"
		);
	}
	inline jint NetworkSliceInfo::SLICE_SERVICE_TYPE_EMBB()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_SERVICE_TYPE_EMBB"
		);
	}
	inline jint NetworkSliceInfo::SLICE_SERVICE_TYPE_MIOT()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_SERVICE_TYPE_MIOT"
		);
	}
	inline jint NetworkSliceInfo::SLICE_SERVICE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_SERVICE_TYPE_NONE"
		);
	}
	inline jint NetworkSliceInfo::SLICE_SERVICE_TYPE_URLLC()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_SERVICE_TYPE_URLLC"
		);
	}
	inline jint NetworkSliceInfo::SLICE_STATUS_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_ALLOWED"
		);
	}
	inline jint NetworkSliceInfo::SLICE_STATUS_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_CONFIGURED"
		);
	}
	inline jint NetworkSliceInfo::SLICE_STATUS_DEFAULT_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_DEFAULT_CONFIGURED"
		);
	}
	inline jint NetworkSliceInfo::SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_PLMN"
		);
	}
	inline jint NetworkSliceInfo::SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_REGISTERED_AREA()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_REGISTERED_AREA"
		);
	}
	inline jint NetworkSliceInfo::SLICE_STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint NetworkSliceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NetworkSliceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint NetworkSliceInfo::getMappedHplmnSliceDifferentiator() const
	{
		return callMethod<jint>(
			"getMappedHplmnSliceDifferentiator",
			"()I"
		);
	}
	inline jint NetworkSliceInfo::getMappedHplmnSliceServiceType() const
	{
		return callMethod<jint>(
			"getMappedHplmnSliceServiceType",
			"()I"
		);
	}
	inline jint NetworkSliceInfo::getSliceDifferentiator() const
	{
		return callMethod<jint>(
			"getSliceDifferentiator",
			"()I"
		);
	}
	inline jint NetworkSliceInfo::getSliceServiceType() const
	{
		return callMethod<jint>(
			"getSliceServiceType",
			"()I"
		);
	}
	inline jint NetworkSliceInfo::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline jint NetworkSliceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString NetworkSliceInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NetworkSliceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::data;
#endif
