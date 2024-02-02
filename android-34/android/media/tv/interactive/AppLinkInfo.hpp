#pragma once

#include "../../../content/ComponentName.def.hpp"
#include "../../../net/Uri.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./AppLinkInfo.def.hpp"

namespace android::media::tv::interactive
{
	// Fields
	inline JObject AppLinkInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.AppLinkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AppLinkInfo::AppLinkInfo(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.media.tv.interactive.AppLinkInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jint AppLinkInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ComponentName AppLinkInfo::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::net::Uri AppLinkInfo::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JString AppLinkInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AppLinkInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv::interactive

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif
