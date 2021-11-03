#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
class JDoubleArray;
class JFloatArray;
class JIntArray;
class JLongArray;
class JArray;
class JArray;
class JArray;
class JShortArray;
class JBooleanArray;
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
class JString;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::content
{
	class Intent : public JObject
	{
	public:
		// Fields
		static JString ACTION_AIRPLANE_MODE_CHANGED();
		static JString ACTION_ALL_APPS();
		static JString ACTION_ANSWER();
		static JString ACTION_APPLICATION_PREFERENCES();
		static JString ACTION_APPLICATION_RESTRICTIONS_CHANGED();
		static JString ACTION_APP_ERROR();
		static JString ACTION_ASSIST();
		static JString ACTION_ATTACH_DATA();
		static JString ACTION_AUTO_REVOKE_PERMISSIONS();
		static JString ACTION_BATTERY_CHANGED();
		static JString ACTION_BATTERY_LOW();
		static JString ACTION_BATTERY_OKAY();
		static JString ACTION_BOOT_COMPLETED();
		static JString ACTION_BUG_REPORT();
		static JString ACTION_CALL();
		static JString ACTION_CALL_BUTTON();
		static JString ACTION_CAMERA_BUTTON();
		static JString ACTION_CARRIER_SETUP();
		static JString ACTION_CHOOSER();
		static JString ACTION_CLOSE_SYSTEM_DIALOGS();
		static JString ACTION_CONFIGURATION_CHANGED();
		static JString ACTION_CREATE_DOCUMENT();
		static JString ACTION_CREATE_REMINDER();
		static JString ACTION_CREATE_SHORTCUT();
		static JString ACTION_DATE_CHANGED();
		static JString ACTION_DEFAULT();
		static JString ACTION_DEFINE();
		static JString ACTION_DELETE();
		static JString ACTION_DEVICE_STORAGE_LOW();
		static JString ACTION_DEVICE_STORAGE_OK();
		static JString ACTION_DIAL();
		static JString ACTION_DOCK_EVENT();
		static JString ACTION_DREAMING_STARTED();
		static JString ACTION_DREAMING_STOPPED();
		static JString ACTION_EDIT();
		static JString ACTION_EXTERNAL_APPLICATIONS_AVAILABLE();
		static JString ACTION_EXTERNAL_APPLICATIONS_UNAVAILABLE();
		static JString ACTION_FACTORY_TEST();
		static JString ACTION_GET_CONTENT();
		static JString ACTION_GET_RESTRICTION_ENTRIES();
		static JString ACTION_GTALK_SERVICE_CONNECTED();
		static JString ACTION_GTALK_SERVICE_DISCONNECTED();
		static JString ACTION_HEADSET_PLUG();
		static JString ACTION_INPUT_METHOD_CHANGED();
		static JString ACTION_INSERT();
		static JString ACTION_INSERT_OR_EDIT();
		static JString ACTION_INSTALL_FAILURE();
		static JString ACTION_INSTALL_PACKAGE();
		static JString ACTION_LOCALE_CHANGED();
		static JString ACTION_LOCKED_BOOT_COMPLETED();
		static JString ACTION_MAIN();
		static JString ACTION_MANAGED_PROFILE_ADDED();
		static JString ACTION_MANAGED_PROFILE_AVAILABLE();
		static JString ACTION_MANAGED_PROFILE_REMOVED();
		static JString ACTION_MANAGED_PROFILE_UNAVAILABLE();
		static JString ACTION_MANAGED_PROFILE_UNLOCKED();
		static JString ACTION_MANAGE_NETWORK_USAGE();
		static JString ACTION_MANAGE_PACKAGE_STORAGE();
		static JString ACTION_MEDIA_BAD_REMOVAL();
		static JString ACTION_MEDIA_BUTTON();
		static JString ACTION_MEDIA_CHECKING();
		static JString ACTION_MEDIA_EJECT();
		static JString ACTION_MEDIA_MOUNTED();
		static JString ACTION_MEDIA_NOFS();
		static JString ACTION_MEDIA_REMOVED();
		static JString ACTION_MEDIA_SCANNER_FINISHED();
		static JString ACTION_MEDIA_SCANNER_SCAN_FILE();
		static JString ACTION_MEDIA_SCANNER_STARTED();
		static JString ACTION_MEDIA_SHARED();
		static JString ACTION_MEDIA_UNMOUNTABLE();
		static JString ACTION_MEDIA_UNMOUNTED();
		static JString ACTION_MY_PACKAGE_REPLACED();
		static JString ACTION_MY_PACKAGE_SUSPENDED();
		static JString ACTION_MY_PACKAGE_UNSUSPENDED();
		static JString ACTION_NEW_OUTGOING_CALL();
		static JString ACTION_OPEN_DOCUMENT();
		static JString ACTION_OPEN_DOCUMENT_TREE();
		static JString ACTION_PACKAGES_SUSPENDED();
		static JString ACTION_PACKAGES_UNSUSPENDED();
		static JString ACTION_PACKAGE_ADDED();
		static JString ACTION_PACKAGE_CHANGED();
		static JString ACTION_PACKAGE_DATA_CLEARED();
		static JString ACTION_PACKAGE_FIRST_LAUNCH();
		static JString ACTION_PACKAGE_FULLY_REMOVED();
		static JString ACTION_PACKAGE_INSTALL();
		static JString ACTION_PACKAGE_NEEDS_VERIFICATION();
		static JString ACTION_PACKAGE_REMOVED();
		static JString ACTION_PACKAGE_REPLACED();
		static JString ACTION_PACKAGE_RESTARTED();
		static JString ACTION_PACKAGE_VERIFIED();
		static JString ACTION_PASTE();
		static JString ACTION_PICK();
		static JString ACTION_PICK_ACTIVITY();
		static JString ACTION_POWER_CONNECTED();
		static JString ACTION_POWER_DISCONNECTED();
		static JString ACTION_POWER_USAGE_SUMMARY();
		static JString ACTION_PROCESS_TEXT();
		static JString ACTION_PROVIDER_CHANGED();
		static JString ACTION_QUICK_CLOCK();
		static JString ACTION_QUICK_VIEW();
		static JString ACTION_REBOOT();
		static JString ACTION_RUN();
		static JString ACTION_SCREEN_OFF();
		static JString ACTION_SCREEN_ON();
		static JString ACTION_SEARCH();
		static JString ACTION_SEARCH_LONG_PRESS();
		static JString ACTION_SEND();
		static JString ACTION_SENDTO();
		static JString ACTION_SEND_MULTIPLE();
		static JString ACTION_SET_WALLPAPER();
		static JString ACTION_SHOW_APP_INFO();
		static JString ACTION_SHUTDOWN();
		static JString ACTION_SYNC();
		static JString ACTION_SYSTEM_TUTORIAL();
		static JString ACTION_TIMEZONE_CHANGED();
		static JString ACTION_TIME_CHANGED();
		static JString ACTION_TIME_TICK();
		static JString ACTION_TRANSLATE();
		static JString ACTION_UID_REMOVED();
		static JString ACTION_UMS_CONNECTED();
		static JString ACTION_UMS_DISCONNECTED();
		static JString ACTION_UNINSTALL_PACKAGE();
		static JString ACTION_USER_BACKGROUND();
		static JString ACTION_USER_FOREGROUND();
		static JString ACTION_USER_INITIALIZE();
		static JString ACTION_USER_PRESENT();
		static JString ACTION_USER_UNLOCKED();
		static JString ACTION_VIEW();
		static JString ACTION_VIEW_LOCUS();
		static JString ACTION_VIEW_PERMISSION_USAGE();
		static JString ACTION_VOICE_COMMAND();
		static JString ACTION_WALLPAPER_CHANGED();
		static JString ACTION_WEB_SEARCH();
		static JString CATEGORY_ACCESSIBILITY_SHORTCUT_TARGET();
		static JString CATEGORY_ALTERNATIVE();
		static JString CATEGORY_APP_BROWSER();
		static JString CATEGORY_APP_CALCULATOR();
		static JString CATEGORY_APP_CALENDAR();
		static JString CATEGORY_APP_CONTACTS();
		static JString CATEGORY_APP_EMAIL();
		static JString CATEGORY_APP_FILES();
		static JString CATEGORY_APP_GALLERY();
		static JString CATEGORY_APP_MAPS();
		static JString CATEGORY_APP_MARKET();
		static JString CATEGORY_APP_MESSAGING();
		static JString CATEGORY_APP_MUSIC();
		static JString CATEGORY_BROWSABLE();
		static JString CATEGORY_CAR_DOCK();
		static JString CATEGORY_CAR_MODE();
		static JString CATEGORY_DEFAULT();
		static JString CATEGORY_DESK_DOCK();
		static JString CATEGORY_DEVELOPMENT_PREFERENCE();
		static JString CATEGORY_EMBED();
		static JString CATEGORY_FRAMEWORK_INSTRUMENTATION_TEST();
		static JString CATEGORY_HE_DESK_DOCK();
		static JString CATEGORY_HOME();
		static JString CATEGORY_INFO();
		static JString CATEGORY_LAUNCHER();
		static JString CATEGORY_LEANBACK_LAUNCHER();
		static JString CATEGORY_LE_DESK_DOCK();
		static JString CATEGORY_MONKEY();
		static JString CATEGORY_OPENABLE();
		static JString CATEGORY_PREFERENCE();
		static JString CATEGORY_SAMPLE_CODE();
		static JString CATEGORY_SECONDARY_HOME();
		static JString CATEGORY_SELECTED_ALTERNATIVE();
		static JString CATEGORY_TAB();
		static JString CATEGORY_TEST();
		static JString CATEGORY_TYPED_OPENABLE();
		static JString CATEGORY_UNIT_TEST();
		static JString CATEGORY_VOICE();
		static JString CATEGORY_VR_HOME();
		static JObject CREATOR();
		static JString EXTRA_ALARM_COUNT();
		static JString EXTRA_ALLOW_MULTIPLE();
		static JString EXTRA_ALLOW_REPLACE();
		static JString EXTRA_ALTERNATE_INTENTS();
		static JString EXTRA_ASSIST_CONTEXT();
		static JString EXTRA_ASSIST_INPUT_DEVICE_ID();
		static JString EXTRA_ASSIST_INPUT_HINT_KEYBOARD();
		static JString EXTRA_ASSIST_PACKAGE();
		static JString EXTRA_ASSIST_UID();
		static JString EXTRA_AUTO_LAUNCH_SINGLE_CHOICE();
		static JString EXTRA_BCC();
		static JString EXTRA_BUG_REPORT();
		static JString EXTRA_CC();
		static JString EXTRA_CHANGED_COMPONENT_NAME();
		static JString EXTRA_CHANGED_COMPONENT_NAME_LIST();
		static JString EXTRA_CHANGED_PACKAGE_LIST();
		static JString EXTRA_CHANGED_UID_LIST();
		static JString EXTRA_CHOOSER_REFINEMENT_INTENT_SENDER();
		static JString EXTRA_CHOOSER_TARGETS();
		static JString EXTRA_CHOSEN_COMPONENT();
		static JString EXTRA_CHOSEN_COMPONENT_INTENT_SENDER();
		static JString EXTRA_COMPONENT_NAME();
		static JString EXTRA_CONTENT_ANNOTATIONS();
		static JString EXTRA_CONTENT_QUERY();
		static JString EXTRA_DATA_REMOVED();
		static JString EXTRA_DOCK_STATE();
		static jint EXTRA_DOCK_STATE_CAR();
		static jint EXTRA_DOCK_STATE_DESK();
		static jint EXTRA_DOCK_STATE_HE_DESK();
		static jint EXTRA_DOCK_STATE_LE_DESK();
		static jint EXTRA_DOCK_STATE_UNDOCKED();
		static JString EXTRA_DONT_KILL_APP();
		static JString EXTRA_DURATION_MILLIS();
		static JString EXTRA_EMAIL();
		static JString EXTRA_EXCLUDE_COMPONENTS();
		static JString EXTRA_FROM_STORAGE();
		static JString EXTRA_HTML_TEXT();
		static JString EXTRA_INDEX();
		static JString EXTRA_INITIAL_INTENTS();
		static JString EXTRA_INSTALLER_PACKAGE_NAME();
		static JString EXTRA_INTENT();
		static JString EXTRA_KEY_EVENT();
		static JString EXTRA_LOCAL_ONLY();
		static JString EXTRA_LOCUS_ID();
		static JString EXTRA_MIME_TYPES();
		static JString EXTRA_NOT_UNKNOWN_SOURCE();
		static JString EXTRA_ORIGINATING_URI();
		static JString EXTRA_PACKAGE_NAME();
		static JString EXTRA_PHONE_NUMBER();
		static JString EXTRA_PROCESS_TEXT();
		static JString EXTRA_PROCESS_TEXT_READONLY();
		static JString EXTRA_QUICK_VIEW_FEATURES();
		static JString EXTRA_QUIET_MODE();
		static JString EXTRA_REFERRER();
		static JString EXTRA_REFERRER_NAME();
		static JString EXTRA_REMOTE_INTENT_TOKEN();
		static JString EXTRA_REPLACEMENT_EXTRAS();
		static JString EXTRA_REPLACING();
		static JString EXTRA_RESTRICTIONS_BUNDLE();
		static JString EXTRA_RESTRICTIONS_INTENT();
		static JString EXTRA_RESTRICTIONS_LIST();
		static JString EXTRA_RESULT_RECEIVER();
		static JString EXTRA_RETURN_RESULT();
		static JString EXTRA_SHORTCUT_ICON();
		static JString EXTRA_SHORTCUT_ICON_RESOURCE();
		static JString EXTRA_SHORTCUT_ID();
		static JString EXTRA_SHORTCUT_INTENT();
		static JString EXTRA_SHORTCUT_NAME();
		static JString EXTRA_SHUTDOWN_USERSPACE_ONLY();
		static JString EXTRA_SPLIT_NAME();
		static JString EXTRA_STREAM();
		static JString EXTRA_SUBJECT();
		static JString EXTRA_SUSPENDED_PACKAGE_EXTRAS();
		static JString EXTRA_TEMPLATE();
		static JString EXTRA_TEXT();
		static JString EXTRA_TIME();
		static JString EXTRA_TIMEZONE();
		static JString EXTRA_TITLE();
		static JString EXTRA_UID();
		static JString EXTRA_USER();
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
		static jint FLAG_ACTIVITY_REQUIRE_DEFAULT();
		static jint FLAG_ACTIVITY_REQUIRE_NON_BROWSER();
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
		static JString METADATA_DOCK_HOME();
		static jint URI_ALLOW_UNSAFE();
		static jint URI_ANDROID_APP_SCHEME();
		static jint URI_INTENT_SCHEME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Intent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Intent(QAndroidJniObject obj);
		
