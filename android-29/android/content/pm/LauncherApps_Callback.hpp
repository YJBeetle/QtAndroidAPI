#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class LauncherApps_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		LauncherApps_Callback(QAndroidJniObject obj);
		// Constructors
		LauncherApps_Callback();
		
		// Methods
		void onPackageAdded(jstring arg0, android::os::UserHandle arg1);
		void onPackageChanged(jstring arg0, android::os::UserHandle arg1);
		void onPackageRemoved(jstring arg0, android::os::UserHandle arg1);
		void onPackagesAvailable(jarray arg0, android::os::UserHandle arg1, jboolean arg2);
		void onPackagesSuspended(jarray arg0, android::os::UserHandle arg1);
		void onPackagesSuspended(jarray arg0, android::os::UserHandle arg1, android::os::Bundle arg2);
		void onPackagesUnavailable(jarray arg0, android::os::UserHandle arg1, jboolean arg2);
		void onPackagesUnsuspended(jarray arg0, android::os::UserHandle arg1);
		void onShortcutsChanged(jstring arg0, __JniBaseClass arg1, android::os::UserHandle arg2);
	};
} // namespace android::content::pm

