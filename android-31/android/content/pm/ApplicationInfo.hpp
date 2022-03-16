#pragma once

#include "./PackageItemInfo.hpp"

class JArray;
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
class JString;
class JString;
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
		static jint CATEGORY_ACCESSIBILITY();
		static jint CATEGORY_AUDIO();
		static jint CATEGORY_GAME();
		static jint CATEGORY_IMAGE();
		static jint CATEGORY_MAPS();
		static jint CATEGORY_NEWS();
		static jint CATEGORY_PRODUCTIVITY();
		static jint CATEGORY_SOCIAL();
		static jint CATEGORY_UNDEFINED();
		static jint CATEGORY_VIDEO();
		static JObject CREATOR();
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
		static jint GWP_ASAN_ALWAYS();
		static jint GWP_ASAN_DEFAULT();
		static jint GWP_ASAN_NEVER();
		static jint MEMTAG_ASYNC();
		static jint MEMTAG_DEFAULT();
		static jint MEMTAG_OFF();
		static jint MEMTAG_SYNC();
		static jint RAW_EXTERNAL_STORAGE_ACCESS_DEFAULT();
		static jint RAW_EXTERNAL_STORAGE_ACCESS_NOT_REQUESTED();
		static jint RAW_EXTERNAL_STORAGE_ACCESS_REQUESTED();
		static jint ZEROINIT_DEFAULT();
		static jint ZEROINIT_DISABLED();
		static jint ZEROINIT_ENABLED();
		JString appComponentFactory();
		JString backupAgentName();
		jint category();
		JString className();
		jint compatibleWidthLimitDp();
		jint compileSdkVersion();
		JString compileSdkVersionCodename();
		JString dataDir();
		jint descriptionRes();
		JString deviceProtectedDataDir();
		jboolean enabled();
		jint flags();
		jint largestWidthLimitDp();
		JString manageSpaceActivityName();
		jint minSdkVersion();
		JString nativeLibraryDir();
		JString permission();
		JString processName();
		JString publicSourceDir();
		jint requiresSmallestWidthDp();
		JArray sharedLibraryFiles();
		JString sourceDir();
		JArray splitNames();
		JArray splitPublicSourceDirs();
		JArray splitSourceDirs();
		java::util::UUID storageUuid();
		jint targetSdkVersion();
		JString taskAffinity();
		jint theme();
		jint uiOptions();
		jint uid();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::PackageItemInfo(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationInfo(QAndroidJniObject obj) : android::content::pm::PackageItemInfo(obj) {}
		
		// Constructors
		ApplicationInfo();
		ApplicationInfo(android::content::pm::ApplicationInfo &arg0);
		
		// Methods
		static JString getCategoryTitle(android::content::Context arg0, jint arg1);
		jboolean areAttributionsUserVisible() const;
		jint describeContents() const;
		void dump(JObject arg0, JString arg1) const;
		jint getGwpAsanMode() const;
		jint getMemtagMode() const;
		jint getNativeHeapZeroInitialized() const;
		jint getRequestRawExternalStorageAccess() const;
		jboolean isProfileable() const;
		jboolean isProfileableByShell() const;
		jboolean isResourceOverlay() const;
		jboolean isVirtualPreload() const;
		JString loadDescription(android::content::pm::PackageManager arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

