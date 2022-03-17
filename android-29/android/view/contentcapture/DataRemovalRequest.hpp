#pragma once

#include "../../os/Parcel.def.hpp"
#include "./DataRemovalRequest_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./DataRemovalRequest.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	inline JObject DataRemovalRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.contentcapture.DataRemovalRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint DataRemovalRequest::FLAG_IS_PREFIX()
	{
		return getStaticField<jint>(
			"android.view.contentcapture.DataRemovalRequest",
			"FLAG_IS_PREFIX"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DataRemovalRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject DataRemovalRequest::getLocusIdRequests() const
	{
		return callObjectMethod(
			"getLocusIdRequests",
			"()Ljava/util/List;"
		);
	}
	inline JString DataRemovalRequest::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean DataRemovalRequest::isForEverything() const
	{
		return callMethod<jboolean>(
			"isForEverything",
			"()Z"
		);
	}
	inline void DataRemovalRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::contentcapture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::contentcapture;
#endif
