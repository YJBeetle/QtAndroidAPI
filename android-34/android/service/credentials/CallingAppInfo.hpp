#pragma once

#include "../../content/pm/SigningInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./CallingAppInfo.def.hpp"

namespace android::service::credentials
{
	// Fields
	inline JObject CallingAppInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.service.credentials.CallingAppInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CallingAppInfo::CallingAppInfo(JString arg0, android::content::pm::SigningInfo arg1)
		: JObject(
			"android.service.credentials.CallingAppInfo",
			"(Ljava/lang/String;Landroid/content/pm/SigningInfo;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline CallingAppInfo::CallingAppInfo(JString arg0, android::content::pm::SigningInfo arg1, JString arg2)
		: JObject(
			"android.service.credentials.CallingAppInfo",
			"(Ljava/lang/String;Landroid/content/pm/SigningInfo;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jint CallingAppInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString CallingAppInfo::getOrigin() const
	{
		return callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		);
	}
	inline JString CallingAppInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::SigningInfo CallingAppInfo::getSigningInfo() const
	{
		return callObjectMethod(
			"getSigningInfo",
			"()Landroid/content/pm/SigningInfo;"
		);
	}
	inline JString CallingAppInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CallingAppInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::credentials

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::credentials;
#endif
