#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Intent;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
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
		static jstring ACTION_CAN_INTERACT_ACROSS_PROFILES_CHANGED();
		
		// QJniObject forward
		template<typename ...Ts> explicit CrossProfileApps(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CrossProfileApps(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean canInteractAcrossProfiles();
		jboolean canRequestInteractAcrossProfiles();
		android::content::Intent createRequestInteractAcrossProfilesIntent();
		android::graphics::drawable::Drawable getProfileSwitchingIconDrawable(android::os::UserHandle arg0);
		jstring getProfileSwitchingLabel(android::os::UserHandle arg0);
		__JniBaseClass getTargetUserProfiles();
		void startActivity(android::content::Intent arg0, android::os::UserHandle arg1, android::app::Activity arg2);
		void startActivity(android::content::Intent arg0, android::os::UserHandle arg1, android::app::Activity arg2, android::os::Bundle arg3);
		void startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1);
	};
} // namespace android::content::pm

