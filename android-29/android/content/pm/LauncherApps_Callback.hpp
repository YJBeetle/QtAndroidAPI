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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LauncherApps_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps_Callback(QAndroidJniObject obj);
		
		// Constructors
		LauncherApps_Callback();
		
		// Methods
		void onPackageAdded(JString arg0, android::os::UserHandle arg1);
		void onPackageChanged(JString arg0, android::os::UserHandle arg1);
		void onPackageRemoved(JString arg0, android::os::UserHandle arg1);
		void onPackagesAvailable(JArray arg0, android::os::UserHandle arg1, jboolean arg2);
		void onPackagesSuspended(JArray arg0, android::os::UserHandle arg1);
		void onPackagesSuspended(JArray arg0, android::os::UserHandle arg1, android::os::Bundle arg2);
		void onPackagesUnavailable(JArray arg0, android::os::UserHandle arg1, jboolean arg2);
		void onPackagesUnsuspended(JArray arg0, android::os::UserHandle arg1);
		void onShortcutsChanged(JString arg0, JObject arg1, android::os::UserHandle arg2);
	};
} // namespace android::content::pm

