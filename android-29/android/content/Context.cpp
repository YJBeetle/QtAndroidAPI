#include "./BroadcastReceiver.hpp"
#include "./ComponentName.hpp"
#include "./ContentResolver.hpp"
#include "./Intent.hpp"
#include "./IntentFilter.hpp"
#include "./IntentSender.hpp"
#include "./pm/ApplicationInfo.hpp"
#include "./pm/PackageManager.hpp"
#include "./res/AssetManager.hpp"
#include "./res/ColorStateList.hpp"
#include "./res/Configuration.hpp"
#include "./res/Resources.hpp"
#include "./res/Resources_Theme.hpp"
#include "./res/TypedArray.hpp"
#include "../database/sqlite/SQLiteDatabase.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/Looper.hpp"
#include "../os/UserHandle.hpp"
#include "../view/Display.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileInputStream.hpp"
#include "../../java/io/FileOutputStream.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./Context.hpp"

namespace android::content
{
	// Fields
	jstring Context::ACCESSIBILITY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"ACCESSIBILITY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::ACCOUNT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"ACCOUNT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::ACTIVITY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"ACTIVITY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::ALARM_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"ALARM_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::APPWIDGET_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"APPWIDGET_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::APP_OPS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"APP_OPS_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::AUDIO_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"AUDIO_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::BATTERY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"BATTERY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Context::BIND_ABOVE_CLIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_ABOVE_CLIENT"
		);
	}
	jint Context::BIND_ADJUST_WITH_ACTIVITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_ADJUST_WITH_ACTIVITY"
		);
	}
	jint Context::BIND_ALLOW_OOM_MANAGEMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_ALLOW_OOM_MANAGEMENT"
		);
	}
	jint Context::BIND_AUTO_CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_AUTO_CREATE"
		);
	}
	jint Context::BIND_DEBUG_UNBIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_DEBUG_UNBIND"
		);
	}
	jint Context::BIND_EXTERNAL_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_EXTERNAL_SERVICE"
		);
	}
	jint Context::BIND_IMPORTANT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_IMPORTANT"
		);
	}
	jint Context::BIND_INCLUDE_CAPABILITIES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_INCLUDE_CAPABILITIES"
		);
	}
	jint Context::BIND_NOT_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_NOT_FOREGROUND"
		);
	}
	jint Context::BIND_NOT_PERCEPTIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_NOT_PERCEPTIBLE"
		);
	}
	jint Context::BIND_WAIVE_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"BIND_WAIVE_PRIORITY"
		);
	}
	jstring Context::BIOMETRIC_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"BIOMETRIC_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::BLUETOOTH_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"BLUETOOTH_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::CAMERA_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"CAMERA_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::CAPTIONING_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"CAPTIONING_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::CARRIER_CONFIG_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"CARRIER_CONFIG_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::CLIPBOARD_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"CLIPBOARD_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::COMPANION_DEVICE_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"COMPANION_DEVICE_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::CONNECTIVITY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"CONNECTIVITY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::CONSUMER_IR_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"CONSUMER_IR_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Context::CONTEXT_IGNORE_SECURITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_IGNORE_SECURITY"
		);
	}
	jint Context::CONTEXT_INCLUDE_CODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_INCLUDE_CODE"
		);
	}
	jint Context::CONTEXT_RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"CONTEXT_RESTRICTED"
		);
	}
	jstring Context::CROSS_PROFILE_APPS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"CROSS_PROFILE_APPS_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::DEVICE_POLICY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"DEVICE_POLICY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::DISPLAY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"DISPLAY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::DOWNLOAD_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"DOWNLOAD_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::DROPBOX_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"DROPBOX_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::EUICC_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"EUICC_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::FINGERPRINT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"FINGERPRINT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::HARDWARE_PROPERTIES_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"HARDWARE_PROPERTIES_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::INPUT_METHOD_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"INPUT_METHOD_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::INPUT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"INPUT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::IPSEC_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"IPSEC_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::JOB_SCHEDULER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"JOB_SCHEDULER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::KEYGUARD_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"KEYGUARD_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::LAUNCHER_APPS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"LAUNCHER_APPS_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::LAYOUT_INFLATER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"LAYOUT_INFLATER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::LOCATION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"LOCATION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::MEDIA_PROJECTION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"MEDIA_PROJECTION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::MEDIA_ROUTER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"MEDIA_ROUTER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::MEDIA_SESSION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"MEDIA_SESSION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::MIDI_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"MIDI_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Context::MODE_APPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"MODE_APPEND"
		);
	}
	jint Context::MODE_ENABLE_WRITE_AHEAD_LOGGING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"MODE_ENABLE_WRITE_AHEAD_LOGGING"
		);
	}
	jint Context::MODE_MULTI_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"MODE_MULTI_PROCESS"
		);
	}
	jint Context::MODE_NO_LOCALIZED_COLLATORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"MODE_NO_LOCALIZED_COLLATORS"
		);
	}
	jint Context::MODE_PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"MODE_PRIVATE"
		);
	}
	jint Context::MODE_WORLD_READABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"MODE_WORLD_READABLE"
		);
	}
	jint Context::MODE_WORLD_WRITEABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"MODE_WORLD_WRITEABLE"
		);
	}
	jstring Context::NETWORK_STATS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"NETWORK_STATS_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::NFC_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"NFC_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::NOTIFICATION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"NOTIFICATION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::NSD_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"NSD_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::POWER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"POWER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::PRINT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"PRINT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Context::RECEIVER_VISIBLE_TO_INSTANT_APPS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.Context",
			"RECEIVER_VISIBLE_TO_INSTANT_APPS"
		);
	}
	jstring Context::RESTRICTIONS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"RESTRICTIONS_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::ROLE_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"ROLE_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::SEARCH_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"SEARCH_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::SENSOR_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"SENSOR_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::SHORTCUT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"SHORTCUT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::STORAGE_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"STORAGE_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::STORAGE_STATS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"STORAGE_STATS_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::SYSTEM_HEALTH_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"SYSTEM_HEALTH_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::TELECOM_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"TELECOM_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::TELEPHONY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"TELEPHONY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::TELEPHONY_SUBSCRIPTION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"TELEPHONY_SUBSCRIPTION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::TEXT_CLASSIFICATION_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"TEXT_CLASSIFICATION_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::TEXT_SERVICES_MANAGER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"TEXT_SERVICES_MANAGER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::TV_INPUT_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"TV_INPUT_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::UI_MODE_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"UI_MODE_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::USAGE_STATS_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"USAGE_STATS_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::USB_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"USB_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::USER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"USER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::VIBRATOR_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"VIBRATOR_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::WALLPAPER_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"WALLPAPER_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::WIFI_AWARE_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"WIFI_AWARE_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::WIFI_P2P_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"WIFI_P2P_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::WIFI_RTT_RANGING_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"WIFI_RTT_RANGING_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::WIFI_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"WIFI_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::WINDOW_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Context",
			"WINDOW_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Context::Context(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Context::Context()
	{
		__thiz = QAndroidJniObject(
			"android.content.Context",
			"()V"
		);
	}
	
	// Methods
	jboolean Context::bindIsolatedService(android::content::Intent arg0, jint arg1, jstring arg2, __JniBaseClass arg3, __JniBaseClass arg4)
	{
		return __thiz.callMethod<jboolean>(
			"bindIsolatedService",
			"(Landroid/content/Intent;ILjava/lang/String;Ljava/util/concurrent/Executor;Landroid/content/ServiceConnection;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jboolean Context::bindIsolatedService(android::content::Intent arg0, jint arg1, const QString &arg2, __JniBaseClass arg3, __JniBaseClass arg4)
	{
		return __thiz.callMethod<jboolean>(
			"bindIsolatedService",
			"(Landroid/content/Intent;ILjava/lang/String;Ljava/util/concurrent/Executor;Landroid/content/ServiceConnection;)Z",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	jboolean Context::bindService(android::content::Intent arg0, __JniBaseClass arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean Context::bindService(android::content::Intent arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		return __thiz.callMethod<jboolean>(
			"bindService",
			"(Landroid/content/Intent;ILjava/util/concurrent/Executor;Landroid/content/ServiceConnection;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jint Context::checkCallingOrSelfPermission(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Context::checkCallingOrSelfPermission(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingOrSelfPermission",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Context::checkCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"checkCallingOrSelfUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Context::checkCallingPermission(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Context::checkCallingPermission(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"checkCallingPermission",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Context::checkCallingUriPermission(android::net::Uri arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"checkCallingUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Context::checkPermission(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;II)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Context::checkPermission(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"checkPermission",
			"(Ljava/lang/String;II)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	jint Context::checkSelfPermission(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"checkSelfPermission",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Context::checkSelfPermission(const QString &arg0)
	{
		return __thiz.callMethod<jint>(
			"checkSelfPermission",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint Context::checkUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;III)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jint Context::checkUriPermission(android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint Context::checkUriPermission(android::net::Uri arg0, const QString &arg1, const QString &arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jint>(
			"checkUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;III)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4,
			arg5
		);
	}
	void Context::clearWallpaper()
	{
		__thiz.callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	QAndroidJniObject Context::createConfigurationContext(android::content::res::Configuration arg0)
	{
		return __thiz.callObjectMethod(
			"createConfigurationContext",
			"(Landroid/content/res/Configuration;)Landroid/content/Context;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Context::createContextForSplit(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			arg0
		);
	}
	QAndroidJniObject Context::createContextForSplit(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"createContextForSplit",
			"(Ljava/lang/String;)Landroid/content/Context;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Context::createDeviceProtectedStorageContext()
	{
		return __thiz.callObjectMethod(
			"createDeviceProtectedStorageContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject Context::createDisplayContext(android::view::Display arg0)
	{
		return __thiz.callObjectMethod(
			"createDisplayContext",
			"(Landroid/view/Display;)Landroid/content/Context;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Context::createPackageContext(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Context::createPackageContext(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"createPackageContext",
			"(Ljava/lang/String;I)Landroid/content/Context;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jarray Context::databaseList()
	{
		return __thiz.callObjectMethod(
			"databaseList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean Context::deleteDatabase(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Context::deleteDatabase(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteDatabase",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Context::deleteFile(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteFile",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Context::deleteFile(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteFile",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Context::deleteSharedPreferences(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteSharedPreferences",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Context::deleteSharedPreferences(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteSharedPreferences",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Context::enforceCallingOrSelfPermission(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"enforceCallingOrSelfPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Context::enforceCallingOrSelfPermission(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"enforceCallingOrSelfPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Context::enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"enforceCallingOrSelfUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Context::enforceCallingOrSelfUriPermission(android::net::Uri arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"enforceCallingOrSelfUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void Context::enforceCallingPermission(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"enforceCallingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Context::enforceCallingPermission(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"enforceCallingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Context::enforceCallingUriPermission(android::net::Uri arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"enforceCallingUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Context::enforceCallingUriPermission(android::net::Uri arg0, jint arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"enforceCallingUriPermission",
			"(Landroid/net/Uri;ILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void Context::enforcePermission(jstring arg0, jint arg1, jint arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"enforcePermission",
			"(Ljava/lang/String;IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Context::enforcePermission(const QString &arg0, jint arg1, jint arg2, const QString &arg3)
	{
		__thiz.callMethod<void>(
			"enforcePermission",
			"(Ljava/lang/String;IILjava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void Context::enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, jstring arg4)
	{
		__thiz.callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;IIILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Context::enforceUriPermission(android::net::Uri arg0, jint arg1, jint arg2, jint arg3, const QString &arg4)
	{
		__thiz.callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;IIILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	void Context::enforceUriPermission(android::net::Uri arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, jint arg5, jstring arg6)
	{
		__thiz.callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void Context::enforceUriPermission(android::net::Uri arg0, const QString &arg1, const QString &arg2, jint arg3, jint arg4, jint arg5, const QString &arg6)
	{
		__thiz.callMethod<void>(
			"enforceUriPermission",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;IIILjava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4,
			arg5,
			QAndroidJniObject::fromString(arg6).object<jstring>()
		);
	}
	jarray Context::fileList()
	{
		return __thiz.callObjectMethod(
			"fileList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Context::getApplicationContext()
	{
		return __thiz.callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject Context::getApplicationInfo()
	{
		return __thiz.callObjectMethod(
			"getApplicationInfo",
			"()Landroid/content/pm/ApplicationInfo;"
		);
	}
	QAndroidJniObject Context::getAssets()
	{
		return __thiz.callObjectMethod(
			"getAssets",
			"()Landroid/content/res/AssetManager;"
		);
	}
	QAndroidJniObject Context::getCacheDir()
	{
		return __thiz.callObjectMethod(
			"getCacheDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Context::getClassLoader()
	{
		return __thiz.callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	QAndroidJniObject Context::getCodeCacheDir()
	{
		return __thiz.callObjectMethod(
			"getCodeCacheDir",
			"()Ljava/io/File;"
		);
	}
	jint Context::getColor(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getColor",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject Context::getColorStateList(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getColorStateList",
			"(I)Landroid/content/res/ColorStateList;",
			arg0
		);
	}
	QAndroidJniObject Context::getContentResolver()
	{
		return __thiz.callObjectMethod(
			"getContentResolver",
			"()Landroid/content/ContentResolver;"
		);
	}
	QAndroidJniObject Context::getDataDir()
	{
		return __thiz.callObjectMethod(
			"getDataDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Context::getDatabasePath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getDatabasePath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	QAndroidJniObject Context::getDatabasePath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getDatabasePath",
			"(Ljava/lang/String;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Context::getDir(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDir",
			"(Ljava/lang/String;I)Ljava/io/File;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Context::getDir(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getDir",
			"(Ljava/lang/String;I)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Context::getDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject Context::getExternalCacheDir()
	{
		return __thiz.callObjectMethod(
			"getExternalCacheDir",
			"()Ljava/io/File;"
		);
	}
	jarray Context::getExternalCacheDirs()
	{
		return __thiz.callObjectMethod(
			"getExternalCacheDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	QAndroidJniObject Context::getExternalFilesDir(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	QAndroidJniObject Context::getExternalFilesDir(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDir",
			"(Ljava/lang/String;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Context::getExternalFilesDirs(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDirs",
			"(Ljava/lang/String;)[Ljava/io/File;",
			arg0
		).object<jarray>();
	}
	jarray Context::getExternalFilesDirs(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getExternalFilesDirs",
			"(Ljava/lang/String;)[Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	jarray Context::getExternalMediaDirs()
	{
		return __thiz.callObjectMethod(
			"getExternalMediaDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	QAndroidJniObject Context::getFileStreamPath(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			arg0
		);
	}
	QAndroidJniObject Context::getFileStreamPath(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStreamPath",
			"(Ljava/lang/String;)Ljava/io/File;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Context::getFilesDir()
	{
		return __thiz.callObjectMethod(
			"getFilesDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Context::getMainExecutor()
	{
		return __thiz.callObjectMethod(
			"getMainExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	QAndroidJniObject Context::getMainLooper()
	{
		return __thiz.callObjectMethod(
			"getMainLooper",
			"()Landroid/os/Looper;"
		);
	}
	QAndroidJniObject Context::getNoBackupFilesDir()
	{
		return __thiz.callObjectMethod(
			"getNoBackupFilesDir",
			"()Ljava/io/File;"
		);
	}
	QAndroidJniObject Context::getObbDir()
	{
		return __thiz.callObjectMethod(
			"getObbDir",
			"()Ljava/io/File;"
		);
	}
	jarray Context::getObbDirs()
	{
		return __thiz.callObjectMethod(
			"getObbDirs",
			"()[Ljava/io/File;"
		).object<jarray>();
	}
	jstring Context::getOpPackageName()
	{
		return __thiz.callObjectMethod(
			"getOpPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::getPackageCodePath()
	{
		return __thiz.callObjectMethod(
			"getPackageCodePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Context::getPackageManager()
	{
		return __thiz.callObjectMethod(
			"getPackageManager",
			"()Landroid/content/pm/PackageManager;"
		);
	}
	jstring Context::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Context::getPackageResourcePath()
	{
		return __thiz.callObjectMethod(
			"getPackageResourcePath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Context::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	QAndroidJniObject Context::getSharedPreferences(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Context::getSharedPreferences(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getSharedPreferences",
			"(Ljava/lang/String;I)Landroid/content/SharedPreferences;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring Context::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Context::getString(jint arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jobject Context::getSystemService(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/Class;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Context::getSystemService(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Context::getSystemService(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemService",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jstring Context::getSystemServiceName(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getSystemServiceName",
			"(Ljava/lang/Class;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Context::getText(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Context::getTheme()
	{
		return __thiz.callObjectMethod(
			"getTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	QAndroidJniObject Context::getWallpaper()
	{
		return __thiz.callObjectMethod(
			"getWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Context::getWallpaperDesiredMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getWallpaperDesiredMinimumHeight",
			"()I"
		);
	}
	jint Context::getWallpaperDesiredMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getWallpaperDesiredMinimumWidth",
			"()I"
		);
	}
	void Context::grantUriPermission(jstring arg0, android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"grantUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Context::grantUriPermission(const QString &arg0, android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"grantUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean Context::isDeviceProtectedStorage()
	{
		return __thiz.callMethod<jboolean>(
			"isDeviceProtectedStorage",
			"()Z"
		);
	}
	jboolean Context::isRestricted()
	{
		return __thiz.callMethod<jboolean>(
			"isRestricted",
			"()Z"
		);
	}
	jboolean Context::moveDatabaseFrom(android::content::Context arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"moveDatabaseFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Context::moveDatabaseFrom(android::content::Context arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"moveDatabaseFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean Context::moveSharedPreferencesFrom(android::content::Context arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"moveSharedPreferencesFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Context::moveSharedPreferencesFrom(android::content::Context arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"moveSharedPreferencesFrom",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Context::obtainStyledAttributes(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"obtainStyledAttributes",
			"([I)Landroid/content/res/TypedArray;",
			arg0
		);
	}
	QAndroidJniObject Context::obtainStyledAttributes(__JniBaseClass arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Context::obtainStyledAttributes(jint arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"obtainStyledAttributes",
			"(I[I)Landroid/content/res/TypedArray;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Context::obtainStyledAttributes(__JniBaseClass arg0, jintArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"obtainStyledAttributes",
			"(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Context::openFileInput(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openFileInput",
			"(Ljava/lang/String;)Ljava/io/FileInputStream;",
			arg0
		);
	}
	QAndroidJniObject Context::openFileInput(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"openFileInput",
			"(Ljava/lang/String;)Ljava/io/FileInputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Context::openFileOutput(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"openFileOutput",
			"(Ljava/lang/String;I)Ljava/io/FileOutputStream;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Context::openFileOutput(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"openFileOutput",
			"(Ljava/lang/String;I)Ljava/io/FileOutputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Context::openOrCreateDatabase(jstring arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Context::openOrCreateDatabase(const QString &arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;)Landroid/database/sqlite/SQLiteDatabase;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Context::openOrCreateDatabase(jstring arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Context::openOrCreateDatabase(const QString &arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"openOrCreateDatabase",
			"(Ljava/lang/String;ILandroid/database/sqlite/SQLiteDatabase$CursorFactory;Landroid/database/DatabaseErrorHandler;)Landroid/database/sqlite/SQLiteDatabase;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Context::peekWallpaper()
	{
		return __thiz.callObjectMethod(
			"peekWallpaper",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void Context::registerComponentCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;I)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jstring arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, const QString &arg2, android::os::Handler arg3)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, jstring arg2, android::os::Handler arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;I)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject Context::registerReceiver(android::content::BroadcastReceiver arg0, android::content::IntentFilter arg1, const QString &arg2, android::os::Handler arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"registerReceiver",
			"(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;Ljava/lang/String;Landroid/os/Handler;I)Landroid/content/Intent;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	void Context::removeStickyBroadcast(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"removeStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::removeStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"removeStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Context::revokeUriPermission(android::net::Uri arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"revokeUriPermission",
			"(Landroid/net/Uri;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Context::revokeUriPermission(jstring arg0, android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"revokeUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Context::revokeUriPermission(const QString &arg0, android::net::Uri arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"revokeUriPermission",
			"(Ljava/lang/String;Landroid/net/Uri;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Context::sendBroadcast(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::sendBroadcast(android::content::Intent arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Context::sendBroadcast(android::content::Intent arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"sendBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Context::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Context::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void Context::sendBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"sendBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void Context::sendOrderedBroadcast(android::content::Intent arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Context::sendOrderedBroadcast(android::content::Intent arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Context::sendOrderedBroadcast(android::content::Intent arg0, jstring arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, jstring arg5, android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void Context::sendOrderedBroadcast(android::content::Intent arg0, const QString &arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, const QString &arg5, android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcast",
			"(Landroid/content/Intent;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6.__jniObject().object()
		);
	}
	void Context::sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, jstring arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, jstring arg6, android::os::Bundle arg7)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7.__jniObject().object()
		);
	}
	void Context::sendOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, const QString &arg2, android::content::BroadcastReceiver arg3, android::os::Handler arg4, jint arg5, const QString &arg6, android::os::Bundle arg7)
	{
		__thiz.callMethod<void>(
			"sendOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Ljava/lang/String;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			QAndroidJniObject::fromString(arg6).object<jstring>(),
			arg7.__jniObject().object()
		);
	}
	void Context::sendStickyBroadcast(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"sendStickyBroadcast",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::sendStickyBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1)
	{
		__thiz.callMethod<void>(
			"sendStickyBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Context::sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, jstring arg4, android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"sendStickyOrderedBroadcast",
			"(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void Context::sendStickyOrderedBroadcast(android::content::Intent arg0, android::content::BroadcastReceiver arg1, android::os::Handler arg2, jint arg3, const QString &arg4, android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"sendStickyOrderedBroadcast",
			"(Landroid/content/Intent;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			arg5.__jniObject().object()
		);
	}
	void Context::sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, jstring arg5, android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"sendStickyOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	void Context::sendStickyOrderedBroadcastAsUser(android::content::Intent arg0, android::os::UserHandle arg1, android::content::BroadcastReceiver arg2, android::os::Handler arg3, jint arg4, const QString &arg5, android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"sendStickyOrderedBroadcastAsUser",
			"(Landroid/content/Intent;Landroid/os/UserHandle;Landroid/content/BroadcastReceiver;Landroid/os/Handler;ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6.__jniObject().object()
		);
	}
	void Context::setTheme(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTheme",
			"(I)V",
			arg0
		);
	}
	void Context::setWallpaper(android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setWallpaper",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::setWallpaper(java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"setWallpaper",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::startActivities(jarray arg0)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;)V",
			arg0
		);
	}
	void Context::startActivities(jarray arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivities",
			"([Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Context::startActivity(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::startActivity(android::content::Intent arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"startActivity",
			"(Landroid/content/Intent;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Context::startForegroundService(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"startForegroundService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.__jniObject().object()
		);
	}
	jboolean Context::startInstrumentation(android::content::ComponentName arg0, jstring arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"startInstrumentation",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Context::startInstrumentation(android::content::ComponentName arg0, const QString &arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"startInstrumentation",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void Context::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;III)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	void Context::startIntentSender(android::content::IntentSender arg0, android::content::Intent arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"startIntentSender",
			"(Landroid/content/IntentSender;Landroid/content/Intent;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject Context::startService(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"startService",
			"(Landroid/content/Intent;)Landroid/content/ComponentName;",
			arg0.__jniObject().object()
		);
	}
	jboolean Context::stopService(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"stopService",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Context::unbindService(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unbindService",
			"(Landroid/content/ServiceConnection;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::unregisterComponentCallbacks(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterComponentCallbacks",
			"(Landroid/content/ComponentCallbacks;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::unregisterReceiver(android::content::BroadcastReceiver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterReceiver",
			"(Landroid/content/BroadcastReceiver;)V",
			arg0.__jniObject().object()
		);
	}
	void Context::updateServiceGroup(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"updateServiceGroup",
			"(Landroid/content/ServiceConnection;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace android::content

