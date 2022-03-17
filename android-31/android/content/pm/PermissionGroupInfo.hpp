#pragma once

#include "./PackageManager.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PermissionGroupInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PermissionGroupInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PermissionGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PermissionGroupInfo::FLAG_PERSONAL_INFO()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionGroupInfo",
			"FLAG_PERSONAL_INFO"
		);
	}
	inline jint PermissionGroupInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	inline jint PermissionGroupInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline JString PermissionGroupInfo::nonLocalizedDescription()
	{
		return getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint PermissionGroupInfo::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	
	// Constructors
	inline PermissionGroupInfo::PermissionGroupInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.PermissionGroupInfo",
			"()V"
		) {}
	inline PermissionGroupInfo::PermissionGroupInfo(android::content::pm::PermissionGroupInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.PermissionGroupInfo",
			"(Landroid/content/pm/PermissionGroupInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint PermissionGroupInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PermissionGroupInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString PermissionGroupInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PermissionGroupInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./PackageItemInfo.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
