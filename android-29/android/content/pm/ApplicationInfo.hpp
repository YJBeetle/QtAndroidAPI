#pragma once

#ifndef ANDROID_CONTENT_PM_APPLICATIONINFO
#define ANDROID_CONTENT_PM_APPLICATIONINFO

#include "../../../__JniBaseClass.hpp"
#include "PackageItemInfo.hpp"

namespace __jni_impl::java::util
{
	class UUID;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}

namespace __jni_impl::android::content::pm
{
	class ApplicationInfo : public __jni_impl::android::content::pm::PackageItemInfo
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
		static QAndroidJniObject CREATOR();
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
		QAndroidJniObject storageUuid();
		jint targetSdkVersion();
		jstring taskAffinity();
		jint theme();
		jint uiOptions();
		jint uid();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::ApplicationInfo arg0);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static jstring getCategoryTitle(__jni_impl::android::content::Context arg0, jint arg1);
		jboolean isVirtualPreload();
		jboolean isProfileableByShell();
		jboolean isResourceOverlay();
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void dump(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		jstring loadDescription(__jni_impl::android::content::pm::PackageManager arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../../../java/util/UUID.hpp"
#include "../../os/Parcel.hpp"
#include "../Context.hpp"
#include "PackageManager.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	jint ApplicationInfo::CATEGORY_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_AUDIO"
		);
	}
	jint ApplicationInfo::CATEGORY_GAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_GAME"
		);
	}
	jint ApplicationInfo::CATEGORY_IMAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_IMAGE"
		);
	}
	jint ApplicationInfo::CATEGORY_MAPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_MAPS"
		);
	}
	jint ApplicationInfo::CATEGORY_NEWS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_NEWS"
		);
	}
	jint ApplicationInfo::CATEGORY_PRODUCTIVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_PRODUCTIVITY"
		);
	}
	jint ApplicationInfo::CATEGORY_SOCIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_SOCIAL"
		);
	}
	jint ApplicationInfo::CATEGORY_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_UNDEFINED"
		);
	}
	jint ApplicationInfo::CATEGORY_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"CATEGORY_VIDEO"
		);
	}
	QAndroidJniObject ApplicationInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ApplicationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApplicationInfo::FLAG_ALLOW_BACKUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_BACKUP"
		);
	}
	jint ApplicationInfo::FLAG_ALLOW_CLEAR_USER_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_CLEAR_USER_DATA"
		);
	}
	jint ApplicationInfo::FLAG_ALLOW_TASK_REPARENTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_ALLOW_TASK_REPARENTING"
		);
	}
	jint ApplicationInfo::FLAG_DEBUGGABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_DEBUGGABLE"
		);
	}
	jint ApplicationInfo::FLAG_EXTERNAL_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_EXTERNAL_STORAGE"
		);
	}
	jint ApplicationInfo::FLAG_EXTRACT_NATIVE_LIBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_EXTRACT_NATIVE_LIBS"
		);
	}
	jint ApplicationInfo::FLAG_FACTORY_TEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_FACTORY_TEST"
		);
	}
	jint ApplicationInfo::FLAG_FULL_BACKUP_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_FULL_BACKUP_ONLY"
		);
	}
	jint ApplicationInfo::FLAG_HARDWARE_ACCELERATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_HARDWARE_ACCELERATED"
		);
	}
	jint ApplicationInfo::FLAG_HAS_CODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_HAS_CODE"
		);
	}
	jint ApplicationInfo::FLAG_INSTALLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_INSTALLED"
		);
	}
	jint ApplicationInfo::FLAG_IS_DATA_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_IS_DATA_ONLY"
		);
	}
	jint ApplicationInfo::FLAG_IS_GAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_IS_GAME"
		);
	}
	jint ApplicationInfo::FLAG_KILL_AFTER_RESTORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_KILL_AFTER_RESTORE"
		);
	}
	jint ApplicationInfo::FLAG_LARGE_HEAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_LARGE_HEAP"
		);
	}
	jint ApplicationInfo::FLAG_MULTIARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_MULTIARCH"
		);
	}
	jint ApplicationInfo::FLAG_PERSISTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_PERSISTENT"
		);
	}
	jint ApplicationInfo::FLAG_RESIZEABLE_FOR_SCREENS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_RESIZEABLE_FOR_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_RESTORE_ANY_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_RESTORE_ANY_VERSION"
		);
	}
	jint ApplicationInfo::FLAG_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_STOPPED"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_LARGE_SCREENS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_LARGE_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_NORMAL_SCREENS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_NORMAL_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_RTL"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_SCREEN_DENSITIES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_SCREEN_DENSITIES"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_SMALL_SCREENS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_SMALL_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_SUPPORTS_XLARGE_SCREENS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUPPORTS_XLARGE_SCREENS"
		);
	}
	jint ApplicationInfo::FLAG_SUSPENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SUSPENDED"
		);
	}
	jint ApplicationInfo::FLAG_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_SYSTEM"
		);
	}
	jint ApplicationInfo::FLAG_TEST_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_TEST_ONLY"
		);
	}
	jint ApplicationInfo::FLAG_UPDATED_SYSTEM_APP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_UPDATED_SYSTEM_APP"
		);
	}
	jint ApplicationInfo::FLAG_USES_CLEARTEXT_TRAFFIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_USES_CLEARTEXT_TRAFFIC"
		);
	}
	jint ApplicationInfo::FLAG_VM_SAFE_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ApplicationInfo",
			"FLAG_VM_SAFE_MODE"
		);
	}
	jstring ApplicationInfo::appComponentFactory()
	{
		return __thiz.getObjectField(
			"appComponentFactory",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationInfo::backupAgentName()
	{
		return __thiz.getObjectField(
			"backupAgentName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationInfo::category()
	{
		return __thiz.getField<jint>(
			"category"
		);
	}
	jstring ApplicationInfo::className()
	{
		return __thiz.getObjectField(
			"className",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationInfo::compatibleWidthLimitDp()
	{
		return __thiz.getField<jint>(
			"compatibleWidthLimitDp"
		);
	}
	jstring ApplicationInfo::dataDir()
	{
		return __thiz.getObjectField(
			"dataDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationInfo::descriptionRes()
	{
		return __thiz.getField<jint>(
			"descriptionRes"
		);
	}
	jstring ApplicationInfo::deviceProtectedDataDir()
	{
		return __thiz.getObjectField(
			"deviceProtectedDataDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean ApplicationInfo::enabled()
	{
		return __thiz.getField<jboolean>(
			"enabled"
		);
	}
	jint ApplicationInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jint ApplicationInfo::largestWidthLimitDp()
	{
		return __thiz.getField<jint>(
			"largestWidthLimitDp"
		);
	}
	jstring ApplicationInfo::manageSpaceActivityName()
	{
		return __thiz.getObjectField(
			"manageSpaceActivityName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationInfo::minSdkVersion()
	{
		return __thiz.getField<jint>(
			"minSdkVersion"
		);
	}
	jstring ApplicationInfo::nativeLibraryDir()
	{
		return __thiz.getObjectField(
			"nativeLibraryDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationInfo::permission()
	{
		return __thiz.getObjectField(
			"permission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationInfo::processName()
	{
		return __thiz.getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationInfo::publicSourceDir()
	{
		return __thiz.getObjectField(
			"publicSourceDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationInfo::requiresSmallestWidthDp()
	{
		return __thiz.getField<jint>(
			"requiresSmallestWidthDp"
		);
	}
	jarray ApplicationInfo::sharedLibraryFiles()
	{
		return __thiz.getObjectField(
			"sharedLibraryFiles",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring ApplicationInfo::sourceDir()
	{
		return __thiz.getObjectField(
			"sourceDir",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ApplicationInfo::splitNames()
	{
		return __thiz.getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray ApplicationInfo::splitPublicSourceDirs()
	{
		return __thiz.getObjectField(
			"splitPublicSourceDirs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray ApplicationInfo::splitSourceDirs()
	{
		return __thiz.getObjectField(
			"splitSourceDirs",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject ApplicationInfo::storageUuid()
	{
		return __thiz.getObjectField(
			"storageUuid",
			"Ljava/util/UUID;"
		);
	}
	jint ApplicationInfo::targetSdkVersion()
	{
		return __thiz.getField<jint>(
			"targetSdkVersion"
		);
	}
	jstring ApplicationInfo::taskAffinity()
	{
		return __thiz.getObjectField(
			"taskAffinity",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationInfo::theme()
	{
		return __thiz.getField<jint>(
			"theme"
		);
	}
	jint ApplicationInfo::uiOptions()
	{
		return __thiz.getField<jint>(
			"uiOptions"
		);
	}
	jint ApplicationInfo::uid()
	{
		return __thiz.getField<jint>(
			"uid"
		);
	}
	
	// Constructors
	void ApplicationInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ApplicationInfo",
			"()V"
		);
	}
	void ApplicationInfo::__constructor(__jni_impl::android::content::pm::ApplicationInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ApplicationInfo",
			"(Landroid/content/pm/ApplicationInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring ApplicationInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ApplicationInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring ApplicationInfo::getCategoryTitle(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.pm.ApplicationInfo",
			"getCategoryTitle",
			"(Landroid/content/Context;I)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jboolean ApplicationInfo::isVirtualPreload()
	{
		return __thiz.callMethod<jboolean>(
			"isVirtualPreload",
			"()Z"
		);
	}
	jboolean ApplicationInfo::isProfileableByShell()
	{
		return __thiz.callMethod<jboolean>(
			"isProfileableByShell",
			"()Z"
		);
	}
	jboolean ApplicationInfo::isResourceOverlay()
	{
		return __thiz.callMethod<jboolean>(
			"isResourceOverlay",
			"()Z"
		);
	}
	void ApplicationInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationInfo::dump(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring ApplicationInfo::loadDescription(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadDescription",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ApplicationInfo : public __jni_impl::android::content::pm::ApplicationInfo
	{
	public:
		ApplicationInfo(QAndroidJniObject obj) { __thiz = obj; }
		ApplicationInfo()
		{
			__constructor();
		}
		ApplicationInfo(__jni_impl::android::content::pm::ApplicationInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_APPLICATIONINFO

