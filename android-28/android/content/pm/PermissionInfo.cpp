#include "./PackageManager.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PermissionInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject PermissionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PermissionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PermissionInfo::FLAG_COSTS_MONEY()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_COSTS_MONEY"
		);
	}
	jint PermissionInfo::FLAG_INSTALLED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_INSTALLED"
		);
	}
	jint PermissionInfo::PROTECTION_DANGEROUS()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_DANGEROUS"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_APPOP()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_APPOP"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_DEVELOPMENT()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_DEVELOPMENT"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_INSTALLER()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_INSTALLER"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_INSTANT()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_INSTANT"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_PRE23()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PRE23"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_PREINSTALLED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PREINSTALLED"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_PRIVILEGED()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PRIVILEGED"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_RUNTIME_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_RUNTIME_ONLY"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_SETUP()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_SETUP"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_SYSTEM()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_SYSTEM"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_VERIFIER()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_VERIFIER"
		);
	}
	jint PermissionInfo::PROTECTION_MASK_BASE()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_MASK_BASE"
		);
	}
	jint PermissionInfo::PROTECTION_MASK_FLAGS()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_MASK_FLAGS"
		);
	}
	jint PermissionInfo::PROTECTION_NORMAL()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_NORMAL"
		);
	}
	jint PermissionInfo::PROTECTION_SIGNATURE()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_SIGNATURE"
		);
	}
	jint PermissionInfo::PROTECTION_SIGNATURE_OR_SYSTEM()
	{
		return getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_SIGNATURE_OR_SYSTEM"
		);
	}
	jint PermissionInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	jint PermissionInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	JString PermissionInfo::group()
	{
		return getObjectField(
			"group",
			"Ljava/lang/String;"
		);
	}
	JString PermissionInfo::nonLocalizedDescription()
	{
		return getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;"
		);
	}
	jint PermissionInfo::protectionLevel()
	{
		return getField<jint>(
			"protectionLevel"
		);
	}
	
	// QAndroidJniObject forward
	PermissionInfo::PermissionInfo(QAndroidJniObject obj) : android::content::pm::PackageItemInfo(obj) {}
	
	// Constructors
	PermissionInfo::PermissionInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.PermissionInfo",
			"()V"
		) {}
	PermissionInfo::PermissionInfo(android::content::pm::PermissionInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.PermissionInfo",
			"(Landroid/content/pm/PermissionInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint PermissionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint PermissionInfo::getProtection()
	{
		return callMethod<jint>(
			"getProtection",
			"()I"
		);
	}
	jint PermissionInfo::getProtectionFlags()
	{
		return callMethod<jint>(
			"getProtectionFlags",
			"()I"
		);
	}
	JString PermissionInfo::loadDescription(android::content::pm::PackageManager arg0)
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString PermissionInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PermissionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

