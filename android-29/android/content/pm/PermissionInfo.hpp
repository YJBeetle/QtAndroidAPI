#pragma once

#ifndef ANDROID_CONTENT_PM_PERMISSIONINFO
#define ANDROID_CONTENT_PM_PERMISSIONINFO

#include "PackageItemInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}

namespace __jni_impl::android::content::pm
{
	class PermissionInfo : public __jni_impl::android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_COSTS_MONEY();
		static jint FLAG_HARD_RESTRICTED();
		static jint FLAG_IMMUTABLY_RESTRICTED();
		static jint FLAG_INSTALLED();
		static jint FLAG_SOFT_RESTRICTED();
		static jint PROTECTION_DANGEROUS();
		static jint PROTECTION_FLAG_APPOP();
		static jint PROTECTION_FLAG_DEVELOPMENT();
		static jint PROTECTION_FLAG_INSTALLER();
		static jint PROTECTION_FLAG_INSTANT();
		static jint PROTECTION_FLAG_PRE23();
		static jint PROTECTION_FLAG_PREINSTALLED();
		static jint PROTECTION_FLAG_PRIVILEGED();
		static jint PROTECTION_FLAG_RUNTIME_ONLY();
		static jint PROTECTION_FLAG_SETUP();
		static jint PROTECTION_FLAG_SYSTEM();
		static jint PROTECTION_FLAG_VERIFIER();
		static jint PROTECTION_MASK_BASE();
		static jint PROTECTION_MASK_FLAGS();
		static jint PROTECTION_NORMAL();
		static jint PROTECTION_SIGNATURE();
		static jint PROTECTION_SIGNATURE_OR_SYSTEM();
		jint descriptionRes();
		jint flags();
		QAndroidJniObject group();
		QAndroidJniObject nonLocalizedDescription();
		jint protectionLevel();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::PermissionInfo arg0);
		
		// Methods
		QAndroidJniObject toString();
		jint getProtection();
		jint getProtectionFlags();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject loadDescription(__jni_impl::android::content::pm::PackageManager arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"
#include "PackageManager.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject PermissionInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PermissionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PermissionInfo::FLAG_COSTS_MONEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_COSTS_MONEY");
	}
	jint PermissionInfo::FLAG_HARD_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_HARD_RESTRICTED");
	}
	jint PermissionInfo::FLAG_IMMUTABLY_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_IMMUTABLY_RESTRICTED");
	}
	jint PermissionInfo::FLAG_INSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_INSTALLED");
	}
	jint PermissionInfo::FLAG_SOFT_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"FLAG_SOFT_RESTRICTED");
	}
	jint PermissionInfo::PROTECTION_DANGEROUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_DANGEROUS");
	}
	jint PermissionInfo::PROTECTION_FLAG_APPOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_APPOP");
	}
	jint PermissionInfo::PROTECTION_FLAG_DEVELOPMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_DEVELOPMENT");
	}
	jint PermissionInfo::PROTECTION_FLAG_INSTALLER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_INSTALLER");
	}
	jint PermissionInfo::PROTECTION_FLAG_INSTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_INSTANT");
	}
	jint PermissionInfo::PROTECTION_FLAG_PRE23()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PRE23");
	}
	jint PermissionInfo::PROTECTION_FLAG_PREINSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PREINSTALLED");
	}
	jint PermissionInfo::PROTECTION_FLAG_PRIVILEGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_PRIVILEGED");
	}
	jint PermissionInfo::PROTECTION_FLAG_RUNTIME_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_RUNTIME_ONLY");
	}
	jint PermissionInfo::PROTECTION_FLAG_SETUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_SETUP");
	}
	jint PermissionInfo::PROTECTION_FLAG_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_SYSTEM");
	}
	jint PermissionInfo::PROTECTION_FLAG_VERIFIER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_FLAG_VERIFIER");
	}
	jint PermissionInfo::PROTECTION_MASK_BASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_MASK_BASE");
	}
	jint PermissionInfo::PROTECTION_MASK_FLAGS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_MASK_FLAGS");
	}
	jint PermissionInfo::PROTECTION_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_NORMAL");
	}
	jint PermissionInfo::PROTECTION_SIGNATURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_SIGNATURE");
	}
	jint PermissionInfo::PROTECTION_SIGNATURE_OR_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionInfo",
			"PROTECTION_SIGNATURE_OR_SYSTEM");
	}
	jint PermissionInfo::descriptionRes()
	{
		return __thiz.getField<jint>(
			"descriptionRes");
	}
	jint PermissionInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags");
	}
	QAndroidJniObject PermissionInfo::group()
	{
		return __thiz.getObjectField(
			"group",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PermissionInfo::nonLocalizedDescription()
	{
		return __thiz.getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;");
	}
	jint PermissionInfo::protectionLevel()
	{
		return __thiz.getField<jint>(
			"protectionLevel");
	}
	
	// Constructors
	void PermissionInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionInfo",
			"()V");
	}
	void PermissionInfo::__constructor(__jni_impl::android::content::pm::PermissionInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionInfo",
			"(Landroid/content/pm/PermissionInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PermissionInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PermissionInfo::getProtection()
	{
		return __thiz.callMethod<jint>(
			"getProtection",
			"()I");
	}
	jint PermissionInfo::getProtectionFlags()
	{
		return __thiz.callMethod<jint>(
			"getProtectionFlags",
			"()I");
	}
	jint PermissionInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PermissionInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject PermissionInfo::loadDescription(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PermissionInfo : public __jni_impl::android::content::pm::PermissionInfo
	{
	public:
		PermissionInfo(QAndroidJniObject obj) { __thiz = obj; }
		PermissionInfo()
		{
			__constructor();
		}
		PermissionInfo(__jni_impl::android::content::pm::PermissionInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PERMISSIONINFO

