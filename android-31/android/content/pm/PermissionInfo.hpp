#pragma once

#include "./PackageManager.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PermissionInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PermissionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PermissionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PermissionInfo::FLAG_COSTS_MONEY()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_COSTS_MONEY"
		);
	}
	inline jint PermissionInfo::FLAG_HARD_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_HARD_RESTRICTED"
		);
	}
	inline jint PermissionInfo::FLAG_IMMUTABLY_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_IMMUTABLY_RESTRICTED"
		);
	}
	inline jint PermissionInfo::FLAG_INSTALLED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_INSTALLED"
		);
	}
	inline jint PermissionInfo::FLAG_SOFT_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_SOFT_RESTRICTED"
		);
	}
	inline jint PermissionInfo::PROTECTION_DANGEROUS()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_DANGEROUS"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_APPOP()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_APPOP"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_DEVELOPMENT()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_DEVELOPMENT"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_INSTALLER()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_INSTALLER"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_INSTANT()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_INSTANT"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_PRE23()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PRE23"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_PREINSTALLED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PREINSTALLED"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_PRIVILEGED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PRIVILEGED"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_RUNTIME_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_RUNTIME_ONLY"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_SETUP()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_SETUP"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_SYSTEM()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_SYSTEM"
		);
	}
	inline jint PermissionInfo::PROTECTION_FLAG_VERIFIER()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_VERIFIER"
		);
	}
	inline jint PermissionInfo::PROTECTION_INTERNAL()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_INTERNAL"
		);
	}
	inline jint PermissionInfo::PROTECTION_MASK_BASE()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_MASK_BASE"
		);
	}
	inline jint PermissionInfo::PROTECTION_MASK_FLAGS()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_MASK_FLAGS"
		);
	}
	inline jint PermissionInfo::PROTECTION_NORMAL()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_NORMAL"
		);
	}
	inline jint PermissionInfo::PROTECTION_SIGNATURE()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_SIGNATURE"
		);
	}
	inline jint PermissionInfo::PROTECTION_SIGNATURE_OR_SYSTEM()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_SIGNATURE_OR_SYSTEM"
		);
	}
	inline jint PermissionInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	inline jint PermissionInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline JString PermissionInfo::group()
	{
		return getObjectField(
			"group",
			"Ljava/lang/String;"
		);
	}
	inline JString PermissionInfo::nonLocalizedDescription()
	{
		return getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint PermissionInfo::protectionLevel()
	{
		return getField<jint>(
			"protectionLevel"
		);
	}
	
	// Constructors
	inline PermissionInfo::PermissionInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.PermissionInfo",
			"()V"
		) {}
	inline PermissionInfo::PermissionInfo(android::content::pm::PermissionInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.PermissionInfo",
			"(Landroid/content/pm/PermissionInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint PermissionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint PermissionInfo::getProtection() const
	{
		return callMethod<jint>(
			"getProtection",
			"()I"
		);
	}
	inline jint PermissionInfo::getProtectionFlags() const
	{
		return callMethod<jint>(
			"getProtectionFlags",
			"()I"
		);
	}
	inline JString PermissionInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString PermissionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PermissionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

