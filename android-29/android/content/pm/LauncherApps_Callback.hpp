#pragma once

#ifndef ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK
#define ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::content::pm
{
	class LauncherApps_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onPackageRemoved(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		void onPackageRemoved(const QString &arg0, __jni_impl::android::os::UserHandle arg1);
		void onPackageAdded(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		void onPackageAdded(const QString &arg0, __jni_impl::android::os::UserHandle arg1);
		void onPackageChanged(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		void onPackageChanged(const QString &arg0, __jni_impl::android::os::UserHandle arg1);
		void onPackagesAvailable(jarray arg0, __jni_impl::android::os::UserHandle arg1, jboolean arg2);
		void onPackagesUnavailable(jarray arg0, __jni_impl::android::os::UserHandle arg1, jboolean arg2);
		void onPackagesSuspended(jarray arg0, __jni_impl::android::os::UserHandle arg1);
		void onPackagesSuspended(jarray arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::os::Bundle arg2);
		void onPackagesUnsuspended(jarray arg0, __jni_impl::android::os::UserHandle arg1);
		void onShortcutsChanged(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::UserHandle arg2);
		void onShortcutsChanged(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::UserHandle arg2);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/UserHandle.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void LauncherApps_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LauncherApps$Callback",
			"()V"
		);
	}
	
	// Methods
	void LauncherApps_Callback::onPackageRemoved(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageRemoved",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageRemoved(const QString &arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageRemoved",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageAdded(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageAdded",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageAdded(const QString &arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageAdded",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageChanged(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackageChanged(const QString &arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackageChanged",
			"(Ljava/lang/String;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackagesAvailable(jarray arg0, __jni_impl::android::os::UserHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onPackagesAvailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackagesUnavailable(jarray arg0, __jni_impl::android::os::UserHandle arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"onPackagesUnavailable",
			"([Ljava/lang/String;Landroid/os/UserHandle;Z)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void LauncherApps_Callback::onPackagesSuspended(jarray arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackagesSuspended(jarray arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"onPackagesSuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onPackagesUnsuspended(jarray arg0, __jni_impl::android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"onPackagesUnsuspended",
			"([Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onShortcutsChanged(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onShortcutsChanged",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LauncherApps_Callback::onShortcutsChanged(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"onShortcutsChanged",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class LauncherApps_Callback : public __jni_impl::android::content::pm::LauncherApps_Callback
	{
	public:
		LauncherApps_Callback(QAndroidJniObject obj) { __thiz = obj; }
		LauncherApps_Callback()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_LAUNCHERAPPS_CALLBACK

