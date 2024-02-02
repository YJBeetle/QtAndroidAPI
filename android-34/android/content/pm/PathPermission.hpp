#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./PathPermission.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PathPermission::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PathPermission",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline PathPermission::PathPermission(android::os::Parcel arg0)
		: android::os::PatternMatcher(
			"android.content.pm.PathPermission",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline PathPermission::PathPermission(JString arg0, jint arg1, JString arg2, JString arg3)
		: android::os::PatternMatcher(
			"android.content.pm.PathPermission",
			"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline JString PathPermission::getReadPermission() const
	{
		return callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;"
		);
	}
	inline JString PathPermission::getWritePermission() const
	{
		return callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;"
		);
	}
	inline void PathPermission::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers
#include "../../os/PatternMatcher.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
