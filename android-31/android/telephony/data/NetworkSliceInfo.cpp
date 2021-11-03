#include "../../os/Parcel.hpp"
#include "./NetworkSliceInfo.hpp"

namespace android::telephony::data
{
	// Fields
	JObject NetworkSliceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.NetworkSliceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NetworkSliceInfo::SLICE_DIFFERENTIATOR_NO_SLICE()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_DIFFERENTIATOR_NO_SLICE"
		);
	}
	jint NetworkSliceInfo::SLICE_SERVICE_TYPE_EMBB()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_SERVICE_TYPE_EMBB"
		);
	}
	jint NetworkSliceInfo::SLICE_SERVICE_TYPE_MIOT()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_SERVICE_TYPE_MIOT"
		);
	}
	jint NetworkSliceInfo::SLICE_SERVICE_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_SERVICE_TYPE_NONE"
		);
	}
	jint NetworkSliceInfo::SLICE_SERVICE_TYPE_URLLC()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_SERVICE_TYPE_URLLC"
		);
	}
	jint NetworkSliceInfo::SLICE_STATUS_ALLOWED()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_ALLOWED"
		);
	}
	jint NetworkSliceInfo::SLICE_STATUS_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_CONFIGURED"
		);
	}
	jint NetworkSliceInfo::SLICE_STATUS_DEFAULT_CONFIGURED()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_DEFAULT_CONFIGURED"
		);
	}
	jint NetworkSliceInfo::SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_PLMN()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_PLMN"
		);
	}
	jint NetworkSliceInfo::SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_REGISTERED_AREA()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_REJECTED_NOT_AVAILABLE_IN_REGISTERED_AREA"
		);
	}
	jint NetworkSliceInfo::SLICE_STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.data.NetworkSliceInfo",
			"SLICE_STATUS_UNKNOWN"
		);
	}
	
	// QJniObject forward
	NetworkSliceInfo::NetworkSliceInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint NetworkSliceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkSliceInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint NetworkSliceInfo::getMappedHplmnSliceDifferentiator()
	{
		return callMethod<jint>(
			"getMappedHplmnSliceDifferentiator",
			"()I"
		);
	}
	jint NetworkSliceInfo::getMappedHplmnSliceServiceType()
	{
		return callMethod<jint>(
			"getMappedHplmnSliceServiceType",
			"()I"
		);
	}
	jint NetworkSliceInfo::getSliceDifferentiator()
	{
		return callMethod<jint>(
			"getSliceDifferentiator",
			"()I"
		);
	}
	jint NetworkSliceInfo::getSliceServiceType()
	{
		return callMethod<jint>(
			"getSliceServiceType",
			"()I"
		);
	}
	jint NetworkSliceInfo::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint NetworkSliceInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring NetworkSliceInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NetworkSliceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