		// Constructors
		Intent();
		Intent(android::content::Intent &arg0);
		Intent(JString arg0);
		Intent(android::content::Context arg0, JClass arg1);
		Intent(JString arg0, android::net::Uri arg1);
		Intent(JString arg0, android::net::Uri arg1, android::content::Context arg2, JClass arg3);
		
		// Methods
		static android::content::Intent createChooser(android::content::Intent arg0, JString arg1);
		static android::content::Intent createChooser(android::content::Intent arg0, JString arg1, android::content::IntentSender arg2);
		static android::content::Intent getIntent(JString arg0);
		static android::content::Intent getIntentOld(JString arg0);
		static android::content::Intent makeMainActivity(android::content::ComponentName arg0);
		static android::content::Intent makeMainSelectorActivity(JString arg0, JString arg1);
		static android::content::Intent makeRestartActivityTask(android::content::ComponentName arg0);
		static JString normalizeMimeType(JString arg0);
		static android::content::Intent parseIntent(android::content::res::Resources arg0, JObject arg1, JObject arg2);
		static android::content::Intent parseUri(JString arg0, jint arg1);
		android::content::Intent addCategory(JString arg0) const;
		android::content::Intent addFlags(jint arg0) const;
		JObject clone() const;
		android::content::Intent cloneFilter() const;
		jint describeContents() const;
		jint fillIn(android::content::Intent arg0, jint arg1) const;
		jboolean filterEquals(android::content::Intent arg0) const;
		jint filterHashCode() const;
		JString getAction() const;
		JBooleanArray getBooleanArrayExtra(JString arg0) const;
		jboolean getBooleanExtra(JString arg0, jboolean arg1) const;
		android::os::Bundle getBundleExtra(JString arg0) const;
		JByteArray getByteArrayExtra(JString arg0) const;
		jbyte getByteExtra(JString arg0, jbyte arg1) const;
		JObject getCategories() const;
		JCharArray getCharArrayExtra(JString arg0) const;
		jchar getCharExtra(JString arg0, jchar arg1) const;
		JArray getCharSequenceArrayExtra(JString arg0) const;
		java::util::ArrayList getCharSequenceArrayListExtra(JString arg0) const;
		JString getCharSequenceExtra(JString arg0) const;
		android::content::ClipData getClipData() const;
		android::content::ComponentName getComponent() const;
		android::net::Uri getData() const;
		JString getDataString() const;
		JDoubleArray getDoubleArrayExtra(JString arg0) const;
		jdouble getDoubleExtra(JString arg0, jdouble arg1) const;
		android::os::Bundle getExtras() const;
		jint getFlags() const;
		JFloatArray getFloatArrayExtra(JString arg0) const;
		jfloat getFloatExtra(JString arg0, jfloat arg1) const;
		JString getIdentifier() const;
		JIntArray getIntArrayExtra(JString arg0) const;
		jint getIntExtra(JString arg0, jint arg1) const;
		java::util::ArrayList getIntegerArrayListExtra(JString arg0) const;
		JLongArray getLongArrayExtra(JString arg0) const;
		jlong getLongExtra(JString arg0, jlong arg1) const;
		JString getPackage() const;
		JArray getParcelableArrayExtra(JString arg0) const;
		java::util::ArrayList getParcelableArrayListExtra(JString arg0) const;
		JObject getParcelableExtra(JString arg0) const;
		JString getScheme() const;
		android::content::Intent getSelector() const;
		JObject getSerializableExtra(JString arg0) const;
		JShortArray getShortArrayExtra(JString arg0) const;
		jshort getShortExtra(JString arg0, jshort arg1) const;
		android::graphics::Rect getSourceBounds() const;
		JArray getStringArrayExtra(JString arg0) const;
		java::util::ArrayList getStringArrayListExtra(JString arg0) const;
		JString getStringExtra(JString arg0) const;
		JString getType() const;
		jboolean hasCategory(JString arg0) const;
		jboolean hasExtra(JString arg0) const;
		jboolean hasFileDescriptors() const;
		android::content::Intent putCharSequenceArrayListExtra(JString arg0, java::util::ArrayList arg1) const;
		android::content::Intent putExtra(JString arg0, JByteArray arg1) const;
		android::content::Intent putExtra(JString arg0, JCharArray arg1) const;
		android::content::Intent putExtra(JString arg0, JDoubleArray arg1) const;
		android::content::Intent putExtra(JString arg0, JFloatArray arg1) const;
		android::content::Intent putExtra(JString arg0, JIntArray arg1) const;
		android::content::Intent putExtra(JString arg0, JLongArray arg1) const;
		android::content::Intent putExtra(JString arg0, JArray arg1) const;
		android::content::Intent putExtra(JString arg0, JShortArray arg1) const;
		android::content::Intent putExtra(JString arg0, JBooleanArray arg1) const;
		android::content::Intent putExtra(JString arg0, android::os::Bundle arg1) const;
		android::content::Intent putExtra(JString arg0, JObject arg1) const;
		android::content::Intent putExtra(JString arg0, jboolean arg1) const;
		android::content::Intent putExtra(JString arg0, jbyte arg1) const;
		android::content::Intent putExtra(JString arg0, jchar arg1) const;
		android::content::Intent putExtra(JString arg0, jdouble arg1) const;
		android::content::Intent putExtra(JString arg0, jfloat arg1) const;
		android::content::Intent putExtra(JString arg0, jint arg1) const;
		android::content::Intent putExtra(JString arg0, JString arg1) const;
		android::content::Intent putExtra(JString arg0, jlong arg1) const;
		android::content::Intent putExtra(JString arg0, jshort arg1) const;
		android::content::Intent putExtras(android::content::Intent arg0) const;
		android::content::Intent putExtras(android::os::Bundle arg0) const;
		android::content::Intent putIntegerArrayListExtra(JString arg0, java::util::ArrayList arg1) const;
		android::content::Intent putParcelableArrayListExtra(JString arg0, java::util::ArrayList arg1) const;
		android::content::Intent putStringArrayListExtra(JString arg0, java::util::ArrayList arg1) const;
		void readFromParcel(android::os::Parcel arg0) const;
		void removeCategory(JString arg0) const;
		void removeExtra(JString arg0) const;
		void removeFlags(jint arg0) const;
		android::content::Intent replaceExtras(android::content::Intent arg0) const;
		android::content::Intent replaceExtras(android::os::Bundle arg0) const;
		android::content::ComponentName resolveActivity(android::content::pm::PackageManager arg0) const;
		android::content::pm::ActivityInfo resolveActivityInfo(android::content::pm::PackageManager arg0, jint arg1) const;
		JString resolveType(android::content::ContentResolver arg0) const;
		JString resolveType(android::content::Context arg0) const;
		JString resolveTypeIfNeeded(android::content::ContentResolver arg0) const;
		android::content::Intent setAction(JString arg0) const;
		android::content::Intent setClass(android::content::Context arg0, JClass arg1) const;
		android::content::Intent setClassName(android::content::Context arg0, JString arg1) const;
		android::content::Intent setClassName(JString arg0, JString arg1) const;
		void setClipData(android::content::ClipData arg0) const;
		android::content::Intent setComponent(android::content::ComponentName arg0) const;
		android::content::Intent setData(android::net::Uri arg0) const;
		android::content::Intent setDataAndNormalize(android::net::Uri arg0) const;
		android::content::Intent setDataAndType(android::net::Uri arg0, JString arg1) const;
		android::content::Intent setDataAndTypeAndNormalize(android::net::Uri arg0, JString arg1) const;
		void setExtrasClassLoader(java::lang::ClassLoader arg0) const;
		android::content::Intent setFlags(jint arg0) const;
		android::content::Intent setIdentifier(JString arg0) const;
		android::content::Intent setPackage(JString arg0) const;
		void setSelector(android::content::Intent arg0) const;
		void setSourceBounds(android::graphics::Rect arg0) const;
		android::content::Intent setType(JString arg0) const;
		android::content::Intent setTypeAndNormalize(JString arg0) const;
		JString toString() const;
		JString toURI() const;
		JString toUri(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

