#pragma once

#include "../../JArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./NetworkScanRequest.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject NetworkScanRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.NetworkScanRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint NetworkScanRequest::SCAN_TYPE_ONE_SHOT()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScanRequest",
			"SCAN_TYPE_ONE_SHOT"
		);
	}
	inline jint NetworkScanRequest::SCAN_TYPE_PERIODIC()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScanRequest",
			"SCAN_TYPE_PERIODIC"
		);
	}
	
	// Constructors
	inline NetworkScanRequest::NetworkScanRequest(jint arg0, JArray arg1, jint arg2, jint arg3, jboolean arg4, jint arg5, java::util::ArrayList arg6)
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
	inline jint NetworkScanRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NetworkScanRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean NetworkScanRequest::getIncrementalResults() const
	{
		return callMethod<jboolean>(
			"getIncrementalResults",
			"()Z"
		);
	}
	inline jint NetworkScanRequest::getIncrementalResultsPeriodicity() const
	{
		return callMethod<jint>(
			"getIncrementalResultsPeriodicity",
			"()I"
		);
	}
	inline jint NetworkScanRequest::getMaxSearchTime() const
	{
		return callMethod<jint>(
			"getMaxSearchTime",
			"()I"
		);
	}
	inline java::util::ArrayList NetworkScanRequest::getPlmns() const
	{
		return callObjectMethod(
			"getPlmns",
			"()Ljava/util/ArrayList;"
		);
	}
	inline jint NetworkScanRequest::getScanType() const
	{
		return callMethod<jint>(
			"getScanType",
			"()I"
		);
	}
	inline jint NetworkScanRequest::getSearchPeriodicity() const
	{
		return callMethod<jint>(
			"getSearchPeriodicity",
			"()I"
		);
	}
	inline JArray NetworkScanRequest::getSpecifiers() const
	{
		return callObjectMethod(
			"getSpecifiers",
			"()[Landroid/telephony/RadioAccessSpecifier;"
		);
	}
	inline jint NetworkScanRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void NetworkScanRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
