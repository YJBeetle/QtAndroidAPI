#pragma once

#include "./AppSearchBatchResult.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./OpenBlobForWriteResponse.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject OpenBlobForWriteResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.OpenBlobForWriteResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline OpenBlobForWriteResponse::OpenBlobForWriteResponse(android::app::appsearch::AppSearchBatchResult arg0)
		: JObject(
			"android.app.appsearch.OpenBlobForWriteResponse",
			"(Landroid/app/appsearch/AppSearchBatchResult;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void OpenBlobForWriteResponse::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint OpenBlobForWriteResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::appsearch::AppSearchBatchResult OpenBlobForWriteResponse::getResult() const
	{
		return callObjectMethod(
			"getResult",
			"()Landroid/app/appsearch/AppSearchBatchResult;"
		);
	}
	inline void OpenBlobForWriteResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
