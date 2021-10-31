#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PackageItemInfo.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class UUID;
}

namespace android::content::pm
{
	class ApplicationInfo : public android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		static jint CATEGORY_AUDIO();
		static jint CATEGORY_GAME();
		static jint CATEGORY_IMAGE();
		static jint CATEGORY_MAPS();
		static jint CATEGORY_NEWS();
		static jint CATEGORY_PRODUCTIVITY();
		static jint CATEGORY_SOCIAL();
		static jint CATEGORY_UNDEFINED();
		static jint CATEGORY_VIDEO();
		static __JniBaseClass CREATOR();
		static jint FLAG_ALLOW_BACKUP();
		static jint FLAG_ALLOW_CLEAR_USER_DATA();
		static jint FLAG_ALLOW_TASK_REPARENTING();
		static jint FLAG_DEBUGGABLE();
		static jint FLAG_EXTERNAL_STORAGE();
		static jint FLAG_EXTRACT_NATIVE_LIBS();
		static jint FLAG_FACTORY_TEST();
		static jint FLAG_FULL_BACKUP_ONLY();
		static jint FLAG_HARDWARE_ACCELERATED();
		static jint FLAG_HAS_CODE();
		static jint FLAG_INSTALLED();
		static jint FLAG_IS_DATA_ONLY();
		static jint FLAG_IS_GAME();
		static jint FLAG_KILL_AFTER_RESTORE();
		static jint FLAG_LARGE_HEAP();
		static jint FLAG_MULTIARCH();
		static jint FLAG_PERSISTENT();
		static jint FLAG_RESIZEABLE_FOR_SCREENS();
		static jint FLAG_RESTORE_ANY_VERSION();
		static jint FLAG_STOPPED();
		static jint FLAG_SUPPORTS_LARGE_SCREENS();
		static jint FLAG_SUPPORTS_NORMAL_SCREENS();
		static jint FLAG_SUPPORTS_RTL();
		static jint FLAG_SUPPORTS_SCREEN_DENSITIES();
		static jint FLAG_SUPPORTS_SMALL_SCREENS();
		static jint FLAG_SUPPORTS_XLARGE_SCREENS();
		static jint FLAG_SUSPENDED();
		static jint FLAG_SYSTEM();
		static jint FLAG_TEST_ONLY();
		static jint FLAG_UPDATED_SYSTEM_APP();
		static jint FLAG_USES_CLEARTEXT_TRAFFIC();
		static jint FLAG_VM_SAFE_MODE();
		jstring appComponentFactory();
		jstring backupAgentName();
		jint category();
		jstring className();
		jint compatibleWidthLimitDp();
		jstring dataDir();
		jint descriptionRes();
		jstring deviceProtectedDataDir();
		jboolean enabled();
		jint flags();
		jint largestWidthLimitDp();
		jstring manageSpaceActivityName();
		jint minSdkVersion();
		jstring nativeLibraryDir();
		jstring permission();
		jstring processName();
		jstring publicSourceDir();
		jint requiresSmallestWidthDp();
		jarray sharedLibraryFiles();
		jstring sourceDir();
		jarray splitNames();
		jarray splitPublicSourceDirs();
		jarray splitSourceDirs();
		java::util::UUID storageUuid();
		jint targetSdkVersion();
		jstring taskAffinity();
		jint theme();
		jint uiOptions();
		jint uid();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::PackageItemInfo(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationInfo(QAndroidJniObject obj);
		
		// Constructors
		ApplicationInfo();
		ApplicationInfo(android::content::pm::ApplicationInfo &arg0);
		
		// Methods
		static jstring getCategoryTitle(android::content::Context arg0, jint arg1);
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		jboolean isVirtualPreload();
		jstring loadDescription(android::content::pm::PackageManager arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

