#include "../../../JArray.hpp"
#include "../Context.hpp"
#include "./PackageManager.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/UUID.hpp"
#include "./ApplicationInfo.hpp"

namespace android::content::pm
{
	// Fields
	jint ApplicationInfo::CATEGORY_ACCESSIBILITY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_ACCESSIBILITY"
		);
	}
	jint ApplicationInfo::CATEGORY_AUDIO()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_AUDIO"
		);
	}
	jint ApplicationInfo::CATEGORY_GAME()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_GAME"
		);
	}
	jint ApplicationInfo::CATEGORY_IMAGE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_IMAGE"
		);
	}
	jint ApplicationInfo::CATEGORY_MAPS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_MAPS"
		);
	}
	jint ApplicationInfo::CATEGORY_NEWS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_NEWS"
		);
	}
	jint ApplicationInfo::CATEGORY_PRODUCTIVITY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_PRODUCTIVITY"
		);
	}
	jint ApplicationInfo::CATEGORY_SOCIAL()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_SOCIAL"
		);
	}
	jint ApplicationInfo::CATEGORY_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_UNDEFINED"
		);
	}
	jint ApplicationInfo::CATEGORY_VIDEO()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_VIDEO"
		);
	}
	JObject ApplicationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ApplicationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApplicationInfo::FLAG_ALLOW_BACKUP()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_BACKUP"
		);
	}
	jint ApplicationInfo::FLAG_ALLOW_CLEAR_USER_DATA()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_CLEAR_USER_DATA"
		);
	}
	jint ApplicationInfo::FLAG_ALLOW_TASK_REPARENTING()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_TASK_REPARENTING"
		);
	}
	jint ApplicationInfo::FLAG_DEBUGGABLE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_DEBUGGABLE"
		);
	}
	jint ApplicationInfo::FLAG_EXTERNAL_STORAGE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_EXTERNAL_STORAGE"
		);
	}
	jint ApplicationInfo::FLAG_EXTRACT_NATIVE_LIBS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_EXTRACT_NATIVE_LIBS"
		);
	}
	jint ApplicationInfo::FLAG_FACTORY_TEST()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_FACTORY_TEST"
		);
	}
	jint ApplicationInfo::FLAG_FULL_BACKUP_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_FULL_BACKUP_ONLY"
		);
	}
	jint ApplicationInfo::FLAG_HARDWARE_ACCELERATED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_HARDWARE_ACCELERATED"
		);
	}
	jint ApplicationInfo::FLAG_HAS_CODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_HAS_CODE"
		);
	}
	jint ApplicationInfo::FLAG_INSTALLED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_INSTALLED"
		);
	}
	jint ApplicationInfo::FLAG_IS_DATA_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_IS_DATA_ONLY"
		);
	}
	jint ApplicationInfo::FLAG_IS_GAME()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_IS_GAME"
		);
	}
	jint ApplicationInfo::FLAG_KILL_AFTER_RESTORE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_KILL_AFTER_RESTORE"
		);
	}
	jint ApplicationInfo::FLAG_LARGE_HEAP()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_LARGE_HEAP"
		);
	}
	jint ApplicationInfo::FLAG_MULTIARCH()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_MULTIARCH"
		);
	}
	jint ApplicationInfo::FLAG_PERSISTENT()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_PERSISTENT"
		);
	}
	jint ApplicationInfo::FLAG_RESIZEABLE_FOR_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_RESIZEABLE_FOR_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_RESTORE_ANY_VERSION()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_RESTORE_ANY_VERSION"
		);
	}
	jint ApplicationInfo::FLAG_STOPPED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_STOPPED"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_LARGE_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_LARGE_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_NORMAL_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_NORMAL_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_RTL()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_RTL"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_SCREEN_DENSITIES()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_SCREEN_DENSITIES"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_SMALL_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_SMALL_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_XLARGE_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_XLARGE_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUSPENDED"
		);
	}
	jint ApplicationInfo::FLAG_SYSTEM()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SYSTEM"
		);
	}
	jint ApplicationInfo::FLAG_TEST_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_TEST_ONLY"
		);
	}
	jint ApplicationInfo::FLAG_UPDATED_SYSTEM_APP()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_UPDATED_SYSTEM_APP"
		);
	}
	jint ApplicationInfo::FLAG_USES_CLEARTEXT_TRAFFIC()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_USES_CLEARTEXT_TRAFFIC"
		);
	}
	jint ApplicationInfo::FLAG_VM_SAFE_MODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_VM_SAFE_MODE"
		);
	}
	jint ApplicationInfo::GWP_ASAN_ALWAYS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"GWP_ASAN_ALWAYS"
		);
	}
	jint ApplicationInfo::GWP_ASAN_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"GWP_ASAN_DEFAULT"
		);
	}
	jint ApplicationInfo::GWP_ASAN_NEVER()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"GWP_ASAN_NEVER"
		);
	}
	jint ApplicationInfo::MEMTAG_ASYNC()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"MEMTAG_ASYNC"
		);
	}
	jint ApplicationInfo::MEMTAG_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"MEMTAG_DEFAULT"
		);
	}
	jint ApplicationInfo::MEMTAG_OFF()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"MEMTAG_OFF"
		);
	}
	jint ApplicationInfo::MEMTAG_SYNC()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"MEMTAG_SYNC"
		);
	}
	jint ApplicationInfo::RAW_EXTERNAL_STORAGE_ACCESS_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"RAW_EXTERNAL_STORAGE_ACCESS_DEFAULT"
		);
	}
	jint ApplicationInfo::RAW_EXTERNAL_STORAGE_ACCESS_NOT_REQUESTED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"RAW_EXTERNAL_STORAGE_ACCESS_NOT_REQUESTED"
		);
	}
	jint ApplicationInfo::RAW_EXTERNAL_STORAGE_ACCESS_REQUESTED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"RAW_EXTERNAL_STORAGE_ACCESS_REQUESTED"
		);
	}
	jint ApplicationInfo::ZEROINIT_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"ZEROINIT_DEFAULT"
		);
	}
	jint ApplicationInfo::ZEROINIT_DISABLED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"ZEROINIT_DISABLED"
		);
	}
	jint ApplicationInfo::ZEROINIT_ENABLED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"ZEROINIT_ENABLED"
		);
	}
	JString ApplicationInfo::appComponentFactory()
	{
		return getObjectField(
			"appComponentFactory",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationInfo::backupAgentName()
	{
		return getObjectField(
			"backupAgentName",
			"Ljava/lang/String;"
		);
	}
	jint ApplicationInfo::category()
	{
		return getField<jint>(
			"category"
		);
	}
	JString ApplicationInfo::className()
	{
		return getObjectField(
			"className",
			"Ljava/lang/String;"
		);
	}
	jint ApplicationInfo::compatibleWidthLimitDp()
	{
		return getField<jint>(
			"compatibleWidthLimitDp"
		);
	}
	jint ApplicationInfo::compileSdkVersion()
	{
		return getField<jint>(
			"compileSdkVersion"
		);
	}
	JString ApplicationInfo::compileSdkVersionCodename()
	{
		return getObjectField(
			"compileSdkVersionCodename",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationInfo::dataDir()
	{
		return getObjectField(
			"dataDir",
			"Ljava/lang/String;"
		);
	}
	jint ApplicationInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	JString ApplicationInfo::deviceProtectedDataDir()
	{
		return getObjectField(
			"deviceProtectedDataDir",
			"Ljava/lang/String;"
		);
	}
	jboolean ApplicationInfo::enabled()
	{
		return getField<jboolean>(
			"enabled"
		);
	}
	jint ApplicationInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jint ApplicationInfo::largestWidthLimitDp()
	{
		return getField<jint>(
			"largestWidthLimitDp"
		);
	}
	JString ApplicationInfo::manageSpaceActivityName()
	{
		return getObjectField(
			"manageSpaceActivityName",
			"Ljava/lang/String;"
		);
	}
	jint ApplicationInfo::minSdkVersion()
	{
		return getField<jint>(
			"minSdkVersion"
		);
	}
	JString ApplicationInfo::nativeLibraryDir()
	{
		return getObjectField(
			"nativeLibraryDir",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationInfo::permission()
	{
		return getObjectField(
			"permission",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationInfo::publicSourceDir()
	{
		return getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;"
		);
	}
	jint ApplicationInfo::requiresSmallestWidthDp()
	{
		return getField<jint>(
			"requiresSmallestWidthDp"
		);
	}
	JArray ApplicationInfo::sharedLibraryFiles()
	{
		return getObjectField(
			"sharedLibraryFiles",
			"[Ljava/lang/String;"
		);
	}
	JString ApplicationInfo::sourceDir()
	{
		return getObjectField(
			"sourceDir",
			"Ljava/lang/String;"
		);
	}
	JArray ApplicationInfo::splitNames()
	{
		return getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		);
	}
	JArray ApplicationInfo::splitPublicSourceDirs()
	{
		return getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;"
		);
	}
	JArray ApplicationInfo::splitSourceDirs()
	{
		return getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;"
		);
	}
	java::util::UUID ApplicationInfo::storageUuid()
	{
		return getObjectField(
			"storageUuid",
			"Ljava/util/UUID;"
		);
	}
	jint ApplicationInfo::targetSdkVersion()
	{
		return getField<jint>(
			"targetSdkVersion"
		);
	}
	JString ApplicationInfo::taskAffinity()
	{
		return getObjectField(
			"taskAffinity",
			"Ljava/lang/String;"
		);
	}
	jint ApplicationInfo::theme()
	{
		return getField<jint>(
			"theme"
		);
	}
	jint ApplicationInfo::uiOptions()
	{
		return getField<jint>(
			"uiOptions"
		);
	}
	jint ApplicationInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// QJniObject forward
	ApplicationInfo::ApplicationInfo(QJniObject obj) : android::content::pm::PackageItemInfo(obj) {}
	
	// Constructors
	ApplicationInfo::ApplicationInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.ApplicationInfo",
			"()V"
		) {}
	ApplicationInfo::ApplicationInfo(android::content::pm::ApplicationInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.ApplicationInfo",
			"(Landroid/content/pm/ApplicationInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	JString ApplicationInfo::getCategoryTitle(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.content.pm.ApplicationInfo",
			"getCategoryTitle",
			"(Landroid/content/Context;I)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1
		);
	}
	jboolean ApplicationInfo::areAttributionsUserVisible() const
	{
		return callMethod<jboolean>(
			"areAttributionsUserVisible",
			"()Z"
		);
	}
	jint ApplicationInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ApplicationInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jint ApplicationInfo::getGwpAsanMode() const
	{
		return callMethod<jint>(
			"getGwpAsanMode",
			"()I"
		);
	}
	jint ApplicationInfo::getMemtagMode() const
	{
		return callMethod<jint>(
			"getMemtagMode",
			"()I"
		);
	}
	jint ApplicationInfo::getNativeHeapZeroInitialized() const
	{
		return callMethod<jint>(
			"getNativeHeapZeroInitialized",
			"()I"
		);
	}
	jint ApplicationInfo::getRequestRawExternalStorageAccess() const
	{
		return callMethod<jint>(
			"getRequestRawExternalStorageAccess",
			"()I"
		);
	}
	jboolean ApplicationInfo::isProfileable() const
	{
		return callMethod<jboolean>(
			"isProfileable",
			"()Z"
		);
	}
	jboolean ApplicationInfo::isProfileableByShell() const
	{
		return callMethod<jboolean>(
			"isProfileableByShell",
			"()Z"
		);
	}
	jboolean ApplicationInfo::isResourceOverlay() const
	{
		return callMethod<jboolean>(
			"isResourceOverlay",
			"()Z"
		);
	}
	jboolean ApplicationInfo::isVirtualPreload() const
	{
		return callMethod<jboolean>(
			"isVirtualPreload",
			"()Z"
		);
	}
	JString ApplicationInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JString ApplicationInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ApplicationInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

