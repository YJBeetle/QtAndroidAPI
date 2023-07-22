#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content::pm
{
	class ActivityInfo;
}
namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class UserHandle;
}
class JString;
class JString;

namespace android::content::pm
{
	class LauncherActivityInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LauncherActivityInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherActivityInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::content::pm::ActivityInfo getActivityInfo() const;
		android::content::pm::ApplicationInfo getApplicationInfo() const;
		android::graphics::drawable::Drawable getBadgedIcon(jint arg0) const;
		android::content::ComponentName getComponentName() const;
		jlong getFirstInstallTime() const;
		android::graphics::drawable::Drawable getIcon(jint arg0) const;
		JString getLabel() const;
		jfloat getLoadingProgress() const;
		JString getName() const;
		android::os::UserHandle getUser() const;
	};
} // namespace android::content::pm

