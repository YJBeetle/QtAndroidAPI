#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
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
	class LauncherActivityInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		LauncherActivityInfo(QAndroidJniObject obj);
		// Constructors
		LauncherActivityInfo() = default;
		
		// Methods
		QAndroidJniObject getApplicationInfo();
		QAndroidJniObject getBadgedIcon(jint arg0);
		QAndroidJniObject getComponentName();
		jlong getFirstInstallTime();
		QAndroidJniObject getIcon(jint arg0);
		jstring getLabel();
		jstring getName();
		QAndroidJniObject getUser();
	};
} // namespace android::content::pm

