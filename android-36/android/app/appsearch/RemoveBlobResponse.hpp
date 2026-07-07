#pragma once

#include "./AppSearchBatchResult.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./RemoveBlobResponse.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject RemoveBlobResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.RemoveBlobResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline RemoveBlobResponse::RemoveBlobResponse(android::app::appsearch::AppSearchBatchResult arg0)
		: JObject(
			"android.app.appsearch.RemoveBlobResponse",
			"(Landroid/app/appsearch/AppSearchBatchResult;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint RemoveBlobResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::appsearch::AppSearchBatchResult RemoveBlobResponse::getResult() const
	{
		return callObjectMethod(
			"getResult",
			"()Landroid/app/appsearch/AppSearchBatchResult;"
		);
	}
	inline void RemoveBlobResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
