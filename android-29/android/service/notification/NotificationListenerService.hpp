#pragma once

#ifndef ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE
#define ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::service::notification
{
	class StatusBarNotification;
}
namespace __jni_impl::android::service::notification
{
	class NotificationListenerService_RankingMap;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::app
{
	class NotificationChannel;
}
namespace __jni_impl::android::app
{
	class NotificationChannelGroup;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}

namespace __jni_impl::android::service::notification
{
	class NotificationListenerService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jint HINT_HOST_DISABLE_CALL_EFFECTS();
		static jint HINT_HOST_DISABLE_EFFECTS();
		static jint HINT_HOST_DISABLE_NOTIFICATION_EFFECTS();
		static jint INTERRUPTION_FILTER_ALARMS();
		static jint INTERRUPTION_FILTER_ALL();
		static jint INTERRUPTION_FILTER_NONE();
		static jint INTERRUPTION_FILTER_PRIORITY();
		static jint INTERRUPTION_FILTER_UNKNOWN();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_ADDED();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_DELETED();
		static jint NOTIFICATION_CHANNEL_OR_GROUP_UPDATED();
		static jint REASON_APP_CANCEL();
		static jint REASON_APP_CANCEL_ALL();
		static jint REASON_CANCEL();
		static jint REASON_CANCEL_ALL();
		static jint REASON_CHANNEL_BANNED();
		static jint REASON_CLICK();
		static jint REASON_ERROR();
		static jint REASON_GROUP_OPTIMIZATION();
		static jint REASON_GROUP_SUMMARY_CANCELED();
		static jint REASON_LISTENER_CANCEL();
		static jint REASON_LISTENER_CANCEL_ALL();
		static jint REASON_PACKAGE_BANNED();
		static jint REASON_PACKAGE_CHANGED();
		static jint REASON_PACKAGE_SUSPENDED();
		static jint REASON_PROFILE_TURNED_OFF();
		static jint REASON_SNOOZED();
		static jint REASON_TIMEOUT();
		static jint REASON_UNAUTOBUNDLED();
		static jint REASON_USER_STOPPED();
		static jstring SERVICE_INTERFACE();
		static jint SUPPRESSED_EFFECT_SCREEN_OFF();
		static jint SUPPRESSED_EFFECT_SCREEN_ON();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onDestroy();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onNotificationPosted(__jni_impl::android::service::notification::StatusBarNotification arg0, __jni_impl::android::service::notification::NotificationListenerService_RankingMap arg1);
		void onNotificationPosted(__jni_impl::android::service::notification::StatusBarNotification arg0);
		void onNotificationRemoved(__jni_impl::android::service::notification::StatusBarNotification arg0);
		void onNotificationRemoved(__jni_impl::android::service::notification::StatusBarNotification arg0, __jni_impl::android::service::notification::NotificationListenerService_RankingMap arg1, jint arg2);
		void onNotificationRemoved(__jni_impl::android::service::notification::StatusBarNotification arg0, __jni_impl::android::service::notification::NotificationListenerService_RankingMap arg1);
		void onListenerConnected();
		void onListenerDisconnected();
		void onNotificationRankingUpdate(__jni_impl::android::service::notification::NotificationListenerService_RankingMap arg0);
		void onListenerHintsChanged(jint arg0);
		void onSilentStatusBarIconsVisibilityChanged(jboolean arg0);
		void onNotificationChannelModified(jstring arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::app::NotificationChannel arg2, jint arg3);
		void onNotificationChannelGroupModified(jstring arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::app::NotificationChannelGroup arg2, jint arg3);
		void onInterruptionFilterChanged(jint arg0);
		void cancelNotification(jstring arg0);
		void cancelNotification(jstring arg0, jstring arg1, jint arg2);
		void cancelAllNotifications();
		void cancelNotifications(jarray arg0);
		void snoozeNotification(jstring arg0, jlong arg1);
		void setNotificationsShown(jarray arg0);
		void updateNotificationChannel(jstring arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::app::NotificationChannel arg2);
		QAndroidJniObject getNotificationChannels(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		QAndroidJniObject getNotificationChannelGroups(jstring arg0, __jni_impl::android::os::UserHandle arg1);
		jarray getActiveNotifications(jarray arg0);
		jarray getActiveNotifications();
		jarray getSnoozedNotifications();
		jint getCurrentListenerHints();
		jint getCurrentInterruptionFilter();
		void clearRequestedListenerHints();
		void requestListenerHints(jint arg0);
		void requestInterruptionFilter(jint arg0);
		QAndroidJniObject getCurrentRanking();
		static void requestRebind(__jni_impl::android::content::ComponentName arg0);
		void requestUnbind();
	};
} // namespace __jni_impl::android::service::notification

#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "StatusBarNotification.hpp"
#include "NotificationListenerService_RankingMap.hpp"
#include "../../os/UserHandle.hpp"
#include "../../app/NotificationChannel.hpp"
#include "../../app/NotificationChannelGroup.hpp"
#include "../../content/ComponentName.hpp"

namespace __jni_impl::android::service::notification
{
	// Fields
	jint NotificationListenerService::HINT_HOST_DISABLE_CALL_EFFECTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_CALL_EFFECTS"
		);
	}
	jint NotificationListenerService::HINT_HOST_DISABLE_EFFECTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_EFFECTS"
		);
	}
	jint NotificationListenerService::HINT_HOST_DISABLE_NOTIFICATION_EFFECTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"HINT_HOST_DISABLE_NOTIFICATION_EFFECTS"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_ALARMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_ALARMS"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_ALL"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_NONE"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_PRIORITY"
		);
	}
	jint NotificationListenerService::INTERRUPTION_FILTER_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"INTERRUPTION_FILTER_UNKNOWN"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_ADDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_ADDED"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_DELETED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_DELETED"
		);
	}
	jint NotificationListenerService::NOTIFICATION_CHANNEL_OR_GROUP_UPDATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"NOTIFICATION_CHANNEL_OR_GROUP_UPDATED"
		);
	}
	jint NotificationListenerService::REASON_APP_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_APP_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_APP_CANCEL_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_APP_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_CANCEL_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_CHANNEL_BANNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CHANNEL_BANNED"
		);
	}
	jint NotificationListenerService::REASON_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_CLICK"
		);
	}
	jint NotificationListenerService::REASON_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_ERROR"
		);
	}
	jint NotificationListenerService::REASON_GROUP_OPTIMIZATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_GROUP_OPTIMIZATION"
		);
	}
	jint NotificationListenerService::REASON_GROUP_SUMMARY_CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_GROUP_SUMMARY_CANCELED"
		);
	}
	jint NotificationListenerService::REASON_LISTENER_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_LISTENER_CANCEL"
		);
	}
	jint NotificationListenerService::REASON_LISTENER_CANCEL_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_LISTENER_CANCEL_ALL"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_BANNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_BANNED"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_CHANGED"
		);
	}
	jint NotificationListenerService::REASON_PACKAGE_SUSPENDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PACKAGE_SUSPENDED"
		);
	}
	jint NotificationListenerService::REASON_PROFILE_TURNED_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_PROFILE_TURNED_OFF"
		);
	}
	jint NotificationListenerService::REASON_SNOOZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_SNOOZED"
		);
	}
	jint NotificationListenerService::REASON_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_TIMEOUT"
		);
	}
	jint NotificationListenerService::REASON_UNAUTOBUNDLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_UNAUTOBUNDLED"
		);
	}
	jint NotificationListenerService::REASON_USER_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"REASON_USER_STOPPED"
		);
	}
	jstring NotificationListenerService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.NotificationListenerService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationListenerService::SUPPRESSED_EFFECT_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"SUPPRESSED_EFFECT_SCREEN_OFF"
		);
	}
	jint NotificationListenerService::SUPPRESSED_EFFECT_SCREEN_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.NotificationListenerService",
			"SUPPRESSED_EFFECT_SCREEN_ON"
		);
	}
	
	// Constructors
	void NotificationListenerService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.NotificationListenerService",
			"()V");
	}
	
	// Methods
	void NotificationListenerService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	QAndroidJniObject NotificationListenerService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationPosted(__jni_impl::android::service::notification::StatusBarNotification arg0, __jni_impl::android::service::notification::NotificationListenerService_RankingMap arg1)
	{
		__thiz.callMethod<void>(
			"onNotificationPosted",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationPosted(__jni_impl::android::service::notification::StatusBarNotification arg0)
	{
		__thiz.callMethod<void>(
			"onNotificationPosted",
			"(Landroid/service/notification/StatusBarNotification;)V",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationRemoved(__jni_impl::android::service::notification::StatusBarNotification arg0)
	{
		__thiz.callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;)V",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::onNotificationRemoved(__jni_impl::android::service::notification::StatusBarNotification arg0, __jni_impl::android::service::notification::NotificationListenerService_RankingMap arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void NotificationListenerService::onNotificationRemoved(__jni_impl::android::service::notification::StatusBarNotification arg0, __jni_impl::android::service::notification::NotificationListenerService_RankingMap arg1)
	{
		__thiz.callMethod<void>(
			"onNotificationRemoved",
			"(Landroid/service/notification/StatusBarNotification;Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NotificationListenerService::onListenerConnected()
	{
		__thiz.callMethod<void>(
			"onListenerConnected",
			"()V"
		);
	}
	void NotificationListenerService::onListenerDisconnected()
	{
		__thiz.callMethod<void>(
			"onListenerDisconnected",
			"()V"
		);
	}
	void NotificationListenerService::onNotificationRankingUpdate(__jni_impl::android::service::notification::NotificationListenerService_RankingMap arg0)
	{
		__thiz.callMethod<void>(
			"onNotificationRankingUpdate",
			"(Landroid/service/notification/NotificationListenerService$RankingMap;)V",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::onListenerHintsChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onListenerHintsChanged",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::onSilentStatusBarIconsVisibilityChanged(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onSilentStatusBarIconsVisibilityChanged",
			"(Z)V",
			arg0
		);
	}
	void NotificationListenerService::onNotificationChannelModified(jstring arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::app::NotificationChannel arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNotificationChannelModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void NotificationListenerService::onNotificationChannelGroupModified(jstring arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::app::NotificationChannelGroup arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onNotificationChannelGroupModified",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannelGroup;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void NotificationListenerService::onInterruptionFilterChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onInterruptionFilterChanged",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::cancelNotification(jstring arg0)
	{
		__thiz.callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::cancelNotification(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"cancelNotification",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NotificationListenerService::cancelAllNotifications()
	{
		__thiz.callMethod<void>(
			"cancelAllNotifications",
			"()V"
		);
	}
	void NotificationListenerService::cancelNotifications(jarray arg0)
	{
		__thiz.callMethod<void>(
			"cancelNotifications",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::snoozeNotification(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"snoozeNotification",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void NotificationListenerService::setNotificationsShown(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setNotificationsShown",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationListenerService::updateNotificationChannel(jstring arg0, __jni_impl::android::os::UserHandle arg1, __jni_impl::android::app::NotificationChannel arg2)
	{
		__thiz.callMethod<void>(
			"updateNotificationChannel",
			"(Ljava/lang/String;Landroid/os/UserHandle;Landroid/app/NotificationChannel;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject NotificationListenerService::getNotificationChannels(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getNotificationChannels",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NotificationListenerService::getNotificationChannelGroups(jstring arg0, __jni_impl::android::os::UserHandle arg1)
	{
		return __thiz.callObjectMethod(
			"getNotificationChannelGroups",
			"(Ljava/lang/String;Landroid/os/UserHandle;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jarray NotificationListenerService::getActiveNotifications(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"getActiveNotifications",
			"([Ljava/lang/String;)[Landroid/service/notification/StatusBarNotification;",
			arg0
		).object<jarray>();
	}
	jarray NotificationListenerService::getActiveNotifications()
	{
		return __thiz.callObjectMethod(
			"getActiveNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		).object<jarray>();
	}
	jarray NotificationListenerService::getSnoozedNotifications()
	{
		return __thiz.callObjectMethod(
			"getSnoozedNotifications",
			"()[Landroid/service/notification/StatusBarNotification;"
		).object<jarray>();
	}
	jint NotificationListenerService::getCurrentListenerHints()
	{
		return __thiz.callMethod<jint>(
			"getCurrentListenerHints",
			"()I"
		);
	}
	jint NotificationListenerService::getCurrentInterruptionFilter()
	{
		return __thiz.callMethod<jint>(
			"getCurrentInterruptionFilter",
			"()I"
		);
	}
	void NotificationListenerService::clearRequestedListenerHints()
	{
		__thiz.callMethod<void>(
			"clearRequestedListenerHints",
			"()V"
		);
	}
	void NotificationListenerService::requestListenerHints(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestListenerHints",
			"(I)V",
			arg0
		);
	}
	void NotificationListenerService::requestInterruptionFilter(jint arg0)
	{
		__thiz.callMethod<void>(
			"requestInterruptionFilter",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject NotificationListenerService::getCurrentRanking()
	{
		return __thiz.callObjectMethod(
			"getCurrentRanking",
			"()Landroid/service/notification/NotificationListenerService$RankingMap;"
		);
	}
	void NotificationListenerService::requestRebind(__jni_impl::android::content::ComponentName arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.service.notification.NotificationListenerService",
			"requestRebind",
			"(Landroid/content/ComponentName;)V",
			arg0.__jniObject().object()
		);
	}
	void NotificationListenerService::requestUnbind()
	{
		__thiz.callMethod<void>(
			"requestUnbind",
			"()V"
		);
	}
} // namespace __jni_impl::android::service::notification

namespace android::service::notification
{
	class NotificationListenerService : public __jni_impl::android::service::notification::NotificationListenerService
	{
	public:
		NotificationListenerService(QAndroidJniObject obj) { __thiz = obj; }
		NotificationListenerService()
		{
			__constructor();
		}
	};
} // namespace android::service::notification

#endif // ANDROID_SERVICE_NOTIFICATION_NOTIFICATIONLISTENERSERVICE

