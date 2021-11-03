#include "../os/Parcel.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./NetworkScanRequest.hpp"

namespace android::telephony
{
	// Fields
	JObject NetworkScanRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.NetworkScanRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NetworkScanRequest::SCAN_TYPE_ONE_SHOT()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScanRequest",
			"SCAN_TYPE_ONE_SHOT"
		);
	}
	jint NetworkScanRequest::SCAN_TYPE_PERIODIC()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScanRequest",
			"SCAN_TYPE_PERIODIC"
		);
	}
	
	// QJniObject forward
	NetworkScanRequest::NetworkScanRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkScanRequest::NetworkScanRequest(jint arg0, jarray arg1, jint arg2, jint arg3, jboolean arg4, jint arg5, java::util::ArrayList arg6)
		: JObject(
			"android.telephony.NetworkScanRequest",
			"(I[Landroid/telephony/RadioAccessSpecifier;IIZILjava/util/ArrayList;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		) {}
	
	// Methods
	jint NetworkScanRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkScanRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean NetworkScanRequest::getIncrementalResults()
	{
		return callMethod<jboolean>(
			"getIncrementalResults",
			"()Z"
		);
	}
	jint NetworkScanRequest::getIncrementalResultsPeriodicity()
	{
		return callMethod<jint>(
			"getIncrementalResultsPeriodicity",
			"()I"
		);
	}
	jint NetworkScanRequest::getMaxSearchTime()
	{
		return callMethod<jint>(
			"getMaxSearchTime",
			"()I"
		);
	}
	java::util::ArrayList NetworkScanRequest::getPlmns()
	{
		return callObjectMethod(
			"getPlmns",
			"()Ljava/util/ArrayList;"
		);
	}
	jint NetworkScanRequest::getScanType()
	{
		return callMethod<jint>(
			"getScanType",
			"()I"
		);
	}
	jint NetworkScanRequest::getSearchPeriodicity()
	{
		return callMethod<jint>(
			"getSearchPeriodicity",
			"()I"
		);
	}
	jarray NetworkScanRequest::getSpecifiers()
	{
		return callObjectMethod(
			"getSpecifiers",
			"()[Landroid/telephony/RadioAccessSpecifier;"
		).object<jarray>();
	}
	jint NetworkScanRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void NetworkScanRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

