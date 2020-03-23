#pragma once

#ifndef ANDROID_APP_ADMIN_DEVICEADMININFO
#define ANDROID_APP_ADMIN_DEVICEADMININFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ResolveInfo;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content::pm
{
	class ActivityInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::app::admin
{
	class DeviceAdminInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint USES_ENCRYPTED_STORAGE();
		static jint USES_POLICY_DISABLE_CAMERA();
		static jint USES_POLICY_DISABLE_KEYGUARD_FEATURES();
		static jint USES_POLICY_EXPIRE_PASSWORD();
		static jint USES_POLICY_FORCE_LOCK();
		static jint USES_POLICY_LIMIT_PASSWORD();
		static jint USES_POLICY_RESET_PASSWORD();
		static jint USES_POLICY_WATCH_LOGIN();
		static jint USES_POLICY_WIPE_DATA();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getPackageName();
		QAndroidJniObject getComponent();
		QAndroidJniObject getActivityInfo();
		QAndroidJniObject getReceiverName();
		QAndroidJniObject getTagForPolicy(jint arg0);
		jboolean supportsTransferOwnership();
		jboolean usesPolicy(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		jboolean isVisible();
		QAndroidJniObject loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadDescription(__jni_impl::android::content::pm::PackageManager arg0);
	};
} // namespace __jni_impl::android::app::admin

#include "../../content/Context.hpp"
#include "../../content/pm/ResolveInfo.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/pm/ActivityInfo.hpp"
#include "../../os/Parcel.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	QAndroidJniObject DeviceAdminInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DeviceAdminInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint DeviceAdminInfo::USES_ENCRYPTED_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_ENCRYPTED_STORAGE");
	}
	jint DeviceAdminInfo::USES_POLICY_DISABLE_CAMERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_DISABLE_CAMERA");
	}
	jint DeviceAdminInfo::USES_POLICY_DISABLE_KEYGUARD_FEATURES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_DISABLE_KEYGUARD_FEATURES");
	}
	jint DeviceAdminInfo::USES_POLICY_EXPIRE_PASSWORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_EXPIRE_PASSWORD");
	}
	jint DeviceAdminInfo::USES_POLICY_FORCE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_FORCE_LOCK");
	}
	jint DeviceAdminInfo::USES_POLICY_LIMIT_PASSWORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_LIMIT_PASSWORD");
	}
	jint DeviceAdminInfo::USES_POLICY_RESET_PASSWORD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_RESET_PASSWORD");
	}
	jint DeviceAdminInfo::USES_POLICY_WATCH_LOGIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_WATCH_LOGIN");
	}
	jint DeviceAdminInfo::USES_POLICY_WIPE_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.admin.DeviceAdminInfo",
			"USES_POLICY_WIPE_DATA");
	}
	
	// Constructors
	void DeviceAdminInfo::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DeviceAdminInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject DeviceAdminInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject DeviceAdminInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject DeviceAdminInfo::getComponent()
	{
		return __thiz.callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;");
	}
	QAndroidJniObject DeviceAdminInfo::getActivityInfo()
	{
		return __thiz.callObjectMethod(
			"getActivityInfo",
			"()Landroid/content/pm/ActivityInfo;");
	}
	QAndroidJniObject DeviceAdminInfo::getReceiverName()
	{
		return __thiz.callObjectMethod(
			"getReceiverName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject DeviceAdminInfo::getTagForPolicy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getTagForPolicy",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jboolean DeviceAdminInfo::supportsTransferOwnership()
	{
		return __thiz.callMethod<jboolean>(
			"supportsTransferOwnership",
			"()Z");
	}
	jboolean DeviceAdminInfo::usesPolicy(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"usesPolicy",
			"(I)Z",
			arg0);
	}
	jint DeviceAdminInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void DeviceAdminInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void DeviceAdminInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean DeviceAdminInfo::isVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isVisible",
			"()Z");
	}
	QAndroidJniObject DeviceAdminInfo::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DeviceAdminInfo::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DeviceAdminInfo::loadDescription(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class DeviceAdminInfo : public __jni_impl::android::app::admin::DeviceAdminInfo
	{
	public:
		DeviceAdminInfo(QAndroidJniObject obj) { __thiz = obj; }
		DeviceAdminInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_DEVICEADMININFO

