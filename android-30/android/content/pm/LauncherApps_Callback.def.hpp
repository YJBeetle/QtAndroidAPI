#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class UserHandle;
}
class JString;

namespace android::content::pm
{
	class LauncherApps_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherApps_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps_Callback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LauncherApps_Callback();
		
		// Methods
		void onPackageAdded(JString arg0, android::os::UserHandle arg1) const;
		void onPackageChanged(JString arg0, android::os::UserHandle arg1) const;
		void onPackageRemoved(JString arg0, android::os::UserHandle arg1) const;
		void onPackagesAvailable(JArray arg0, android::os::UserHandle arg1, jboolean arg2) const;
		void onPackagesSuspended(JArray arg0, android::os::UserHandle arg1) const;
		void onPackagesSuspended(JArray arg0, android::os::UserHandle arg1, android::os::Bundle arg2) const;
		void onPackagesUnavailable(JArray arg0, android::os::UserHandle arg1, jboolean arg2) const;
		void onPackagesUnsuspended(JArray arg0, android::os::UserHandle arg1) const;
		void onShortcutsChanged(JString arg0, JObject arg1, android::os::UserHandle arg2) const;
	};
} // namespace android::content::pm

