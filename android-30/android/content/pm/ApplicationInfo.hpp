#pragma once

#include "../../../JArray.hpp"
#include "../Context.def.hpp"
#include "./PackageManager.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/UUID.def.hpp"
#include "./ApplicationInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline jint ApplicationInfo::CATEGORY_AUDIO()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_AUDIO"
		);
	}
	inline jint ApplicationInfo::CATEGORY_GAME()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_GAME"
		);
	}
	inline jint ApplicationInfo::CATEGORY_IMAGE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_IMAGE"
		);
	}
	inline jint ApplicationInfo::CATEGORY_MAPS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_MAPS"
		);
	}
	inline jint ApplicationInfo::CATEGORY_NEWS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_NEWS"
		);
	}
	inline jint ApplicationInfo::CATEGORY_PRODUCTIVITY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_PRODUCTIVITY"
		);
	}
	inline jint ApplicationInfo::CATEGORY_SOCIAL()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_SOCIAL"
		);
	}
	inline jint ApplicationInfo::CATEGORY_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_UNDEFINED"
		);
	}
	inline jint ApplicationInfo::CATEGORY_VIDEO()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_VIDEO"
		);
	}
	inline JObject ApplicationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ApplicationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ApplicationInfo::FLAG_ALLOW_BACKUP()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_BACKUP"
		);
	}
	inline jint ApplicationInfo::FLAG_ALLOW_CLEAR_USER_DATA()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_CLEAR_USER_DATA"
		);
	}
	inline jint ApplicationInfo::FLAG_ALLOW_TASK_REPARENTING()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_TASK_REPARENTING"
		);
	}
	inline jint ApplicationInfo::FLAG_DEBUGGABLE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_DEBUGGABLE"
		);
	}
	inline jint ApplicationInfo::FLAG_EXTERNAL_STORAGE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_EXTERNAL_STORAGE"
		);
	}
	inline jint ApplicationInfo::FLAG_EXTRACT_NATIVE_LIBS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_EXTRACT_NATIVE_LIBS"
		);
	}
	inline jint ApplicationInfo::FLAG_FACTORY_TEST()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_FACTORY_TEST"
		);
	}
	inline jint ApplicationInfo::FLAG_FULL_BACKUP_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_FULL_BACKUP_ONLY"
		);
	}
	inline jint ApplicationInfo::FLAG_HARDWARE_ACCELERATED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_HARDWARE_ACCELERATED"
		);
	}
	inline jint ApplicationInfo::FLAG_HAS_CODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_HAS_CODE"
		);
	}
	inline jint ApplicationInfo::FLAG_INSTALLED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_INSTALLED"
		);
	}
	inline jint ApplicationInfo::FLAG_IS_DATA_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_IS_DATA_ONLY"
		);
	}
	inline jint ApplicationInfo::FLAG_IS_GAME()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_IS_GAME"
		);
	}
	inline jint ApplicationInfo::FLAG_KILL_AFTER_RESTORE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_KILL_AFTER_RESTORE"
		);
	}
	inline jint ApplicationInfo::FLAG_LARGE_HEAP()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_LARGE_HEAP"
		);
	}
	inline jint ApplicationInfo::FLAG_MULTIARCH()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_MULTIARCH"
		);
	}
	inline jint ApplicationInfo::FLAG_PERSISTENT()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_PERSISTENT"
		);
	}
	inline jint ApplicationInfo::FLAG_RESIZEABLE_FOR_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_RESIZEABLE_FOR_SCREENS"
		);
	}
	inline jint ApplicationInfo::FLAG_RESTORE_ANY_VERSION()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_RESTORE_ANY_VERSION"
		);
	}
	inline jint ApplicationInfo::FLAG_STOPPED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_STOPPED"
		);
	}
	inline jint ApplicationInfo::FLAG_SUPPORTS_LARGE_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_LARGE_SCREENS"
		);
	}
	inline jint ApplicationInfo::FLAG_SUPPORTS_NORMAL_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_NORMAL_SCREENS"
		);
	}
	inline jint ApplicationInfo::FLAG_SUPPORTS_RTL()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_RTL"
		);
	}
	inline jint ApplicationInfo::FLAG_SUPPORTS_SCREEN_DENSITIES()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_SCREEN_DENSITIES"
		);
	}
	inline jint ApplicationInfo::FLAG_SUPPORTS_SMALL_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_SMALL_SCREENS"
		);
	}
	inline jint ApplicationInfo::FLAG_SUPPORTS_XLARGE_SCREENS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_XLARGE_SCREENS"
		);
	}
	inline jint ApplicationInfo::FLAG_SUSPENDED()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUSPENDED"
		);
	}
	inline jint ApplicationInfo::FLAG_SYSTEM()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SYSTEM"
		);
	}
	inline jint ApplicationInfo::FLAG_TEST_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_TEST_ONLY"
		);
	}
	inline jint ApplicationInfo::FLAG_UPDATED_SYSTEM_APP()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_UPDATED_SYSTEM_APP"
		);
	}
	inline jint ApplicationInfo::FLAG_USES_CLEARTEXT_TRAFFIC()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_USES_CLEARTEXT_TRAFFIC"
		);
	}
	inline jint ApplicationInfo::FLAG_VM_SAFE_MODE()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_VM_SAFE_MODE"
		);
	}
	inline jint ApplicationInfo::GWP_ASAN_ALWAYS()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"GWP_ASAN_ALWAYS"
		);
	}
	inline jint ApplicationInfo::GWP_ASAN_DEFAULT()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"GWP_ASAN_DEFAULT"
		);
	}
	inline jint ApplicationInfo::GWP_ASAN_NEVER()
	{
		return getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"GWP_ASAN_NEVER"
		);
	}
	inline JString ApplicationInfo::appComponentFactory()
	{
		return getObjectField(
			"appComponentFactory",
			"Ljava/lang/String;"
		);
	}
	inline JString ApplicationInfo::backupAgentName()
	{
		return getObjectField(
			"backupAgentName",
			"Ljava/lang/String;"
		);
	}
	inline jint ApplicationInfo::category()
	{
		return getField<jint>(
			"category"
		);
	}
	inline JString ApplicationInfo::className()
	{
		return getObjectField(
			"className",
			"Ljava/lang/String;"
		);
	}
	inline jint ApplicationInfo::compatibleWidthLimitDp()
	{
		return getField<jint>(
			"compatibleWidthLimitDp"
		);
	}
	inline JString ApplicationInfo::dataDir()
	{
		return getObjectField(
			"dataDir",
			"Ljava/lang/String;"
		);
	}
	inline jint ApplicationInfo::descriptionRes()
	{
		return getField<jint>(
			"descriptionRes"
		);
	}
	inline JString ApplicationInfo::deviceProtectedDataDir()
	{
		return getObjectField(
			"deviceProtectedDataDir",
			"Ljava/lang/String;"
		);
	}
	inline jboolean ApplicationInfo::enabled()
	{
		return getField<jboolean>(
			"enabled"
		);
	}
	inline jint ApplicationInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jint ApplicationInfo::largestWidthLimitDp()
	{
		return getField<jint>(
			"largestWidthLimitDp"
		);
	}
	inline JString ApplicationInfo::manageSpaceActivityName()
	{
		return getObjectField(
			"manageSpaceActivityName",
			"Ljava/lang/String;"
		);
	}
	inline jint ApplicationInfo::minSdkVersion()
	{
		return getField<jint>(
			"minSdkVersion"
		);
	}
	inline JString ApplicationInfo::nativeLibraryDir()
	{
		return getObjectField(
			"nativeLibraryDir",
			"Ljava/lang/String;"
		);
	}
	inline JString ApplicationInfo::permission()
	{
		return getObjectField(
			"permission",
			"Ljava/lang/String;"
		);
	}
	inline JString ApplicationInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	inline JString ApplicationInfo::publicSourceDir()
	{
		return getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;"
		);
	}
	inline jint ApplicationInfo::requiresSmallestWidthDp()
	{
		return getField<jint>(
			"requiresSmallestWidthDp"
		);
	}
	inline JArray ApplicationInfo::sharedLibraryFiles()
	{
		return getObjectField(
			"sharedLibraryFiles",
			"[Ljava/lang/String;"
		);
	}
	inline JString ApplicationInfo::sourceDir()
	{
		return getObjectField(
			"sourceDir",
			"Ljava/lang/String;"
		);
	}
	inline JArray ApplicationInfo::splitNames()
	{
		return getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		);
	}
	inline JArray ApplicationInfo::splitPublicSourceDirs()
	{
		return getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;"
		);
	}
	inline JArray ApplicationInfo::splitSourceDirs()
	{
		return getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;"
		);
	}
	inline java::util::UUID ApplicationInfo::storageUuid()
	{
		return getObjectField(
			"storageUuid",
			"Ljava/util/UUID;"
		);
	}
	inline jint ApplicationInfo::targetSdkVersion()
	{
		return getField<jint>(
			"targetSdkVersion"
		);
	}
	inline JString ApplicationInfo::taskAffinity()
	{
		return getObjectField(
			"taskAffinity",
			"Ljava/lang/String;"
		);
	}
	inline jint ApplicationInfo::theme()
	{
		return getField<jint>(
			"theme"
		);
	}
	inline jint ApplicationInfo::uiOptions()
	{
		return getField<jint>(
			"uiOptions"
		);
	}
	inline jint ApplicationInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// Constructors
	inline ApplicationInfo::ApplicationInfo()
		: android::content::pm::PackageItemInfo(
			"android.content.pm.ApplicationInfo",
			"()V"
		) {}
	inline ApplicationInfo::ApplicationInfo(android::content::pm::ApplicationInfo &arg0)
		: android::content::pm::PackageItemInfo(
			"android.content.pm.ApplicationInfo",
			"(Landroid/content/pm/ApplicationInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline JString ApplicationInfo::getCategoryTitle(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.content.pm.ApplicationInfo",
			"getCategoryTitle",
			"(Landroid/content/Context;I)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1
		);
	}
	inline jint ApplicationInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ApplicationInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint ApplicationInfo::getGwpAsanMode() const
	{
		return callMethod<jint>(
			"getGwpAsanMode",
			"()I"
		);
	}
	inline jboolean ApplicationInfo::isProfileableByShell() const
	{
		return callMethod<jboolean>(
			"isProfileableByShell",
			"()Z"
		);
	}
	inline jboolean ApplicationInfo::isResourceOverlay() const
	{
		return callMethod<jboolean>(
			"isResourceOverlay",
			"()Z"
		);
	}
	inline jboolean ApplicationInfo::isVirtualPreload() const
	{
		return callMethod<jboolean>(
			"isVirtualPreload",
			"()Z"
		);
	}
	inline JString ApplicationInfo::loadDescription(android::content::pm::PackageManager arg0) const
	{
		return callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JString ApplicationInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ApplicationInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers
#include "./PackageItemInfo.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
