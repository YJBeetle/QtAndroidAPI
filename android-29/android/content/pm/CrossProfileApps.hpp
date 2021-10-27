#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
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
	class CrossProfileApps : public __JniBaseClass
	{
	public:
		// Fields
		
		CrossProfileApps(QAndroidJniObject obj);
		// Constructors
		CrossProfileApps() = default;
		
		// Methods
		QAndroidJniObject getProfileSwitchingIconDrawable(android::os::UserHandle arg0);
		jstring getProfileSwitchingLabel(android::os::UserHandle arg0);
		QAndroidJniObject getTargetUserProfiles();
		void startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1);
	};
} // namespace android::content::pm

