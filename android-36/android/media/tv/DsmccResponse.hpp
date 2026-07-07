#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/ParcelFileDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./DsmccResponse.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JString DsmccResponse::BIOP_MESSAGE_TYPE_DIRECTORY()
	{
		return getStaticObjectField(
			"android.media.tv.DsmccResponse",
			"BIOP_MESSAGE_TYPE_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString DsmccResponse::BIOP_MESSAGE_TYPE_FILE()
	{
		return getStaticObjectField(
			"android.media.tv.DsmccResponse",
			"BIOP_MESSAGE_TYPE_FILE",
			"Ljava/lang/String;"
		);
	}
	inline JString DsmccResponse::BIOP_MESSAGE_TYPE_SERVICE_GATEWAY()
	{
		return getStaticObjectField(
			"android.media.tv.DsmccResponse",
			"BIOP_MESSAGE_TYPE_SERVICE_GATEWAY",
			"Ljava/lang/String;"
		);
	}
	inline JString DsmccResponse::BIOP_MESSAGE_TYPE_STREAM()
	{
		return getStaticObjectField(
			"android.media.tv.DsmccResponse",
			"BIOP_MESSAGE_TYPE_STREAM",
			"Ljava/lang/String;"
		);
	}
	inline JObject DsmccResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.DsmccResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline DsmccResponse::DsmccResponse(jint arg0, jint arg1, jint arg2, android::os::ParcelFileDescriptor arg3)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.DsmccResponse",
			"(IIILandroid/os/ParcelFileDescriptor;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	inline DsmccResponse::DsmccResponse(jint arg0, jint arg1, jint arg2, JIntArray arg3, JArray arg4)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.DsmccResponse",
			"(III[I[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4.object<jarray>()
		) {}
	inline DsmccResponse::DsmccResponse(jint arg0, jint arg1, jint arg2, jboolean arg3, JObject arg4)
		: android::media::tv::BroadcastInfoResponse(
			"android.media.tv.DsmccResponse",
			"(IIIZLjava/util/List;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		) {}
	
	// Methods
	inline jint DsmccResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString DsmccResponse::getBiopMessageType() const
	{
		return callObjectMethod(
			"getBiopMessageType",
			"()Ljava/lang/String;"
		);
	}
	inline JObject DsmccResponse::getChildList() const
	{
		return callObjectMethod(
			"getChildList",
			"()Ljava/util/List;"
		);
	}
	inline android::os::ParcelFileDescriptor DsmccResponse::getFile() const
	{
		return callObjectMethod(
			"getFile",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline JIntArray DsmccResponse::getStreamEventIds() const
	{
		return callObjectMethod(
			"getStreamEventIds",
			"()[I"
		);
	}
	inline JArray DsmccResponse::getStreamEventNames() const
	{
		return callObjectMethod(
			"getStreamEventNames",
			"()[Ljava/lang/String;"
		);
	}
	inline void DsmccResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers
#include "./BroadcastInfoResponse.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
