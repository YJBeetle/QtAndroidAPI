#pragma once

#include "../../../JByteArray.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DownloadRequest.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline JObject DownloadRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.DownloadRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DownloadRequest::getMaxAppIntentSize()
	{
		return callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxAppIntentSize",
			"()I"
		);
	}
	inline jint DownloadRequest::getMaxDestinationUriSize()
	{
		return callStaticMethod<jint>(
			"android.telephony.mbms.DownloadRequest",
			"getMaxDestinationUriSize",
			"()I"
		);
	}
	inline jint DownloadRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DownloadRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Uri DownloadRequest::getDestinationUri() const
	{
		return callObjectMethod(
			"getDestinationUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JString DownloadRequest::getFileServiceId() const
	{
		return callObjectMethod(
			"getFileServiceId",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri DownloadRequest::getSourceUri() const
	{
		return callObjectMethod(
			"getSourceUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint DownloadRequest::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	inline jint DownloadRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JByteArray DownloadRequest::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	inline void DownloadRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

// Base class headers

