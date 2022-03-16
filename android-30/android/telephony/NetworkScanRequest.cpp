#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
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
	
	// Constructors
	NetworkScanRequest::NetworkScanRequest(jint arg0, JArray arg1, jint arg2, jint arg3, jboolean arg4, jint arg5, java::util::ArrayList arg6)
		: JObject(
			"android.telephony.NetworkScanRequest",
			"(I[Landroid/telephony/RadioAccessSpecifier;IIZILjava/util/ArrayList;)V",
			arg0,
			arg1.object<jarray>(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		) {}
	
	// Methods
	jint NetworkScanRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkScanRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean NetworkScanRequest::getIncrementalResults() const
	{
		return callMethod<jboolean>(
			"getIncrementalResults",
			"()Z"
		);
	}
	jint NetworkScanRequest::getIncrementalResultsPeriodicity() const
	{
		return callMethod<jint>(
			"getIncrementalResultsPeriodicity",
			"()I"
		);
	}
	jint NetworkScanRequest::getMaxSearchTime() const
	{
		return callMethod<jint>(
			"getMaxSearchTime",
			"()I"
		);
	}
	java::util::ArrayList NetworkScanRequest::getPlmns() const
	{
		return callObjectMethod(
			"getPlmns",
			"()Ljava/util/ArrayList;"
		);
	}
	jint NetworkScanRequest::getScanType() const
	{
		return callMethod<jint>(
			"getScanType",
			"()I"
		);
	}
	jint NetworkScanRequest::getSearchPeriodicity() const
	{
		return callMethod<jint>(
			"getSearchPeriodicity",
			"()I"
		);
	}
	JArray NetworkScanRequest::getSpecifiers() const
	{
		return callObjectMethod(
			"getSpecifiers",
			"()[Landroid/telephony/RadioAccessSpecifier;"
		);
	}
	jint NetworkScanRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void NetworkScanRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

