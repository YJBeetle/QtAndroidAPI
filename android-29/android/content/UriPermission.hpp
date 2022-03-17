#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./UriPermission.def.hpp"

namespace android::content
{
	// Fields
	inline JObject UriPermission::CREATOR()
	{
		return getStaticObjectField(
			"android.content.UriPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong UriPermission::INVALID_TIME()
	{
		return getStaticField<jlong>(
			"android.content.UriPermission",
			"INVALID_TIME"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UriPermission::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong UriPermission::getPersistedTime() const
	{
		return callMethod<jlong>(
			"getPersistedTime",
			"()J"
		);
	}
	inline android::net::Uri UriPermission::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jboolean UriPermission::isReadPermission() const
	{
		return callMethod<jboolean>(
			"isReadPermission",
			"()Z"
		);
	}
	inline jboolean UriPermission::isWritePermission() const
	{
		return callMethod<jboolean>(
			"isWritePermission",
			"()Z"
		);
	}
	inline JString UriPermission::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UriPermission::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
