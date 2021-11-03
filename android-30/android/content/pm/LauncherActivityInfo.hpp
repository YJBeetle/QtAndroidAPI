#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
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

namespace android::content::pm
{
	class LauncherActivityInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherActivityInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherActivityInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::pm::ApplicationInfo getApplicationInfo();
		android::graphics::drawable::Drawable getBadgedIcon(jint arg0);
		android::content::ComponentName getComponentName();
		jlong getFirstInstallTime();
		android::graphics::drawable::Drawable getIcon(jint arg0);
		jstring getLabel();
		jstring getName();
		android::os::UserHandle getUser();
	};
} // namespace android::content::pm

