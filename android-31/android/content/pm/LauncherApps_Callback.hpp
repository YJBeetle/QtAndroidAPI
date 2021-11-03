#pragma once

#include "../../../JObject.hpp"

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
	class LauncherApps_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LauncherApps_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherApps_Callback(QJniObject obj);
		
		// Constructors
		LauncherApps_Callback();
		
		// Methods
		void onPackageAdded(jstring arg0, android::os::UserHandle arg1);
		void onPackageChanged(jstring arg0, android::os::UserHandle arg1);
		void onPackageLoadingProgressChanged(jstring arg0, android::os::UserHandle arg1, jfloat arg2);
		void onPackageRemoved(jstring arg0, android::os::UserHandle arg1);
		void onPackagesAvailable(jarray arg0, android::os::UserHandle arg1, jboolean arg2);
		void onPackagesSuspended(jarray arg0, android::os::UserHandle arg1);
		void onPackagesSuspended(jarray arg0, android::os::UserHandle arg1, android::os::Bundle arg2);
		void onPackagesUnavailable(jarray arg0, android::os::UserHandle arg1, jboolean arg2);
		void onPackagesUnsuspended(jarray arg0, android::os::UserHandle arg1);
		void onShortcutsChanged(jstring arg0, JObject arg1, android::os::UserHandle arg2);
	};
} // namespace android::content::pm

