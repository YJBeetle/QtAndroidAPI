#pragma once

#ifndef ANDROID_CONTENT_INTENT
#define ANDROID_CONTENT_INTENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::content::pm
{
	class ActivityInfo;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}

namespace __jni_impl::android::content
{
	class Intent : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_AIRPLANE_MODE_CHANGED();
		static jstring ACTION_ALL_APPS();
		static jstring ACTION_ANSWER();
		static jstring ACTION_APPLICATION_PREFERENCES();
		static jstring ACTION_APPLICATION_RESTRICTIONS_CHANGED();
		static jstring ACTION_APP_ERROR();
		static jstring ACTION_ASSIST();
		static jstring ACTION_ATTACH_DATA();
		static jstring ACTION_BATTERY_CHANGED();
		static jstring ACTION_BATTERY_LOW();
		static jstring ACTION_BATTERY_OKAY();
		static jstring ACTION_BOOT_COMPLETED();
		static jstring ACTION_BUG_REPORT();
		static jstring ACTION_CALL();
		static jstring ACTION_CALL_BUTTON();
		static jstring ACTION_CAMERA_BUTTON();
		static jstring ACTION_CARRIER_SETUP();
		static jstring ACTION_CHOOSER();
		static jstring ACTION_CLOSE_SYSTEM_DIALOGS();
		static jstring ACTION_CONFIGURATION_CHANGED();
		static jstring ACTION_CREATE_DOCUMENT();
		static jstring ACTION_CREATE_SHORTCUT();
		static jstring ACTION_DATE_CHANGED();
		static jstring ACTION_DEFAULT();
		static jstring ACTION_DEFINE();
		static jstring ACTION_DELETE();
		static jstring ACTION_DEVICE_STORAGE_LOW();
		static jstring ACTION_DEVICE_STORAGE_OK();
		static jstring ACTION_DIAL();
		static jstring ACTION_DOCK_EVENT();
		static jstring ACTION_DREAMING_STARTED();
		static jstring ACTION_DREAMING_STOPPED();
		static jstring ACTION_EDIT();
		static jstring ACTION_EXTERNAL_APPLICATIONS_AVAILABLE();
		static jstring ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE();
		static jstring ACTION_FACTORY_TEST();
		static jstring ACTION_GET_CONTENT();
		static jstring ACTION_GET_RESTRICTION_ENTRIES();
		static jstring ACTION_GTALK_SERVICE_CONNECTED();
		static jstring ACTION_GTALK_SERVICE_DISCONNECTED();
		static jstring ACTION_HEADSET_PLUG();
		static jstring ACTION_INPUT_METHOD_CHANGED();
		static jstring ACTION_INSERT();
		static jstring ACTION_INSERT_OR_EDIT();
		static jstring ACTION_INSTALL_FAILURE();
		static jstring ACTION_INSTALL_PACKAGE();
		static jstring ACTION_LOCALE_CHANGED();
		static jstring ACTION_LOCKED_BOOT_COMPLETED();
		static jstring ACTION_MAIN();
		static jstring ACTION_MANAGED_PROFILE_ADDED();
		static jstring ACTION_MANAGED_PROFILE_AVAILABLE();
		static jstring ACTION_MANAGED_PROFILE_REMOVED();
		static jstring ACTION_MANAGED_PROFILE_UNAVAILABLE();
		static jstring ACTION_MANAGED_PROFILE_UNLOCKED();
		static jstring ACTION_MANAGE_NETWORK_USAGE();
		static jstring ACTION_MANAGE_PACKAGE_STORAGE();
		static jstring ACTION_MEDIA_BAD_REMOVAL();
		static jstring ACTION_MEDIA_BUTTON();
		static jstring ACTION_MEDIA_CHECKING();
		static jstring ACTION_MEDIA_EJECT();
		static jstring ACTION_MEDIA_MOUNTED();
		static jstring ACTION_MEDIA_NOFS();
		static jstring ACTION_MEDIA_REMOVED();
		static jstring ACTION_MEDIA_SCANNER_FINISHED();
		static jstring ACTION_MEDIA_SCANNER_SCAN_FILE();
		static jstring ACTION_MEDIA_SCANNER_STARTED();
		static jstring ACTION_MEDIA_SHARED();
		static jstring ACTION_MEDIA_UNMOUNTABLE();
		static jstring ACTION_MEDIA_UNMOUNTED();
		static jstring ACTION_MY_PACKAGE_REPLACED();
		static jstring ACTION_MY_PACKAGE_SUSPENDED();
		static jstring ACTION_MY_PACKAGE_UNSUSPENDED();
		static jstring ACTION_NEW_OUTGOING_CALL();
		static jstring ACTION_OPEN_DOCUMENT();
		static jstring ACTION_OPEN_DOCUMENT_TREE();
		static jstring ACTION_PACKAGES_SUSPENDED();
		static jstring ACTION_PACKAGES_UNSUSPENDED();
		static jstring ACTION_PACKAGE_ADDED();
		static jstring ACTION_PACKAGE_CHANGED();
		static jstring ACTION_PACKAGE_DATA_CLEARED();
		static jstring ACTION_PACKAGE_FIRST_LAUNCH();
		static jstring ACTION_PACKAGE_FULLY_REMOVED();
		static jstring ACTION_PACKAGE_INSTALL();
		static jstring ACTION_PACKAGE_NEEDS_VERIFICATION();
		static jstring ACTION_PACKAGE_REMOVED();
		static jstring ACTION_PACKAGE_REPLACED();
		static jstring ACTION_PACKAGE_RESTARTED();
		static jstring ACTION_PACKAGE_VERIFIED();
		static jstring ACTION_PASTE();
		static jstring ACTION_PICK();
		static jstring ACTION_PICK_ACTIVITY();
		static jstring ACTION_POWER_CONNECTED();
		static jstring ACTION_POWER_DISCONNECTED();
		static jstring ACTION_POWER_USAGE_SUMMARY();
		static jstring ACTION_PROCESS_TEXT();
		static jstring ACTION_PROVIDER_CHANGED();
		static jstring ACTION_QUICK_CLOCK();
		static jstring ACTION_QUICK_VIEW();
		static jstring ACTION_REBOOT();
		static jstring ACTION_RUN();
		static jstring ACTION_SCREEN_OFF();
		static jstring ACTION_SCREEN_ON();
		static jstring ACTION_SEARCH();
		static jstring ACTION_SEARCH_LONG_PRESS();
		static jstring ACTION_SEND();
		static jstring ACTION_SENDTO();
		static jstring ACTION_SEND_MULTIPLE();
		static jstring ACTION_SET_WALLPAPER();
		static jstring ACTION_SHOW_APP_INFO();
		static jstring ACTION_SHUTDOWN();
		static jstring ACTION_SYNC();
		static jstring ACTION_SYSTEM_TUTORIAL();
		static jstring ACTION_TIMEZONE_CHANGED();
		static jstring ACTION_TIME_CHANGED();
		static jstring ACTION_TIME_TICK();
		static jstring ACTION_TRANSLATE();
		static jstring ACTION_UID_REMOVED();
		static jstring ACTION_UMS_CONNECTED();
		static jstring ACTION_UMS_DISCONNECTED();
		static jstring ACTION_UNINSTALL_PACKAGE();
		static jstring ACTION_USER_BACKGROUND();
		static jstring ACTION_USER_FOREGROUND();
		static jstring ACTION_USER_INITIALIZE();
		static jstring ACTION_USER_PRESENT();
		static jstring ACTION_USER_UNLOCKED();
		static jstring ACTION_VIEW();
		static jstring ACTION_VIEW_LOCUS();
		static jstring ACTION_VIEW_PERMISSION_USAGE();
		static jstring ACTION_VOICE_COMMAND();
		static jstring ACTION_WALLPAPER_CHANGED();
		static jstring ACTION_WEB_SEARCH();
		static jstring CATEGORY_ALTERNATIVE();
		static jstring CATEGORY_APP_BROWSER();
		static jstring CATEGORY_APP_CALCULATOR();
		static jstring CATEGORY_APP_CALENDAR();
		static jstring CATEGORY_APP_CONTACTS();
		static jstring CATEGORY_APP_EMAIL();
		static jstring CATEGORY_APP_FILES();
		static jstring CATEGORY_APP_GALLERY();
		static jstring CATEGORY_APP_MAPS();
		static jstring CATEGORY_APP_MARKET();
		static jstring CATEGORY_APP_MESSAGING();
		static jstring CATEGORY_APP_MUSIC();
		static jstring CATEGORY_BROWSABLE();
		static jstring CATEGORY_CAR_DOCK();
		static jstring CATEGORY_CAR_MODE();
		static jstring CATEGORY_DEFAULT();
		static jstring CATEGORY_DESK_DOCK();
		static jstring CATEGORY_DEVELOPMENT_PREFERENCE();
		static jstring CATEGORY_EMBED();
		static jstring CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST();
		static jstring CATEGORY_HE_DESK_DOCK();
		static jstring CATEGORY_HOME();
		static jstring CATEGORY_INFO();
		static jstring CATEGORY_LAUNCHER();
		static jstring CATEGORY_LEANBACK_LAUNCHER();
		static jstring CATEGORY_LE_DESK_DOCK();
		static jstring CATEGORY_MONKEY();
		static jstring CATEGORY_OPENABLE();
		static jstring CATEGORY_PREFERENCE();
		static jstring CATEGORY_SAMPLE_CODE();
		static jstring CATEGORY_SECONDARY_HOME();
		static jstring CATEGORY_SELECTED_ALTERNATIVE();
		static jstring CATEGORY_TAB();
		static jstring CATEGORY_TEST();
		static jstring CATEGORY_TYPED_OPENABLE();
		static jstring CATEGORY_UNIT_TEST();
		static jstring CATEGORY_VOICE();
		static jstring CATEGORY_VR_HOME();
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_ALARM_COUNT();
		static jstring EXTRA_ALLOW_MULTIPLE();
		static jstring EXTRA_ALLOW_REPLACE();
		static jstring EXTRA_ALTERNATE_INTENTS();
		static jstring EXTRA_ASSIST_CONTEXT();
		static jstring EXTRA_ASSIST_INPUT_DEVICE_ID();
		static jstring EXTRA_ASSIST_INPUT_HINT_KEYBOARD();
		static jstring EXTRA_ASSIST_PACKAGE();
		static jstring EXTRA_ASSIST_UID();
		static jstring EXTRA_AUTO_LAUNCH_SINGLE_CHOICE();
		static jstring EXTRA_BCC();
		static jstring EXTRA_BUG_REPORT();
		static jstring EXTRA_CC();
		static jstring EXTRA_CHANGED_COMPONENT_NAME();
		static jstring EXTRA_CHANGED_COMPONENT_NAME_LIST();
		static jstring EXTRA_CHANGED_PACKAGE_LIST();
		static jstring EXTRA_CHANGED_UID_LIST();
		static jstring EXTRA_CHOOSER_REFINEMENT_INTENT_SENDER();
		static jstring EXTRA_CHOOSER_TARGETS();
		static jstring EXTRA_CHOSEN_COMPONENT();
		static jstring EXTRA_CHOSEN_COMPONENT_INTENT_SENDER();
		static jstring EXTRA_COMPONENT_NAME();
		static jstring EXTRA_CONTENT_ANNOTATIONS();
		static jstring EXTRA_CONTENT_QUERY();
		static jstring EXTRA_DATA_REMOVED();
		static jstring EXTRA_DOCK_STATE();
		static jint EXTRA_DOCK_STATE_CAR();
		static jint EXTRA_DOCK_STATE_DESK();
		static jint EXTRA_DOCK_STATE_HE_DESK();
		static jint EXTRA_DOCK_STATE_LE_DESK();
		static jint EXTRA_DOCK_STATE_UNDOCKED();
		static jstring EXTRA_DONT_KILL_APP();
		static jstring EXTRA_DURATION_MILLIS();
		static jstring EXTRA_EMAIL();
		static jstring EXTRA_EXCLUDE_COMPONENTS();
		static jstring EXTRA_FROM_STORAGE();
		static jstring EXTRA_HTML_TEXT();
		static jstring EXTRA_INDEX();
		static jstring EXTRA_INITIAL_INTENTS();
		static jstring EXTRA_INSTALLER_PACKAGE_NAME();
		static jstring EXTRA_INTENT();
		static jstring EXTRA_KEY_EVENT();
		static jstring EXTRA_LOCAL_ONLY();
		static jstring EXTRA_LOCUS_ID();
		static jstring EXTRA_MIME_TYPES();
		static jstring EXTRA_NOT_UNKNOWN_SOURCE();
		static jstring EXTRA_ORIGINATING_URI();
		static jstring EXTRA_PACKAGE_NAME();
		static jstring EXTRA_PHONE_NUMBER();
		static jstring EXTRA_PROCESS_TEXT();
		static jstring EXTRA_PROCESS_TEXT_READONLY();
		static jstring EXTRA_QUICK_VIEW_FEATURES();
		static jstring EXTRA_QUIET_MODE();
		static jstring EXTRA_REFERRER();
		static jstring EXTRA_REFERRER_NAME();
		static jstring EXTRA_REMOTE_INTENT_TOKEN();
		static jstring EXTRA_REPLACEMENT_EXTRAS();
		static jstring EXTRA_REPLACING();
		static jstring EXTRA_RESTRICTIONS_BUNDLE();
		static jstring EXTRA_RESTRICTIONS_INTENT();
		static jstring EXTRA_RESTRICTIONS_LIST();
		static jstring EXTRA_RESULT_RECEIVER();
		static jstring EXTRA_RETURN_RESULT();
		static jstring EXTRA_SHORTCUT_ICON();
		static jstring EXTRA_SHORTCUT_ICON_RESOURCE();
		static jstring EXTRA_SHORTCUT_ID();
		static jstring EXTRA_SHORTCUT_INTENT();
		static jstring EXTRA_SHORTCUT_NAME();
		static jstring EXTRA_SHUTDOWN_USERSPACE_ONLY();
		static jstring EXTRA_SPLIT_NAME();
		static jstring EXTRA_STREAM();
		static jstring EXTRA_SUBJECT();
		static jstring EXTRA_SUSPENDED_PACKAGE_EXTRAS();
		static jstring EXTRA_TEMPLATE();
		static jstring EXTRA_TEXT();
		static jstring EXTRA_TITLE();
		static jstring EXTRA_UID();
		static jstring EXTRA_USER();
		static jint FILL_IN_ACTION();
		static jint FILL_IN_CATEGORIES();
		static jint FILL_IN_CLIP_DATA();
		static jint FILL_IN_COMPONENT();
		static jint FILL_IN_DATA();
		static jint FILL_IN_IDENTIFIER();
		static jint FILL_IN_PACKAGE();
		static jint FILL_IN_SELECTOR();
		static jint FILL_IN_SOURCE_BOUNDS();
		static jint FLAG_ACTIVITY_BROUGHT_TO_FRONT();
		static jint FLAG_ACTIVITY_CLEAR_TASK();
		static jint FLAG_ACTIVITY_CLEAR_TOP();
		static jint FLAG_ACTIVITY_CLEAR_WHEN_TASK_RESET();
		static jint FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS();
		static jint FLAG_ACTIVITY_FORWARD_RESULT();
		static jint FLAG_ACTIVITY_LAUNCHED_FROM_HISTORY();
		static jint FLAG_ACTIVITY_LAUNCH_ADJACENT();
		static jint FLAG_ACTIVITY_MATCH_EXTERNAL();
		static jint FLAG_ACTIVITY_MULTIPLE_TASK();
		static jint FLAG_ACTIVITY_NEW_DOCUMENT();
		static jint FLAG_ACTIVITY_NEW_TASK();
		static jint FLAG_ACTIVITY_NO_ANIMATION();
		static jint FLAG_ACTIVITY_NO_HISTORY();
		static jint FLAG_ACTIVITY_NO_USER_ACTION();
		static jint FLAG_ACTIVITY_PREVIOUS_IS_TOP();
		static jint FLAG_ACTIVITY_REORDER_TO_FRONT();
		static jint FLAG_ACTIVITY_RESET_TASK_IF_NEEDED();
		static jint FLAG_ACTIVITY_RETAIN_IN_RECENTS();
		static jint FLAG_ACTIVITY_SINGLE_TOP();
		static jint FLAG_ACTIVITY_TASK_ON_HOME();
		static jint FLAG_DEBUG_LOG_RESOLUTION();
		static jint FLAG_DIRECT_BOOT_AUTO();
		static jint FLAG_EXCLUDE_STOPPED_PACKAGES();
		static jint FLAG_FROM_BACKGROUND();
		static jint FLAG_GRANT_PERSISTABLE_URI_PERMISSION();
		static jint FLAG_GRANT_PREFIX_URI_PERMISSION();
		static jint FLAG_GRANT_READ_URI_PERMISSION();
		static jint FLAG_GRANT_WRITE_URI_PERMISSION();
		static jint FLAG_INCLUDE_STOPPED_PACKAGES();
		static jint FLAG_RECEIVER_FOREGROUND();
		static jint FLAG_RECEIVER_NO_ABORT();
		static jint FLAG_RECEIVER_REGISTERED_ONLY();
		static jint FLAG_RECEIVER_REPLACE_PENDING();
		static jint FLAG_RECEIVER_VISIBLE_TO_INSTANT_APPS();
		static jstring METADATA_DOCK_HOME();
		static jint URI_ALLOW_UNSAFE();
		static jint URI_ANDROID_APP_SCHEME();
		static jint URI_INTENT_SCHEME();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::content::Context arg2, jclass arg3);
		void __constructor(__jni_impl::android::content::Context arg0, jclass arg1);
		void __constructor(jstring arg0, __jni_impl::android::net::Uri arg1);
		void __constructor();
		void __constructor(__jni_impl::android::content::Intent arg0);
		void __constructor(jstring arg0);
		
		// Methods
		jstring toString();
		jobject clone();
		jstring getPackage();
		jstring getType();
		jstring getScheme();
		jstring toURI();
		jstring toUri(jint arg0);
		jint getFlags();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject getIntent(jstring arg0);
		static QAndroidJniObject createChooser(__jni_impl::android::content::Intent arg0, jstring arg1);
		static QAndroidJniObject createChooser(__jni_impl::android::content::Intent arg0, jstring arg1, __jni_impl::android::content::IntentSender arg2);
		QAndroidJniObject cloneFilter();
		static QAndroidJniObject makeMainActivity(__jni_impl::android::content::ComponentName arg0);
		static QAndroidJniObject makeMainSelectorActivity(jstring arg0, jstring arg1);
		static QAndroidJniObject makeRestartActivityTask(__jni_impl::android::content::ComponentName arg0);
		static QAndroidJniObject parseUri(jstring arg0, jint arg1);
		static QAndroidJniObject getIntentOld(jstring arg0);
		QAndroidJniObject getData();
		jstring getDataString();
		jstring resolveType(__jni_impl::android::content::Context arg0);
		jstring resolveType(__jni_impl::android::content::ContentResolver arg0);
		jstring resolveTypeIfNeeded(__jni_impl::android::content::ContentResolver arg0);
		jstring getIdentifier();
		QAndroidJniObject getCategories();
		QAndroidJniObject getSelector();
		QAndroidJniObject getClipData();
		void setExtrasClassLoader(__jni_impl::java::lang::ClassLoader arg0);
		jboolean hasExtra(jstring arg0);
		jboolean getBooleanExtra(jstring arg0, jboolean arg1);
		jbyte getByteExtra(jstring arg0, jbyte arg1);
		jshort getShortExtra(jstring arg0, jshort arg1);
		jchar getCharExtra(jstring arg0, jchar arg1);
		jint getIntExtra(jstring arg0, jint arg1);
		jlong getLongExtra(jstring arg0, jlong arg1);
		jfloat getFloatExtra(jstring arg0, jfloat arg1);
		jdouble getDoubleExtra(jstring arg0, jdouble arg1);
		jstring getStringExtra(jstring arg0);
		jstring getCharSequenceExtra(jstring arg0);
		QAndroidJniObject getParcelableExtra(jstring arg0);
		jarray getParcelableArrayExtra(jstring arg0);
		QAndroidJniObject getParcelableArrayListExtra(jstring arg0);
		QAndroidJniObject getSerializableExtra(jstring arg0);
		QAndroidJniObject getIntegerArrayListExtra(jstring arg0);
		QAndroidJniObject getStringArrayListExtra(jstring arg0);
		QAndroidJniObject getCharSequenceArrayListExtra(jstring arg0);
		jbooleanArray getBooleanArrayExtra(jstring arg0);
		jbyteArray getByteArrayExtra(jstring arg0);
		jshortArray getShortArrayExtra(jstring arg0);
		jcharArray getCharArrayExtra(jstring arg0);
		jintArray getIntArrayExtra(jstring arg0);
		jlongArray getLongArrayExtra(jstring arg0);
		jfloatArray getFloatArrayExtra(jstring arg0);
		jdoubleArray getDoubleArrayExtra(jstring arg0);
		jarray getStringArrayExtra(jstring arg0);
		jarray getCharSequenceArrayExtra(jstring arg0);
		QAndroidJniObject getBundleExtra(jstring arg0);
		QAndroidJniObject getExtras();
		QAndroidJniObject getComponent();
		QAndroidJniObject getSourceBounds();
		QAndroidJniObject resolveActivity(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject resolveActivityInfo(__jni_impl::android::content::pm::PackageManager arg0, jint arg1);
		QAndroidJniObject setAction(jstring arg0);
		QAndroidJniObject setData(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setDataAndNormalize(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setType(jstring arg0);
		QAndroidJniObject setTypeAndNormalize(jstring arg0);
		QAndroidJniObject setDataAndType(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject setDataAndTypeAndNormalize(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject setIdentifier(jstring arg0);
		void removeCategory(jstring arg0);
		void setSelector(__jni_impl::android::content::Intent arg0);
		void setClipData(__jni_impl::android::content::ClipData arg0);
		QAndroidJniObject putExtra(jstring arg0, jcharArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jbyteArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jintArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jshortArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jbooleanArray arg1);
		QAndroidJniObject putExtra(jstring arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject putExtra(jstring arg0, jlongArray arg1);
		QAndroidJniObject putExtra(jstring arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject putExtra(jstring arg0, jarray arg1);
		QAndroidJniObject putExtra(jstring arg0, jdoubleArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jfloatArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jlong arg1);
		QAndroidJniObject putExtra(jstring arg0, jfloat arg1);
		QAndroidJniObject putExtra(jstring arg0, jdouble arg1);
		QAndroidJniObject putExtra(jstring arg0, jstring arg1);
		QAndroidJniObject putExtra(jstring arg0, jboolean arg1);
		QAndroidJniObject putExtra(jstring arg0, jchar arg1);
		QAndroidJniObject putExtra(jstring arg0, jshort arg1);
		QAndroidJniObject putExtra(jstring arg0, jbyte arg1);
		QAndroidJniObject putExtra(jstring arg0, jint arg1);
		QAndroidJniObject putParcelableArrayListExtra(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		QAndroidJniObject putIntegerArrayListExtra(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		QAndroidJniObject putStringArrayListExtra(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		QAndroidJniObject putCharSequenceArrayListExtra(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		QAndroidJniObject putExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject putExtras(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject replaceExtras(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject replaceExtras(__jni_impl::android::os::Bundle arg0);
		void removeExtra(jstring arg0);
		QAndroidJniObject setFlags(jint arg0);
		QAndroidJniObject addFlags(jint arg0);
		void removeFlags(jint arg0);
		QAndroidJniObject setPackage(jstring arg0);
		QAndroidJniObject setComponent(__jni_impl::android::content::ComponentName arg0);
		QAndroidJniObject setClassName(jstring arg0, jstring arg1);
		QAndroidJniObject setClassName(__jni_impl::android::content::Context arg0, jstring arg1);
		QAndroidJniObject setClass(__jni_impl::android::content::Context arg0, jclass arg1);
		void setSourceBounds(__jni_impl::android::graphics::Rect arg0);
		jint fillIn(__jni_impl::android::content::Intent arg0, jint arg1);
		jboolean filterEquals(__jni_impl::android::content::Intent arg0);
		jint filterHashCode();
		static QAndroidJniObject parseIntent(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static jstring normalizeMimeType(jstring arg0);
		jstring getAction();
		QAndroidJniObject addCategory(jstring arg0);
		jboolean hasCategory(jstring arg0);
		jboolean hasFileDescriptors();
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
	};
} // namespace __jni_impl::android::content

#include "../net/Uri.hpp"
#include "Context.hpp"
#include "../os/Parcel.hpp"
#include "IntentSender.hpp"
#include "ComponentName.hpp"
#include "ContentResolver.hpp"
#include "ClipData.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../os/Bundle.hpp"
#include "../graphics/Rect.hpp"
#include "pm/PackageManager.hpp"
#include "pm/ActivityInfo.hpp"
#include "res/Resources.hpp"

namespace __jni_impl::android::content
{
	// Fields
	jstring Intent::ACTION_AIRPLANE_MODE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_AIRPLANE_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_ALL_APPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_ALL_APPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_ANSWER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_ANSWER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_APPLICATION_PREFERENCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_APPLICATION_PREFERENCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_APPLICATION_RESTRICTIONS_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_APPLICATION_RESTRICTIONS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_APP_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_APP_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_ASSIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_ASSIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_ATTACH_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_ATTACH_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BATTERY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BATTERY_LOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_LOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BATTERY_OKAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_BATTERY_OKAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BOOT_COMPLETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_BOOT_COMPLETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_BUG_REPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_BUG_REPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CALL_BUTTON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CALL_BUTTON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CAMERA_BUTTON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CAMERA_BUTTON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CARRIER_SETUP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CARRIER_SETUP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CHOOSER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CHOOSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CLOSE_SYSTEM_DIALOGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CLOSE_SYSTEM_DIALOGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CONFIGURATION_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CONFIGURATION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CREATE_DOCUMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CREATE_DOCUMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_CREATE_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_CREATE_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DEFINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEFINE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DELETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DELETE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DEVICE_STORAGE_LOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEVICE_STORAGE_LOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DEVICE_STORAGE_OK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DEVICE_STORAGE_OK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DOCK_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DOCK_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DREAMING_STARTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DREAMING_STARTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_DREAMING_STOPPED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_DREAMING_STOPPED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_EDIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_EDIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_EXTERNAL_APPLICATIONS_AVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_EXTERNAL_APPLICATIONS_AVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_FACTORY_TEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_FACTORY_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_GET_CONTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_GET_CONTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_GET_RESTRICTION_ENTRIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_GET_RESTRICTION_ENTRIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_GTALK_SERVICE_CONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_GTALK_SERVICE_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_GTALK_SERVICE_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_GTALK_SERVICE_DISCONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_HEADSET_PLUG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_HEADSET_PLUG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INPUT_METHOD_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_INPUT_METHOD_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INSERT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSERT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INSERT_OR_EDIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSERT_OR_EDIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INSTALL_FAILURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSTALL_FAILURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_INSTALL_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_INSTALL_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_LOCALE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_LOCALE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_LOCKED_BOOT_COMPLETED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_LOCKED_BOOT_COMPLETED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MAIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MAIN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_ADDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_ADDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_AVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_AVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_UNAVAILABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGED_PROFILE_UNLOCKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGED_PROFILE_UNLOCKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGE_NETWORK_USAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGE_NETWORK_USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MANAGE_PACKAGE_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MANAGE_PACKAGE_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_BAD_REMOVAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_BAD_REMOVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_BUTTON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_BUTTON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_CHECKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_CHECKING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_EJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_EJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_MOUNTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_MOUNTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_NOFS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_NOFS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_SCANNER_FINISHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_FINISHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_SCANNER_SCAN_FILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_SCAN_FILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_SCANNER_STARTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SCANNER_STARTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_SHARED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_SHARED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_UNMOUNTABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_UNMOUNTABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MEDIA_UNMOUNTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MEDIA_UNMOUNTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MY_PACKAGE_REPLACED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_REPLACED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MY_PACKAGE_SUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_SUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_MY_PACKAGE_UNSUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_MY_PACKAGE_UNSUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_NEW_OUTGOING_CALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_NEW_OUTGOING_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_OPEN_DOCUMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_OPEN_DOCUMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_OPEN_DOCUMENT_TREE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_OPEN_DOCUMENT_TREE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGES_SUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGES_SUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGES_UNSUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGES_UNSUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_ADDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_ADDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_DATA_CLEARED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_DATA_CLEARED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_FIRST_LAUNCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_FIRST_LAUNCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_FULLY_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_FULLY_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_INSTALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_INSTALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_NEEDS_VERIFICATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_NEEDS_VERIFICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_REPLACED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_REPLACED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_RESTARTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_RESTARTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PACKAGE_VERIFIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PACKAGE_VERIFIED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PASTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PASTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PICK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PICK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PICK_ACTIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PICK_ACTIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_POWER_CONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_POWER_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_DISCONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_POWER_USAGE_SUMMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_POWER_USAGE_SUMMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PROCESS_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PROCESS_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_PROVIDER_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_PROVIDER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_QUICK_CLOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_QUICK_CLOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_QUICK_VIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_QUICK_VIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_REBOOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_REBOOT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_RUN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_RUN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SCREEN_OFF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SCREEN_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SCREEN_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SEARCH_LONG_PRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEARCH_LONG_PRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SEND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SENDTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SENDTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SEND_MULTIPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SEND_MULTIPLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SET_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SET_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SHOW_APP_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SHOW_APP_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SHUTDOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SHUTDOWN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SYNC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SYNC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_SYSTEM_TUTORIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_SYSTEM_TUTORIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_TIMEZONE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIMEZONE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_TIME_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIME_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_TIME_TICK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_TIME_TICK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_TRANSLATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_TRANSLATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_UID_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_UID_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_UMS_CONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_UMS_CONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_UMS_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_UMS_DISCONNECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_UNINSTALL_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_UNINSTALL_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_BACKGROUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_FOREGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_FOREGROUND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_INITIALIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_INITIALIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_PRESENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_PRESENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_USER_UNLOCKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_USER_UNLOCKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_VIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_VIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_VIEW_LOCUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_VIEW_LOCUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_VIEW_PERMISSION_USAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_VIEW_PERMISSION_USAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_VOICE_COMMAND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_VOICE_COMMAND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_WALLPAPER_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_WALLPAPER_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::ACTION_WEB_SEARCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"ACTION_WEB_SEARCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_ALTERNATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_ALTERNATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_BROWSER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_BROWSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_CALCULATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CALCULATOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_CONTACTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_CONTACTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_FILES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_FILES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_GALLERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_GALLERY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_MAPS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MAPS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_MARKET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MARKET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_MESSAGING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MESSAGING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_APP_MUSIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_APP_MUSIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_BROWSABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_BROWSABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_CAR_DOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_CAR_DOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_CAR_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_CAR_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_DESK_DOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DESK_DOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_DEVELOPMENT_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_DEVELOPMENT_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_EMBED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_EMBED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_HE_DESK_DOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_HE_DESK_DOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_HOME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_LAUNCHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LAUNCHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_LEANBACK_LAUNCHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LEANBACK_LAUNCHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_LE_DESK_DOCK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_LE_DESK_DOCK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_MONKEY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_MONKEY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_OPENABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_OPENABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_PREFERENCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_PREFERENCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_SAMPLE_CODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_SAMPLE_CODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_SECONDARY_HOME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_SECONDARY_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_SELECTED_ALTERNATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_SELECTED_ALTERNATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_TAB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TAB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_TEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_TYPED_OPENABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_TYPED_OPENABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_UNIT_TEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_UNIT_TEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_VOICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_VOICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::CATEGORY_VR_HOME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CATEGORY_VR_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Intent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring Intent::EXTRA_ALARM_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALARM_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ALLOW_MULTIPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALLOW_MULTIPLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ALLOW_REPLACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALLOW_REPLACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ALTERNATE_INTENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ALTERNATE_INTENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_CONTEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_CONTEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_INPUT_DEVICE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_INPUT_DEVICE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_INPUT_HINT_KEYBOARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_INPUT_HINT_KEYBOARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ASSIST_UID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ASSIST_UID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_AUTO_LAUNCH_SINGLE_CHOICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_AUTO_LAUNCH_SINGLE_CHOICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_BCC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_BCC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_BUG_REPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_BUG_REPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHANGED_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHANGED_COMPONENT_NAME_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_COMPONENT_NAME_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHANGED_PACKAGE_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_PACKAGE_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHANGED_UID_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHANGED_UID_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHOOSER_REFINEMENT_INTENT_SENDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOOSER_REFINEMENT_INTENT_SENDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHOOSER_TARGETS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOOSER_TARGETS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHOSEN_COMPONENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOSEN_COMPONENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CHOSEN_COMPONENT_INTENT_SENDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CHOSEN_COMPONENT_INTENT_SENDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CONTENT_ANNOTATIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CONTENT_ANNOTATIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_CONTENT_QUERY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_CONTENT_QUERY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_DATA_REMOVED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DATA_REMOVED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_DOCK_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DOCK_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Intent::EXTRA_DOCK_STATE_CAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_CAR"
		);
	}
	jint Intent::EXTRA_DOCK_STATE_DESK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_DESK"
		);
	}
	jint Intent::EXTRA_DOCK_STATE_HE_DESK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_HE_DESK"
		);
	}
	jint Intent::EXTRA_DOCK_STATE_LE_DESK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_LE_DESK"
		);
	}
	jint Intent::EXTRA_DOCK_STATE_UNDOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"EXTRA_DOCK_STATE_UNDOCKED"
		);
	}
	jstring Intent::EXTRA_DONT_KILL_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DONT_KILL_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_DURATION_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_DURATION_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_EXCLUDE_COMPONENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_EXCLUDE_COMPONENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_FROM_STORAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_FROM_STORAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_HTML_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_HTML_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_INITIAL_INTENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INITIAL_INTENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_INSTALLER_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INSTALLER_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_KEY_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_KEY_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_LOCAL_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_LOCAL_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_LOCUS_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_LOCUS_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_MIME_TYPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_MIME_TYPES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_NOT_UNKNOWN_SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_NOT_UNKNOWN_SOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_ORIGINATING_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_ORIGINATING_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_PHONE_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PHONE_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_PROCESS_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PROCESS_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_PROCESS_TEXT_READONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_PROCESS_TEXT_READONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_QUICK_VIEW_FEATURES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_QUICK_VIEW_FEATURES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_QUIET_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_QUIET_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REFERRER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REFERRER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REFERRER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REFERRER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REMOTE_INTENT_TOKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REMOTE_INTENT_TOKEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REPLACEMENT_EXTRAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REPLACEMENT_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_REPLACING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_REPLACING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RESTRICTIONS_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_BUNDLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RESTRICTIONS_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RESTRICTIONS_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESTRICTIONS_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RESULT_RECEIVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RESULT_RECEIVER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_RETURN_RESULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_RETURN_RESULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_ICON_RESOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_ICON_RESOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_INTENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_INTENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHORTCUT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHORTCUT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SHUTDOWN_USERSPACE_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SHUTDOWN_USERSPACE_ONLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SPLIT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SPLIT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_STREAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_STREAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SUBJECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SUBJECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_SUSPENDED_PACKAGE_EXTRAS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_SUSPENDED_PACKAGE_EXTRAS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_TEMPLATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TEMPLATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_UID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_UID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::EXTRA_USER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"EXTRA_USER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Intent::FILL_IN_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_ACTION"
		);
	}
	jint Intent::FILL_IN_CATEGORIES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_CATEGORIES"
		);
	}
	jint Intent::FILL_IN_CLIP_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_CLIP_DATA"
		);
	}
	jint Intent::FILL_IN_COMPONENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_COMPONENT"
		);
	}
	jint Intent::FILL_IN_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_DATA"
		);
	}
	jint Intent::FILL_IN_IDENTIFIER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_IDENTIFIER"
		);
	}
	jint Intent::FILL_IN_PACKAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_PACKAGE"
		);
	}
	jint Intent::FILL_IN_SELECTOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_SELECTOR"
		);
	}
	jint Intent::FILL_IN_SOURCE_BOUNDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FILL_IN_SOURCE_BOUNDS"
		);
	}
	jint Intent::FLAG_ACTIVITY_BROUGHT_TO_FRONT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_BROUGHT_TO_FRONT"
		);
	}
	jint Intent::FLAG_ACTIVITY_CLEAR_TASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_CLEAR_TASK"
		);
	}
	jint Intent::FLAG_ACTIVITY_CLEAR_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_CLEAR_TOP"
		);
	}
	jint Intent::FLAG_ACTIVITY_CLEAR_WHEN_TASK_RESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_CLEAR_WHEN_TASK_RESET"
		);
	}
	jint Intent::FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS"
		);
	}
	jint Intent::FLAG_ACTIVITY_FORWARD_RESULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_FORWARD_RESULT"
		);
	}
	jint Intent::FLAG_ACTIVITY_LAUNCHED_FROM_HISTORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_LAUNCHED_FROM_HISTORY"
		);
	}
	jint Intent::FLAG_ACTIVITY_LAUNCH_ADJACENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_LAUNCH_ADJACENT"
		);
	}
	jint Intent::FLAG_ACTIVITY_MATCH_EXTERNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_MATCH_EXTERNAL"
		);
	}
	jint Intent::FLAG_ACTIVITY_MULTIPLE_TASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_MULTIPLE_TASK"
		);
	}
	jint Intent::FLAG_ACTIVITY_NEW_DOCUMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NEW_DOCUMENT"
		);
	}
	jint Intent::FLAG_ACTIVITY_NEW_TASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NEW_TASK"
		);
	}
	jint Intent::FLAG_ACTIVITY_NO_ANIMATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NO_ANIMATION"
		);
	}
	jint Intent::FLAG_ACTIVITY_NO_HISTORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NO_HISTORY"
		);
	}
	jint Intent::FLAG_ACTIVITY_NO_USER_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_NO_USER_ACTION"
		);
	}
	jint Intent::FLAG_ACTIVITY_PREVIOUS_IS_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_PREVIOUS_IS_TOP"
		);
	}
	jint Intent::FLAG_ACTIVITY_REORDER_TO_FRONT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_REORDER_TO_FRONT"
		);
	}
	jint Intent::FLAG_ACTIVITY_RESET_TASK_IF_NEEDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_RESET_TASK_IF_NEEDED"
		);
	}
	jint Intent::FLAG_ACTIVITY_RETAIN_IN_RECENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_RETAIN_IN_RECENTS"
		);
	}
	jint Intent::FLAG_ACTIVITY_SINGLE_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_SINGLE_TOP"
		);
	}
	jint Intent::FLAG_ACTIVITY_TASK_ON_HOME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_ACTIVITY_TASK_ON_HOME"
		);
	}
	jint Intent::FLAG_DEBUG_LOG_RESOLUTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_DEBUG_LOG_RESOLUTION"
		);
	}
	jint Intent::FLAG_DIRECT_BOOT_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_DIRECT_BOOT_AUTO"
		);
	}
	jint Intent::FLAG_EXCLUDE_STOPPED_PACKAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_EXCLUDE_STOPPED_PACKAGES"
		);
	}
	jint Intent::FLAG_FROM_BACKGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_FROM_BACKGROUND"
		);
	}
	jint Intent::FLAG_GRANT_PERSISTABLE_URI_PERMISSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_GRANT_PERSISTABLE_URI_PERMISSION"
		);
	}
	jint Intent::FLAG_GRANT_PREFIX_URI_PERMISSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_GRANT_PREFIX_URI_PERMISSION"
		);
	}
	jint Intent::FLAG_GRANT_READ_URI_PERMISSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_GRANT_READ_URI_PERMISSION"
		);
	}
	jint Intent::FLAG_GRANT_WRITE_URI_PERMISSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_GRANT_WRITE_URI_PERMISSION"
		);
	}
	jint Intent::FLAG_INCLUDE_STOPPED_PACKAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_INCLUDE_STOPPED_PACKAGES"
		);
	}
	jint Intent::FLAG_RECEIVER_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_FOREGROUND"
		);
	}
	jint Intent::FLAG_RECEIVER_NO_ABORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_NO_ABORT"
		);
	}
	jint Intent::FLAG_RECEIVER_REGISTERED_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_REGISTERED_ONLY"
		);
	}
	jint Intent::FLAG_RECEIVER_REPLACE_PENDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_REPLACE_PENDING"
		);
	}
	jint Intent::FLAG_RECEIVER_VISIBLE_TO_INSTANT_APPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"FLAG_RECEIVER_VISIBLE_TO_INSTANT_APPS"
		);
	}
	jstring Intent::METADATA_DOCK_HOME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent",
			"METADATA_DOCK_HOME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Intent::URI_ALLOW_UNSAFE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"URI_ALLOW_UNSAFE"
		);
	}
	jint Intent::URI_ANDROID_APP_SCHEME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"URI_ANDROID_APP_SCHEME"
		);
	}
	jint Intent::URI_INTENT_SCHEME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Intent",
			"URI_INTENT_SCHEME"
		);
	}
	
	// Constructors
	void Intent::__constructor(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::content::Context arg2, jclass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/content/Context;Ljava/lang/Class;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	void Intent::__constructor(__jni_impl::android::content::Context arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Intent::__constructor(jstring arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent",
			"(Ljava/lang/String;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void Intent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent",
			"()V");
	}
	void Intent::__constructor(__jni_impl::android::content::Intent arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object());
	}
	void Intent::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jstring Intent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject Intent::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring Intent::getPackage()
	{
		return __thiz.callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::getScheme()
	{
		return __thiz.callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::toURI()
	{
		return __thiz.callObjectMethod(
			"toURI",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::toUri(jint arg0)
	{
		return __thiz.callObjectMethod(
			"toUri",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint Intent::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint Intent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Intent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Intent::getIntent(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"getIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject Intent::createChooser(__jni_impl::android::content::Intent arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"createChooser",
			"(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Intent::createChooser(__jni_impl::android::content::Intent arg0, jstring arg1, __jni_impl::android::content::IntentSender arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"createChooser",
			"(Landroid/content/Intent;Ljava/lang/CharSequence;Landroid/content/IntentSender;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::cloneFilter()
	{
		return __thiz.callObjectMethod(
			"cloneFilter",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject Intent::makeMainActivity(__jni_impl::android::content::ComponentName arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"makeMainActivity",
			"(Landroid/content/ComponentName;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::makeMainSelectorActivity(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"makeMainSelectorActivity",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::makeRestartActivityTask(__jni_impl::android::content::ComponentName arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"makeRestartActivityTask",
			"(Landroid/content/ComponentName;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::parseUri(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"parseUri",
			"(Ljava/lang/String;I)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::getIntentOld(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"getIntentOld",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject Intent::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Landroid/net/Uri;"
		);
	}
	jstring Intent::getDataString()
	{
		return __thiz.callObjectMethod(
			"getDataString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Intent::resolveType(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"resolveType",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Intent::resolveType(__jni_impl::android::content::ContentResolver arg0)
	{
		return __thiz.callObjectMethod(
			"resolveType",
			"(Landroid/content/ContentResolver;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Intent::resolveTypeIfNeeded(__jni_impl::android::content::ContentResolver arg0)
	{
		return __thiz.callObjectMethod(
			"resolveTypeIfNeeded",
			"(Landroid/content/ContentResolver;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Intent::getIdentifier()
	{
		return __thiz.callObjectMethod(
			"getIdentifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Intent::getCategories()
	{
		return __thiz.callObjectMethod(
			"getCategories",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Intent::getSelector()
	{
		return __thiz.callObjectMethod(
			"getSelector",
			"()Landroid/content/Intent;"
		);
	}
	QAndroidJniObject Intent::getClipData()
	{
		return __thiz.callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	void Intent::setExtrasClassLoader(__jni_impl::java::lang::ClassLoader arg0)
	{
		__thiz.callMethod<void>(
			"setExtrasClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Intent::hasExtra(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasExtra",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Intent::getBooleanExtra(jstring arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getBooleanExtra",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jbyte Intent::getByteExtra(jstring arg0, jbyte arg1)
	{
		return __thiz.callMethod<jbyte>(
			"getByteExtra",
			"(Ljava/lang/String;B)B",
			arg0,
			arg1
		);
	}
	jshort Intent::getShortExtra(jstring arg0, jshort arg1)
	{
		return __thiz.callMethod<jshort>(
			"getShortExtra",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
		);
	}
	jchar Intent::getCharExtra(jstring arg0, jchar arg1)
	{
		return __thiz.callMethod<jchar>(
			"getCharExtra",
			"(Ljava/lang/String;C)C",
			arg0,
			arg1
		);
	}
	jint Intent::getIntExtra(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getIntExtra",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jlong Intent::getLongExtra(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLongExtra",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jfloat Intent::getFloatExtra(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloatExtra",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jdouble Intent::getDoubleExtra(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDoubleExtra",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jstring Intent::getStringExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringExtra",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Intent::getCharSequenceExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceExtra",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Intent::getParcelableExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableExtra",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			arg0
		);
	}
	jarray Intent::getParcelableArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArrayExtra",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Intent::getParcelableArrayListExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Intent::getSerializableExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSerializableExtra",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			arg0
		);
	}
	QAndroidJniObject Intent::getIntegerArrayListExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getIntegerArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Intent::getStringArrayListExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Intent::getCharSequenceArrayListExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArrayListExtra",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	jbooleanArray Intent::getBooleanArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBooleanArrayExtra",
			"(Ljava/lang/String;)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jbyteArray Intent::getByteArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getByteArrayExtra",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jshortArray Intent::getShortArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getShortArrayExtra",
			"(Ljava/lang/String;)[S",
			arg0
		).object<jshortArray>();
	}
	jcharArray Intent::getCharArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharArrayExtra",
			"(Ljava/lang/String;)[C",
			arg0
		).object<jcharArray>();
	}
	jintArray Intent::getIntArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getIntArrayExtra",
			"(Ljava/lang/String;)[I",
			arg0
		).object<jintArray>();
	}
	jlongArray Intent::getLongArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getLongArrayExtra",
			"(Ljava/lang/String;)[J",
			arg0
		).object<jlongArray>();
	}
	jfloatArray Intent::getFloatArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFloatArrayExtra",
			"(Ljava/lang/String;)[F",
			arg0
		).object<jfloatArray>();
	}
	jdoubleArray Intent::getDoubleArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDoubleArrayExtra",
			"(Ljava/lang/String;)[D",
			arg0
		).object<jdoubleArray>();
	}
	jarray Intent::getStringArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArrayExtra",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray Intent::getCharSequenceArrayExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArrayExtra",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Intent::getBundleExtra(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBundleExtra",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0
		);
	}
	QAndroidJniObject Intent::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Intent::getComponent()
	{
		return __thiz.callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject Intent::getSourceBounds()
	{
		return __thiz.callObjectMethod(
			"getSourceBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	QAndroidJniObject Intent::resolveActivity(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"resolveActivity",
			"(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::resolveActivityInfo(__jni_impl::android::content::pm::PackageManager arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resolveActivityInfo",
			"(Landroid/content/pm/PackageManager;I)Landroid/content/pm/ActivityInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Intent::setAction(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setAction",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject Intent::setData(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setData",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::setDataAndNormalize(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setDataAndNormalize",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::setType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setType",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject Intent::setTypeAndNormalize(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTypeAndNormalize",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject Intent::setDataAndType(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setDataAndType",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Intent::setDataAndTypeAndNormalize(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setDataAndTypeAndNormalize",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Intent::setIdentifier(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setIdentifier",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	void Intent::removeCategory(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeCategory",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Intent::setSelector(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setSelector",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Intent::setClipData(__jni_impl::android::content::ClipData arg0)
	{
		__thiz.callMethod<void>(
			"setClipData",
			"(Landroid/content/ClipData;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jcharArray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[C)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[B)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[I)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jshortArray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[S)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jbooleanArray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[Z)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jlongArray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[J)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[Ljava/lang/CharSequence;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jdoubleArray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[D)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jfloatArray arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;[F)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;J)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;F)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;D)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;Z)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jchar arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;C)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jshort arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;S)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;B)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putExtra(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"putExtra",
			"(Ljava/lang/String;I)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::putParcelableArrayListExtra(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"putParcelableArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::putIntegerArrayListExtra(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"putIntegerArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::putStringArrayListExtra(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"putStringArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::putCharSequenceArrayListExtra(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"putCharSequenceArrayListExtra",
			"(Ljava/lang/String;Ljava/util/ArrayList;)Landroid/content/Intent;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::putExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"putExtras",
			"(Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::putExtras(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"putExtras",
			"(Landroid/content/Intent;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::replaceExtras(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"replaceExtras",
			"(Landroid/content/Intent;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::replaceExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"replaceExtras",
			"(Landroid/os/Bundle;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	void Intent::removeExtra(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeExtra",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject Intent::setFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFlags",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject Intent::addFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"addFlags",
			"(I)Landroid/content/Intent;",
			arg0
		);
	}
	void Intent::removeFlags(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeFlags",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject Intent::setPackage(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPackage",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject Intent::setComponent(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callObjectMethod(
			"setComponent",
			"(Landroid/content/ComponentName;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Intent::setClassName(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setClassName",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Intent::setClassName(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"setClassName",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Intent::setClass(__jni_impl::android::content::Context arg0, jclass arg1)
	{
		return __thiz.callObjectMethod(
			"setClass",
			"(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Intent::setSourceBounds(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setSourceBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jint Intent::fillIn(__jni_impl::android::content::Intent arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"fillIn",
			"(Landroid/content/Intent;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Intent::filterEquals(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"filterEquals",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	jint Intent::filterHashCode()
	{
		return __thiz.callMethod<jint>(
			"filterHashCode",
			"()I"
		);
	}
	QAndroidJniObject Intent::parseIntent(__jni_impl::android::content::res::Resources arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"parseIntent",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring Intent::normalizeMimeType(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent",
			"normalizeMimeType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Intent::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Intent::addCategory(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addCategory",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	jboolean Intent::hasCategory(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasCategory",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Intent::hasFileDescriptors()
	{
		return __thiz.callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	void Intent::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class Intent : public __jni_impl::android::content::Intent
	{
	public:
		Intent(QAndroidJniObject obj) { __thiz = obj; }
		Intent(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::content::Context arg2, jclass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		Intent(__jni_impl::android::content::Context arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Intent(jstring arg0, __jni_impl::android::net::Uri arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Intent()
		{
			__constructor();
		}
		Intent(__jni_impl::android::content::Intent arg0)
		{
			__constructor(
				arg0);
		}
		Intent(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_INTENT

