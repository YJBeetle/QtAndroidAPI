#include "../ComponentName.hpp"
#include "../Context.hpp"
#include "./ApplicationInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/UserHandle.hpp"
#include "./LauncherActivityInfo.hpp"

namespace android::content::pm
{
	// Fields
	
	// QAndroidJniObject forward
	LauncherActivityInfo::LauncherActivityInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject LauncherActivityInfo::getApplicationInfo()
	{
		return callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	QAndroidJniObject LauncherActivityInfo::getBadgedIcon(jint arg0)
	{
		return callObjectMethod(
			"getBadgedIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject LauncherActivityInfo::getComponentName()
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jlong LauncherActivityInfo::getFirstInstallTime()
	{
		return callMethod<jlong>(
			"getFirstInstallTime",
			"()J"
		);
	}
	QAndroidJniObject LauncherActivityInfo::getIcon(jint arg0)
	{
		return callObjectMethod(
			"getIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jstring LauncherActivityInfo::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring LauncherActivityInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LauncherActivityInfo::getUser()
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
} // namespace android::content::pm

