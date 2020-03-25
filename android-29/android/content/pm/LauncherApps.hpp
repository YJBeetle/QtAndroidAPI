#pragma once

#ifndef ANDROID_CONTENT_PM_LAUNCHERAPPS
#define ANDROID_CONTENT_PM_LAUNCHERAPPS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class LauncherActivityInfo;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content::pm
{
	class LauncherApps_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::content::pm
{
	class PackageInstaller_SessionInfo;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::content::pm
{
	class LauncherApps_ShortcutQuery;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::content::pm
{
	class ShortcutInfo;
}
namespace __jni_impl::android::content::pm
{
	class PackageInstaller_SessionCallback;
}
namespace __jni_impl::android::content::pm
{
	class LauncherApps_PinItemRequest;
}
namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}

namespace __jni_impl::android::content::pm
{
	class LauncherApps : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_CONFIRM_PIN_APPWIDGET();
		static QAndroidJniObject ACTION_CONFIRM_PIN_SHORTCUT();
		static QAndroidJniObject EXTRA_PIN_ITEM_REQUEST();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject resolveActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1);
		void startMainActivity(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::os::Bundle arg3);
		void registerCallback(__jni_impl::android::content::pm::LauncherApps_Callback arg0, __jni_impl::android::os::Handler arg1);
		void registerCallback(__jni_impl::android::content::pm::LauncherApps_Callback arg0);
		void unregisterCallback(__jni_impl::android::content::pm::LauncherApps_Callback arg0);
		QAndroidJniObject getProfiles();
		QAndroidJniObject getActivityList(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		void startPackageInstallerSessionDetailsActivity(__jni_impl::android::content::pm::PackageInstaller_SessionInfo arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::os::Bundle arg2);
		void startAppDetailsActivity(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject getShortcutConfigActivityList(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject getShortcutConfigActivityIntent(__jni_impl::android::content::pm::LauncherActivityInfo arg0);
		jboolean isPackageEnabled(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject getSuspendedPackageLauncherExtras(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		jboolean shouldHideFromSuggestions(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		jboolean isActivityEnabled(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1);
		jboolean hasShortcutHostPermission();
		QAndroidJniObject getShortcuts(__jni_impl::android::content::pm::LauncherApps_ShortcutQuery arg0, __jni_impl::android::os::UserHandle arg1);
		void pinShortcuts(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::UserHandle arg2);
		QAndroidJniObject getShortcutIconDrawable(__jni_impl::android::content::pm::ShortcutInfo arg0, jint arg1);
		QAndroidJniObject getShortcutBadgedIconDrawable(__jni_impl::android::content::pm::ShortcutInfo arg0, jint arg1);
		void startShortcut(jstring arg0, jstring arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::os::UserHandle arg4);
		void startShortcut(__jni_impl::android::content::pm::ShortcutInfo arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::os::Bundle arg2);
		void registerPackageInstallerSessionCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::pm::PackageInstaller_SessionCallback arg1);
		void unregisterPackageInstallerSessionCallback(__jni_impl::android::content::pm::PackageInstaller_SessionCallback arg0);
		QAndroidJniObject getAllPackageInstallerSessions();
		QAndroidJniObject getPinItemRequest(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject getApplicationInfo(jstring arg0, jint arg1, __jni_impl::android::os::UserHandle arg2);
	};
} // namespace __jni_impl::android::content::pm

#include "../Context.hpp"
#include "LauncherActivityInfo.hpp"
#include "../Intent.hpp"
#include "../../os/UserHandle.hpp"
#include "../ComponentName.hpp"
#include "../../graphics/Rect.hpp"
#include "../../os/Bundle.hpp"
#include "LauncherApps_Callback.hpp"
#include "../../os/Handler.hpp"
#include "PackageInstaller_SessionInfo.hpp"
#include "../IntentSender.hpp"
#include "LauncherApps_ShortcutQuery.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "ShortcutInfo.hpp"
#include "PackageInstaller_SessionCallback.hpp"
#include "LauncherApps_PinItemRequest.hpp"
#include "ApplicationInfo.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject LauncherApps::ACTION_CONFIRM_PIN_APPWIDGET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LauncherApps",
			"ACTION_CONFIRM_PIN_APPWIDGET",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LauncherApps::ACTION_CONFIRM_PIN_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LauncherApps",
			"ACTION_CONFIRM_PIN_SHORTCUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject LauncherApps::EXTRA_PIN_ITEM_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LauncherApps",
			"EXTRA_PIN_ITEM_REQUEST",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void LauncherApps::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LauncherApps",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject LauncherApps::resolveActivity(__jni_impl::android::content::Intent arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"resolveActivity",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)Landroid/content/pm/LauncherActivityInfo;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void LauncherApps::startMainActivity(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"startMainActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void LauncherApps::registerCallback(__jni_impl::android::content::pm::LauncherApps_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/content/pm/LauncherApps$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void LauncherApps::registerCallback(__jni_impl::android::content::pm::LauncherApps_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/content/pm/LauncherApps$Callback;)V",
			arg0.__jniObject().object());
	}
	void LauncherApps::unregisterCallback(__jni_impl::android::content::pm::LauncherApps_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/content/pm/LauncherApps$Callback;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LauncherApps::getProfiles()
	{
		return __thiz.callObjectMethod(
			"getProfiles",
			"()Ljava/util/List;");
	}
	QAndroidJniObject LauncherApps::getActivityList(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object());
	}
	void LauncherApps::startPackageInstallerSessionDetailsActivity(__jni_impl::android::content::pm::PackageInstaller_SessionInfo arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startPackageInstallerSessionDetailsActivity",
			"(Landroid/content/pm/PackageInstaller$SessionInfo;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void LauncherApps::startAppDetailsActivity(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz.callMethod<void>(
			"startAppDetailsActivity",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject LauncherApps::getShortcutConfigActivityList(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcutConfigActivityList",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject LauncherApps::getShortcutConfigActivityIntent(__jni_impl::android::content::pm::LauncherActivityInfo arg0)
	{
		return __thiz.callObjectMethod(
			"getShortcutConfigActivityIntent",
			"(Landroid/content/pm/LauncherActivityInfo;)Landroid/content/IntentSender;",
			arg0.__jniObject().object());
	}
	jboolean LauncherApps::isPackageEnabled(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isPackageEnabled",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject LauncherApps::getSuspendedPackageLauncherExtras(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getSuspendedPackageLauncherExtras",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Landroid/os/Bundle;",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean LauncherApps::shouldHideFromSuggestions(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"shouldHideFromSuggestions",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean LauncherApps::isActivityEnabled(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isActivityEnabled",
			"(Landroid/content/ComponentName;Landroid/os/UserHandle;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean LauncherApps::hasShortcutHostPermission()
	{
		return __thiz.callMethod<jboolean>(
			"hasShortcutHostPermission",
			"()Z");
	}
	QAndroidJniObject LauncherApps::getShortcuts(__jni_impl::android::content::pm::LauncherApps_ShortcutQuery arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcuts",
			"(Landroid/content/pm/LauncherApps$ShortcutQuery;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void LauncherApps::pinShortcuts(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::UserHandle arg2)
	{
		__thiz.callMethod<void>(
			"pinShortcuts",
			"(Ljava/lang/String;Ljava/util/List;Landroid/os/UserHandle;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject LauncherApps::getShortcutIconDrawable(__jni_impl::android::content::pm::ShortcutInfo arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcutIconDrawable",
			"(Landroid/content/pm/ShortcutInfo;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject LauncherApps::getShortcutBadgedIconDrawable(__jni_impl::android::content::pm::ShortcutInfo arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getShortcutBadgedIconDrawable",
			"(Landroid/content/pm/ShortcutInfo;I)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1);
	}
	void LauncherApps::startShortcut(jstring arg0, jstring arg1, __jni_impl::android::graphics::Rect arg2, __jni_impl::android::os::Bundle arg3, __jni_impl::android::os::UserHandle arg4)
	{
		__thiz.callMethod<void>(
			"startShortcut",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Rect;Landroid/os/Bundle;Landroid/os/UserHandle;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void LauncherApps::startShortcut(__jni_impl::android::content::pm::ShortcutInfo arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::os::Bundle arg2)
	{
		__thiz.callMethod<void>(
			"startShortcut",
			"(Landroid/content/pm/ShortcutInfo;Landroid/graphics/Rect;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void LauncherApps::registerPackageInstallerSessionCallback(__jni_impl::__JniBaseClass arg0, __jni_impl::android::content::pm::PackageInstaller_SessionCallback arg1)
	{
		__thiz.callMethod<void>(
			"registerPackageInstallerSessionCallback",
			"(Ljava/util/concurrent/Executor;Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void LauncherApps::unregisterPackageInstallerSessionCallback(__jni_impl::android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterPackageInstallerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LauncherApps::getAllPackageInstallerSessions()
	{
		return __thiz.callObjectMethod(
			"getAllPackageInstallerSessions",
			"()Ljava/util/List;");
	}
	QAndroidJniObject LauncherApps::getPinItemRequest(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"getPinItemRequest",
			"(Landroid/content/Intent;)Landroid/content/pm/LauncherApps$PinItemRequest;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject LauncherApps::getApplicationInfo(jstring arg0, jint arg1, __jni_impl::android::os::UserHandle arg2)
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"(Ljava/lang/String;ILandroid/os/UserHandle;)Landroid/content/pm/ApplicationInfo;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class LauncherApps : public __jni_impl::android::content::pm::LauncherApps
	{
	public:
		LauncherApps(QAndroidJniObject obj) { __thiz = obj; }
		LauncherApps()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_LAUNCHERAPPS

