#include "../ComponentName.hpp"
#include "./ActivityInfo.hpp"
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
	android::content::pm::ActivityInfo LauncherActivityInfo::getActivityInfo()
	{
		return callObjectMethod(
			"getActivityInfo",
			"()Landroid/content/pm/ActivityInfo;"
		);
	}
	android::content::pm::ApplicationInfo LauncherActivityInfo::getApplicationInfo()
	{
		return callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	android::graphics::drawable::Drawable LauncherActivityInfo::getBadgedIcon(jint arg0)
	{
		return callObjectMethod(
			"getBadgedIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::content::ComponentName LauncherActivityInfo::getComponentName()
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
	android::graphics::drawable::Drawable LauncherActivityInfo::getIcon(jint arg0)
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
	jfloat LauncherActivityInfo::getLoadingProgress()
	{
		return callMethod<jfloat>(
			"getLoadingProgress",
			"()F"
		);
	}
	jstring LauncherActivityInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::UserHandle LauncherActivityInfo::getUser()
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
} // namespace android::content::pm

