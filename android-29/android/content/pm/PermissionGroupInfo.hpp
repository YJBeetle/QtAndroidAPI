#pragma once

#ifndef ANDROID_CONTENT_PM_PERMISSIONGROUPINFO
#define ANDROID_CONTENT_PM_PERMISSIONGROUPINFO

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
	class PermissionGroupInfo : public __jni_impl::android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_PERSONAL_INFO();
		jint descriptionRes();
		jint flags();
		QAndroidJniObject nonLocalizedDescription();
		jint priority();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::PermissionGroupInfo arg0);
		
		// Methods
		QAndroidJniObject toString();
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
	QAndroidJniObject PermissionGroupInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PermissionGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PermissionGroupInfo::FLAG_PERSONAL_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionGroupInfo",
			"FLAG_PERSONAL_INFO");
	}
	jint PermissionGroupInfo::descriptionRes()
	{
		return __thiz.getField<jint>(
			"descriptionRes");
	}
	jint PermissionGroupInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags");
	}
	QAndroidJniObject PermissionGroupInfo::nonLocalizedDescription()
	{
		return __thiz.getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;");
	}
	jint PermissionGroupInfo::priority()
	{
		return __thiz.getField<jint>(
			"priority");
	}
	
	// Constructors
	void PermissionGroupInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionGroupInfo",
			"()V");
	}
	void PermissionGroupInfo::__constructor(__jni_impl::android::content::pm::PermissionGroupInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionGroupInfo",
			"(Landroid/content/pm/PermissionGroupInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PermissionGroupInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PermissionGroupInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PermissionGroupInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject PermissionGroupInfo::loadDescription(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PermissionGroupInfo : public __jni_impl::android::content::pm::PermissionGroupInfo
	{
	public:
		PermissionGroupInfo(QAndroidJniObject obj) { __thiz = obj; }
		PermissionGroupInfo()
		{
			__constructor();
		}
		PermissionGroupInfo(__jni_impl::android::content::pm::PermissionGroupInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PERMISSIONGROUPINFO
