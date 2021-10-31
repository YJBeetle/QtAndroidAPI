#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class IntentSender;
}
namespace android::content::pm
{
	class ActivityInfo;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::res
{
	class Resources;
}
namespace android::graphics
{
	class Rect;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class ClassLoader;
}
namespace java::util
{
	class ArrayList;
}

namespace android::content
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Intent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Intent(QAndroidJniObject obj);
		
		// Constructors
		Intent();
		Intent(android::content::Intent &arg0);
		Intent(jstring arg0);
		Intent(android::content::Context arg0, jclass arg1);
		Intent(jstring arg0, android::net::Uri arg1);
		Intent(jstring arg0, android::net::Uri arg1, android::content::Context arg2, jclass arg3);
		
		// Methods
		static QAndroidJniObject createChooser(android::content::Intent arg0, jstring arg1);
		static QAndroidJniObject createChooser(android::content::Intent arg0, jstring arg1, android::content::IntentSender arg2);
		static QAndroidJniObject getIntent(jstring arg0);
		static QAndroidJniObject getIntentOld(jstring arg0);
		static QAndroidJniObject makeMainActivity(android::content::ComponentName arg0);
		static QAndroidJniObject makeMainSelectorActivity(jstring arg0, jstring arg1);
		static QAndroidJniObject makeRestartActivityTask(android::content::ComponentName arg0);
		static jstring normalizeMimeType(jstring arg0);
		static QAndroidJniObject parseIntent(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static QAndroidJniObject parseUri(jstring arg0, jint arg1);
		QAndroidJniObject addCategory(jstring arg0);
		QAndroidJniObject addFlags(jint arg0);
		jobject clone();
		QAndroidJniObject cloneFilter();
		jint describeContents();
		jint fillIn(android::content::Intent arg0, jint arg1);
		jboolean filterEquals(android::content::Intent arg0);
		jint filterHashCode();
		jstring getAction();
		jbooleanArray getBooleanArrayExtra(jstring arg0);
		jboolean getBooleanExtra(jstring arg0, jboolean arg1);
		QAndroidJniObject getBundleExtra(jstring arg0);
		jbyteArray getByteArrayExtra(jstring arg0);
		jbyte getByteExtra(jstring arg0, jbyte arg1);
		QAndroidJniObject getCategories();
		jcharArray getCharArrayExtra(jstring arg0);
		jchar getCharExtra(jstring arg0, jchar arg1);
		jarray getCharSequenceArrayExtra(jstring arg0);
		QAndroidJniObject getCharSequenceArrayListExtra(jstring arg0);
		jstring getCharSequenceExtra(jstring arg0);
		QAndroidJniObject getClipData();
		QAndroidJniObject getComponent();
		QAndroidJniObject getData();
		jstring getDataString();
		jdoubleArray getDoubleArrayExtra(jstring arg0);
		jdouble getDoubleExtra(jstring arg0, jdouble arg1);
		QAndroidJniObject getExtras();
		jint getFlags();
		jfloatArray getFloatArrayExtra(jstring arg0);
		jfloat getFloatExtra(jstring arg0, jfloat arg1);
		jstring getIdentifier();
		jintArray getIntArrayExtra(jstring arg0);
		jint getIntExtra(jstring arg0, jint arg1);
		QAndroidJniObject getIntegerArrayListExtra(jstring arg0);
		jlongArray getLongArrayExtra(jstring arg0);
		jlong getLongExtra(jstring arg0, jlong arg1);
		jstring getPackage();
		jarray getParcelableArrayExtra(jstring arg0);
		QAndroidJniObject getParcelableArrayListExtra(jstring arg0);
		QAndroidJniObject getParcelableExtra(jstring arg0);
		jstring getScheme();
		QAndroidJniObject getSelector();
		QAndroidJniObject getSerializableExtra(jstring arg0);
		jshortArray getShortArrayExtra(jstring arg0);
		jshort getShortExtra(jstring arg0, jshort arg1);
		QAndroidJniObject getSourceBounds();
		jarray getStringArrayExtra(jstring arg0);
		QAndroidJniObject getStringArrayListExtra(jstring arg0);
		jstring getStringExtra(jstring arg0);
		jstring getType();
		jboolean hasCategory(jstring arg0);
		jboolean hasExtra(jstring arg0);
		jboolean hasFileDescriptors();
		QAndroidJniObject putCharSequenceArrayListExtra(jstring arg0, java::util::ArrayList arg1);
		QAndroidJniObject putExtra(jstring arg0, jbyteArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jcharArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jdoubleArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jfloatArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jintArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jlongArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jarray arg1);
		QAndroidJniObject putExtra(jstring arg0, jshortArray arg1);
		QAndroidJniObject putExtra(jstring arg0, jbooleanArray arg1);
		QAndroidJniObject putExtra(jstring arg0, android::os::Bundle arg1);
		QAndroidJniObject putExtra(jstring arg0, __JniBaseClass arg1);
		QAndroidJniObject putExtra(jstring arg0, jboolean arg1);
		QAndroidJniObject putExtra(jstring arg0, jbyte arg1);
		QAndroidJniObject putExtra(jstring arg0, jchar arg1);
		QAndroidJniObject putExtra(jstring arg0, jdouble arg1);
		QAndroidJniObject putExtra(jstring arg0, jfloat arg1);
		QAndroidJniObject putExtra(jstring arg0, jint arg1);
		QAndroidJniObject putExtra(jstring arg0, jstring arg1);
		QAndroidJniObject putExtra(jstring arg0, jlong arg1);
		QAndroidJniObject putExtra(jstring arg0, jshort arg1);
		QAndroidJniObject putExtras(android::content::Intent arg0);
		QAndroidJniObject putExtras(android::os::Bundle arg0);
		QAndroidJniObject putIntegerArrayListExtra(jstring arg0, java::util::ArrayList arg1);
		QAndroidJniObject putParcelableArrayListExtra(jstring arg0, java::util::ArrayList arg1);
		QAndroidJniObject putStringArrayListExtra(jstring arg0, java::util::ArrayList arg1);
		void readFromParcel(android::os::Parcel arg0);
		void removeCategory(jstring arg0);
		void removeExtra(jstring arg0);
		void removeFlags(jint arg0);
		QAndroidJniObject replaceExtras(android::content::Intent arg0);
		QAndroidJniObject replaceExtras(android::os::Bundle arg0);
		QAndroidJniObject resolveActivity(android::content::pm::PackageManager arg0);
		QAndroidJniObject resolveActivityInfo(android::content::pm::PackageManager arg0, jint arg1);
		jstring resolveType(android::content::ContentResolver arg0);
		jstring resolveType(android::content::Context arg0);
		jstring resolveTypeIfNeeded(android::content::ContentResolver arg0);
		QAndroidJniObject setAction(jstring arg0);
		QAndroidJniObject setClass(android::content::Context arg0, jclass arg1);
		QAndroidJniObject setClassName(android::content::Context arg0, jstring arg1);
		QAndroidJniObject setClassName(jstring arg0, jstring arg1);
		void setClipData(android::content::ClipData arg0);
		QAndroidJniObject setComponent(android::content::ComponentName arg0);
		QAndroidJniObject setData(android::net::Uri arg0);
		QAndroidJniObject setDataAndNormalize(android::net::Uri arg0);
		QAndroidJniObject setDataAndType(android::net::Uri arg0, jstring arg1);
		QAndroidJniObject setDataAndTypeAndNormalize(android::net::Uri arg0, jstring arg1);
		void setExtrasClassLoader(java::lang::ClassLoader arg0);
		QAndroidJniObject setFlags(jint arg0);
		QAndroidJniObject setIdentifier(jstring arg0);
		QAndroidJniObject setPackage(jstring arg0);
		void setSelector(android::content::Intent arg0);
		void setSourceBounds(android::graphics::Rect arg0);
		QAndroidJniObject setType(jstring arg0);
		QAndroidJniObject setTypeAndNormalize(jstring arg0);
		jstring toString();
		jstring toURI();
		jstring toUri(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

