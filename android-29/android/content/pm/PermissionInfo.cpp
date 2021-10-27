#include "./PackageManager.hpp"
#include "../../os/Parcel.hpp"
#include "./PermissionInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject PermissionInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PermissionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PermissionInfo::FLAG_COSTS_MONEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_COSTS_MONEY"
		);
	}
	jint PermissionInfo::FLAG_HARD_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_HARD_RESTRICTED"
		);
	}
	jint PermissionInfo::FLAG_IMMUTABLY_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_IMMUTABLY_RESTRICTED"
		);
	}
	jint PermissionInfo::FLAG_INSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_INSTALLED"
		);
	}
	jint PermissionInfo::FLAG_SOFT_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_SOFT_RESTRICTED"
		);
	}
	jint PermissionInfo::PROTECTION_DANGEROUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_DANGEROUS"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_APPOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_APPOP"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_DEVELOPMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_DEVELOPMENT"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_INSTALLER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_INSTALLER"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_INSTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_INSTANT"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_PRE23()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PRE23"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_PREINSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PREINSTALLED"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_PRIVILEGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PRIVILEGED"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_RUNTIME_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_RUNTIME_ONLY"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_SETUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_SETUP"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_SYSTEM"
		);
	}
	jint PermissionInfo::PROTECTION_FLAG_VERIFIER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_VERIFIER"
		);
	}
	jint PermissionInfo::PROTECTION_MASK_BASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_MASK_BASE"
		);
	}
	jint PermissionInfo::PROTECTION_MASK_FLAGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_MASK_FLAGS"
		);
	}
	jint PermissionInfo::PROTECTION_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_NORMAL"
		);
	}
	jint PermissionInfo::PROTECTION_SIGNATURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_SIGNATURE"
		);
	}
	jint PermissionInfo::PROTECTION_SIGNATURE_OR_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_SIGNATURE_OR_SYSTEM"
		);
	}
	jint PermissionInfo::descriptionRes()
	{
		return __thiz.getField<jint>(
			"descriptionRes"
		);
	}
	jint PermissionInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jstring PermissionInfo::group()
	{
		return __thiz.getObjectField(
			"group",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PermissionInfo::nonLocalizedDescription()
	{
		return __thiz.getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint PermissionInfo::protectionLevel()
	{
		return __thiz.getField<jint>(
			"protectionLevel"
		);
	}
	
	PermissionInfo::PermissionInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PermissionInfo::PermissionInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionInfo",
			"()V"
		);
	}
	PermissionInfo::PermissionInfo(android::content::pm::PermissionInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionInfo",
			"(Landroid/content/pm/PermissionInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint PermissionInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint PermissionInfo::getProtection()
	{
		return __thiz.callMethod<jint>(
			"getProtection",
			"()I"
		);
	}
	jint PermissionInfo::getProtectionFlags()
	{
		return __thiz.callMethod<jint>(
			"getProtectionFlags",
			"()I"
		);
	}
	jstring PermissionInfo::loadDescription(android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring PermissionInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PermissionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

