#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SystemUpdateInfo.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject SystemUpdateInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.SystemUpdateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SystemUpdateInfo::SECURITY_PATCH_STATE_FALSE()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_FALSE"
		);
	}
	inline jint SystemUpdateInfo::SECURITY_PATCH_STATE_TRUE()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_TRUE"
		);
	}
	inline jint SystemUpdateInfo::SECURITY_PATCH_STATE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.admin.SystemUpdateInfo",
			"SECURITY_PATCH_STATE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SystemUpdateInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SystemUpdateInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong SystemUpdateInfo::getReceivedTime() const
	{
		return callMethod<jlong>(
			"getReceivedTime",
			"()J"
		);
	}
	inline jint SystemUpdateInfo::getSecurityPatchState() const
	{
		return callMethod<jint>(
			"getSecurityPatchState",
			"()I"
		);
	}
	inline jint SystemUpdateInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SystemUpdateInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SystemUpdateInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers

