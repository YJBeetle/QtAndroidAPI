#pragma once

#include "../../../__JniBaseClass.hpp"
#include "PackageItemInfo.hpp"

namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		jstring nonLocalizedDescription();
		jint priority();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::PermissionGroupInfo arg0);
		
		// Methods
		jint describeContents();
		jstring loadDescription(__jni_impl::android::content::pm::PackageManager arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "PackageManager.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject PermissionGroupInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PermissionGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PermissionGroupInfo::FLAG_PERSONAL_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PermissionGroupInfo",
			"FLAG_PERSONAL_INFO"
		);
	}
	jint PermissionGroupInfo::descriptionRes()
	{
		return __thiz.getField<jint>(
			"descriptionRes"
		);
	}
	jint PermissionGroupInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jstring PermissionGroupInfo::nonLocalizedDescription()
	{
		return __thiz.getObjectField(
			"nonLocalizedDescription",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint PermissionGroupInfo::priority()
	{
		return __thiz.getField<jint>(
			"priority"
		);
	}
	
	// Constructors
	void PermissionGroupInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionGroupInfo",
			"()V"
		);
	}
	void PermissionGroupInfo::__constructor(__jni_impl::android::content::pm::PermissionGroupInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PermissionGroupInfo",
			"(Landroid/content/pm/PermissionGroupInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint PermissionGroupInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring PermissionGroupInfo::loadDescription(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring PermissionGroupInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PermissionGroupInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

