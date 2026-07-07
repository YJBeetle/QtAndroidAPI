#pragma once

#include "./AppSearchBatchResult.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./OpenBlobForReadResponse.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject OpenBlobForReadResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.OpenBlobForReadResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline OpenBlobForReadResponse::OpenBlobForReadResponse(android::app::appsearch::AppSearchBatchResult arg0)
		: JObject(
			"android.app.appsearch.OpenBlobForReadResponse",
			"(Landroid/app/appsearch/AppSearchBatchResult;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void OpenBlobForReadResponse::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint OpenBlobForReadResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::appsearch::AppSearchBatchResult OpenBlobForReadResponse::getResult() const
	{
		return callObjectMethod(
			"getResult",
			"()Landroid/app/appsearch/AppSearchBatchResult;"
		);
	}
	inline void OpenBlobForReadResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
