#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ReportUsageRequest.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject ReportUsageRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.ReportUsageRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ReportUsageRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString ReportUsageRequest::getDocumentId() const
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		);
	}
	inline JString ReportUsageRequest::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	inline jlong ReportUsageRequest::getUsageTimestampMillis() const
	{
		return callMethod<jlong>(
			"getUsageTimestampMillis",
			"()J"
		);
	}
	inline void ReportUsageRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
