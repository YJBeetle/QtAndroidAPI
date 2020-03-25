#pragma once

#ifndef ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO
#define ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}

namespace __jni_impl::android::content::pm
{
	class LauncherActivityInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject getUser();
		jlong getFirstInstallTime();
		QAndroidJniObject getBadgedIcon(jint arg0);
		QAndroidJniObject getComponentName();
		QAndroidJniObject getLabel();
		QAndroidJniObject getIcon(jint arg0);
		QAndroidJniObject getApplicationInfo();
	};
} // namespace __jni_impl::android::content::pm

#include "../Context.hpp"
#include "../../os/UserHandle.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../ComponentName.hpp"
#include "ApplicationInfo.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void LauncherActivityInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LauncherActivityInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LauncherActivityInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject LauncherActivityInfo::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;");
	}
	jlong LauncherActivityInfo::getFirstInstallTime()
	{
		return __thiz.callMethod<jlong>(
			"getFirstInstallTime",
			"()J");
	}
	QAndroidJniObject LauncherActivityInfo::getBadgedIcon(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBadgedIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0);
	}
	QAndroidJniObject LauncherActivityInfo::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;");
	}
	QAndroidJniObject LauncherActivityInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject LauncherActivityInfo::getIcon(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0);
	}
	QAndroidJniObject LauncherActivityInfo::getApplicationInfo()
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;");
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class LauncherActivityInfo : public __jni_impl::android::content::pm::LauncherActivityInfo
	{
	public:
		LauncherActivityInfo(QAndroidJniObject obj) { __thiz = obj; }
		LauncherActivityInfo()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_LAUNCHERACTIVITYINFO

