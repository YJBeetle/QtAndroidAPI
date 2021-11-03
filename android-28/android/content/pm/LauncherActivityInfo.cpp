#include "../ComponentName.hpp"
#include "../Context.hpp"
#include "./ApplicationInfo.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./LauncherActivityInfo.hpp"

namespace android::content::pm
{
	// Fields
	
	// QJniObject forward
	LauncherActivityInfo::LauncherActivityInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::pm::ApplicationInfo LauncherActivityInfo::getApplicationInfo() const
	{
		return callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	android::graphics::drawable::Drawable LauncherActivityInfo::getBadgedIcon(jint arg0) const
	{
		return callObjectMethod(
			"getBadgedIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	android::content::ComponentName LauncherActivityInfo::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jlong LauncherActivityInfo::getFirstInstallTime() const
	{
		return callMethod<jlong>(
			"getFirstInstallTime",
			"()J"
		);
	}
	android::graphics::drawable::Drawable LauncherActivityInfo::getIcon(jint arg0) const
	{
		return callObjectMethod(
			"getIcon",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	JString LauncherActivityInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString LauncherActivityInfo::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	android::os::UserHandle LauncherActivityInfo::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
} // namespace android::content::pm

