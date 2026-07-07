#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./RemoveByDocumentIdRequest.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject RemoveByDocumentIdRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.RemoveByDocumentIdRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RemoveByDocumentIdRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject RemoveByDocumentIdRequest::getIds() const
	{
		return callObjectMethod(
			"getIds",
			"()Ljava/util/Set;"
		);
	}
	inline JString RemoveByDocumentIdRequest::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	inline void RemoveByDocumentIdRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
