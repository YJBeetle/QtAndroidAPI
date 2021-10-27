#include "../ComponentName.hpp"
#include "../Context.hpp"
#include "./ApplicationInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/UserHandle.hpp"
#include "./LauncherActivityInfo.hpp"

namespace android::content::pm
{
	// Fields
	
	LauncherActivityInfo::LauncherActivityInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject LauncherActivityInfo::getApplicationInfo()
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	QAndroidJniObject LauncherActivityInfo::getBadgedIcon(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBadgedIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject LauncherActivityInfo::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jlong LauncherActivityInfo::getFirstInstallTime()
	{
		return __thiz.callMethod<jlong>(
			"getFirstInstallTime",
			"()J"
		);
	}
	QAndroidJniObject LauncherActivityInfo::getIcon(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jstring LauncherActivityInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring LauncherActivityInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LauncherActivityInfo::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
} // namespace android::content::pm

