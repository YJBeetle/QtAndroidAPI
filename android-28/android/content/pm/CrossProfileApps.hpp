#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::content::pm
{
	class CrossProfileApps : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CrossProfileApps(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CrossProfileApps(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::drawable::Drawable getProfileSwitchingIconDrawable(android::os::UserHandle arg0) const;
		JString getProfileSwitchingLabel(android::os::UserHandle arg0) const;
		JObject getTargetUserProfiles() const;
		void startMainActivity(android::content::ComponentName arg0, android::os::UserHandle arg1) const;
	};
} // namespace android::content::pm

