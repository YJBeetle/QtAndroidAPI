#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./FileInfo.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline JObject FileInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.FileInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FileInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean FileInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString FileInfo::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri FileInfo::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint FileInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void FileInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::mbms;
#endif
