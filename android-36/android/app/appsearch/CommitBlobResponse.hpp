#pragma once

#include "./AppSearchBatchResult.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./CommitBlobResponse.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject CommitBlobResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.CommitBlobResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CommitBlobResponse::CommitBlobResponse(android::app::appsearch::AppSearchBatchResult arg0)
		: JObject(
			"android.app.appsearch.CommitBlobResponse",
			"(Landroid/app/appsearch/AppSearchBatchResult;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint CommitBlobResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::appsearch::AppSearchBatchResult CommitBlobResponse::getResult() const
	{
		return callObjectMethod(
			"getResult",
			"()Landroid/app/appsearch/AppSearchBatchResult;"
		);
	}
	inline void CommitBlobResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
