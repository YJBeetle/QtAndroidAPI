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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CrossProfileApps(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CrossProfileApps(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getProfileSwitchingIconDrawable(android::os::UserHandle arg0);
		jstring getProfileSwitchingLabel(android::os::UserHandle arg0);
		QAndroidJniObject getTargetUserProfiles();
		void startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1);
	};
} // namespace android::content::pm

