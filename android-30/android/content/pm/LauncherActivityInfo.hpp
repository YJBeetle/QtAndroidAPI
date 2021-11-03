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
class JString;
class JString;

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
		android::content::pm::ApplicationInfo getApplicationInfo() const;
		android::graphics::drawable::Drawable getBadgedIcon(jint arg0) const;
		android::content::ComponentName getComponentName() const;
		jlong getFirstInstallTime() const;
		android::graphics::drawable::Drawable getIcon(jint arg0) const;
		JString getLabel() const;
		JString getName() const;
		android::os::UserHandle getUser() const;
	};
} // namespace android::content::pm

