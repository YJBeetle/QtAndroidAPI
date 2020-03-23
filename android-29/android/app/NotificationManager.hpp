#pragma once

#ifndef ANDROID_APP_NOTIFICATIONMANAGER
#define ANDROID_APP_NOTIFICATIONMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::app
{
	class Notification;
}
namespace __jni_impl::android::app
{
	class NotificationChannelGroup;
}
namespace __jni_impl::android::app
{
	class NotificationChannel;
}
namespace __jni_impl::android::app
{
	class AutomaticZenRule;
}
namespace __jni_impl::android::service::notification
{
	class Condition;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::app
{
	class NotificationManager_Policy;
}

namespace __jni_impl::android::app
{
	class NotificationManager : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_APP_BLOCK_STATE_CHANGED();
		static QAndroidJniObject ACTION_AUTOMATIC_ZEN_RULE();
		static QAndroidJniObject ACTION_INTERRUPTION_FILTER_CHANGED();
		static QAndroidJniObject ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED();
		static QAndroidJniObject ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED();
		static QAndroidJniObject ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED();
		static QAndroidJniObject ACTION_NOTIFICATION_POLICY_CHANGED();
		static QAndroidJniObject EXTRA_AUTOMATIC_RULE_ID();
		static QAndroidJniObject EXTRA_BLOCKED_STATE();
		static QAndroidJniObject EXTRA_NOTIFICATION_CHANNEL_GROUP_ID();
		static QAndroidJniObject EXTRA_NOTIFICATION_CHANNEL_ID();
		static jint IMPORTANCE_DEFAULT();
		static jint IMPORTANCE_HIGH();
		static jint IMPORTANCE_LOW();
		static jint IMPORTANCE_MAX();
		static jint IMPORTANCE_MIN();
		static jint IMPORTANCE_NONE();
		static jint IMPORTANCE_UNSPECIFIED();
		static jint INTERRUPTION_FILTER_ALARMS();
		static jint INTERRUPTION_FILTER_ALL();
		static jint INTERRUPTION_FILTER_NONE();
		static jint INTERRUPTION_FILTER_PRIORITY();
		static jint INTERRUPTION_FILTER_UNKNOWN();
		static QAndroidJniObject META_DATA_AUTOMATIC_RULE_TYPE();
		static QAndroidJniObject META_DATA_RULE_INSTANCE_LIMIT();
		
		// Constructors
		void __constructor();
		
		// Methods
		void notify(jstring arg0, jint arg1, __jni_impl::android::app::Notification arg2);
		void notify(jint arg0, __jni_impl::android::app::Notification arg1);
		void cancel(jstring arg0, jint arg1);
		void cancel(jint arg0);
		void cancelAll();
		void notifyAsPackage(jstring arg0, jstring arg1, jint arg2, __jni_impl::android::app::Notification arg3);
		void setNotificationDelegate(jstring arg0);
		QAndroidJniObject getNotificationDelegate();
		jboolean canNotifyAsPackage(jstring arg0);
		void createNotificationChannelGroup(__jni_impl::android::app::NotificationChannelGroup arg0);
		void createNotificationChannelGroups(__jni_impl::__JniBaseClass arg0);
		void createNotificationChannel(__jni_impl::android::app::NotificationChannel arg0);
		void createNotificationChannels(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getNotificationChannel(jstring arg0);
		void deleteNotificationChannel(jstring arg0);
		QAndroidJniObject getNotificationChannelGroup(jstring arg0);
		void deleteNotificationChannelGroup(jstring arg0);
		QAndroidJniObject getAutomaticZenRules();
		QAndroidJniObject getAutomaticZenRule(jstring arg0);
		QAndroidJniObject addAutomaticZenRule(__jni_impl::android::app::AutomaticZenRule arg0);
		jboolean updateAutomaticZenRule(jstring arg0, __jni_impl::android::app::AutomaticZenRule arg1);
		void setAutomaticZenRuleState(jstring arg0, __jni_impl::android::service::notification::Condition arg1);
		jboolean removeAutomaticZenRule(jstring arg0);
		jboolean areNotificationsEnabled();
		jboolean areBubblesAllowed();
		jboolean areNotificationsPaused();
		jboolean isNotificationPolicyAccessGranted();
		jboolean isNotificationListenerAccessGranted(__jni_impl::android::content::ComponentName arg0);
		jboolean shouldHideSilentStatusBarIcons();
		QAndroidJniObject getNotificationPolicy();
		void setNotificationPolicy(__jni_impl::android::app::NotificationManager_Policy arg0);
		void setInterruptionFilter(jint arg0);
		QAndroidJniObject getNotificationChannels();
		QAndroidJniObject getNotificationChannelGroups();
		QAndroidJniObject getActiveNotifications();
		jint getCurrentInterruptionFilter();
		jint getImportance();
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../os/Handler.hpp"
#include "Notification.hpp"
#include "NotificationChannelGroup.hpp"
#include "NotificationChannel.hpp"
#include "AutomaticZenRule.hpp"
#include "../service/notification/Condition.hpp"
#include "../content/ComponentName.hpp"
#include "NotificationManager_Policy.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject NotificationManager::ACTION_APP_BLOCK_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_APP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::ACTION_AUTOMATIC_ZEN_RULE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_AUTOMATIC_ZEN_RULE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::ACTION_INTERRUPTION_FILTER_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_INTERRUPTION_FILTER_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_CHANNEL_GROUP_BLOCK_STATE_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_ACCESS_GRANTED_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::ACTION_NOTIFICATION_POLICY_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"ACTION_NOTIFICATION_POLICY_CHANGED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::EXTRA_AUTOMATIC_RULE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_AUTOMATIC_RULE_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::EXTRA_BLOCKED_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_BLOCKED_STATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::EXTRA_NOTIFICATION_CHANNEL_GROUP_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_GROUP_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::EXTRA_NOTIFICATION_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"EXTRA_NOTIFICATION_CHANNEL_ID",
			"Ljava/lang/String;");
	}
	jint NotificationManager::IMPORTANCE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_DEFAULT");
	}
	jint NotificationManager::IMPORTANCE_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_HIGH");
	}
	jint NotificationManager::IMPORTANCE_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_LOW");
	}
	jint NotificationManager::IMPORTANCE_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MAX");
	}
	jint NotificationManager::IMPORTANCE_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_MIN");
	}
	jint NotificationManager::IMPORTANCE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_NONE");
	}
	jint NotificationManager::IMPORTANCE_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"IMPORTANCE_UNSPECIFIED");
	}
	jint NotificationManager::INTERRUPTION_FILTER_ALARMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALARMS");
	}
	jint NotificationManager::INTERRUPTION_FILTER_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_ALL");
	}
	jint NotificationManager::INTERRUPTION_FILTER_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_NONE");
	}
	jint NotificationManager::INTERRUPTION_FILTER_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_PRIORITY");
	}
	jint NotificationManager::INTERRUPTION_FILTER_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager",
			"INTERRUPTION_FILTER_UNKNOWN");
	}
	QAndroidJniObject NotificationManager::META_DATA_AUTOMATIC_RULE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"META_DATA_AUTOMATIC_RULE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject NotificationManager::META_DATA_RULE_INSTANCE_LIMIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager",
			"META_DATA_RULE_INSTANCE_LIMIT",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void NotificationManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.NotificationManager",
			"(V)V");
	}
	
	// Methods
	void NotificationManager::notify(jstring arg0, jint arg1, __jni_impl::android::app::Notification arg2)
	{
		__thiz.callMethod<void>(
			"notify",
			"(Ljava/lang/String;ILandroid/app/Notification;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void NotificationManager::notify(jint arg0, __jni_impl::android::app::Notification arg1)
	{
		__thiz.callMethod<void>(
			"notify",
			"(ILandroid/app/Notification;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void NotificationManager::cancel(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"cancel",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void NotificationManager::cancel(jint arg0)
	{
		__thiz.callMethod<void>(
			"cancel",
			"(I)V",
			arg0);
	}
	void NotificationManager::cancelAll()
	{
		__thiz.callMethod<void>(
			"cancelAll",
			"()V");
	}
	void NotificationManager::notifyAsPackage(jstring arg0, jstring arg1, jint arg2, __jni_impl::android::app::Notification arg3)
	{
		__thiz.callMethod<void>(
			"notifyAsPackage",
			"(Ljava/lang/String;Ljava/lang/String;ILandroid/app/Notification;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void NotificationManager::setNotificationDelegate(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNotificationDelegate",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject NotificationManager::getNotificationDelegate()
	{
		return __thiz.callObjectMethod(
			"getNotificationDelegate",
			"()Ljava/lang/String;");
	}
	jboolean NotificationManager::canNotifyAsPackage(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"canNotifyAsPackage",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	void NotificationManager::createNotificationChannelGroup(__jni_impl::android::app::NotificationChannelGroup arg0)
	{
		__thiz.callMethod<void>(
			"createNotificationChannelGroup",
			"(Landroid/app/NotificationChannelGroup;)V",
			arg0.__jniObject().object());
	}
	void NotificationManager::createNotificationChannelGroups(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"createNotificationChannelGroups",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	void NotificationManager::createNotificationChannel(__jni_impl::android::app::NotificationChannel arg0)
	{
		__thiz.callMethod<void>(
			"createNotificationChannel",
			"(Landroid/app/NotificationChannel;)V",
			arg0.__jniObject().object());
	}
	void NotificationManager::createNotificationChannels(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"createNotificationChannels",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject NotificationManager::getNotificationChannel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getNotificationChannel",
			"(Ljava/lang/String;)Landroid/app/NotificationChannel;",
			arg0);
	}
	void NotificationManager::deleteNotificationChannel(jstring arg0)
	{
		__thiz.callMethod<void>(
			"deleteNotificationChannel",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject NotificationManager::getNotificationChannelGroup(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getNotificationChannelGroup",
			"(Ljava/lang/String;)Landroid/app/NotificationChannelGroup;",
			arg0);
	}
	void NotificationManager::deleteNotificationChannelGroup(jstring arg0)
	{
		__thiz.callMethod<void>(
			"deleteNotificationChannelGroup",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject NotificationManager::getAutomaticZenRules()
	{
		return __thiz.callObjectMethod(
			"getAutomaticZenRules",
			"()Ljava/util/Map;");
	}
	QAndroidJniObject NotificationManager::getAutomaticZenRule(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAutomaticZenRule",
			"(Ljava/lang/String;)Landroid/app/AutomaticZenRule;",
			arg0);
	}
	QAndroidJniObject NotificationManager::addAutomaticZenRule(__jni_impl::android::app::AutomaticZenRule arg0)
	{
		return __thiz.callObjectMethod(
			"addAutomaticZenRule",
			"(Landroid/app/AutomaticZenRule;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	jboolean NotificationManager::updateAutomaticZenRule(jstring arg0, __jni_impl::android::app::AutomaticZenRule arg1)
	{
		return __thiz.callMethod<jboolean>(
			"updateAutomaticZenRule",
			"(Ljava/lang/String;Landroid/app/AutomaticZenRule;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	void NotificationManager::setAutomaticZenRuleState(jstring arg0, __jni_impl::android::service::notification::Condition arg1)
	{
		__thiz.callMethod<void>(
			"setAutomaticZenRuleState",
			"(Ljava/lang/String;Landroid/service/notification/Condition;)V",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean NotificationManager::removeAutomaticZenRule(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"removeAutomaticZenRule",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean NotificationManager::areNotificationsEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"areNotificationsEnabled",
			"()Z");
	}
	jboolean NotificationManager::areBubblesAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"areBubblesAllowed",
			"()Z");
	}
	jboolean NotificationManager::areNotificationsPaused()
	{
		return __thiz.callMethod<jboolean>(
			"areNotificationsPaused",
			"()Z");
	}
	jboolean NotificationManager::isNotificationPolicyAccessGranted()
	{
		return __thiz.callMethod<jboolean>(
			"isNotificationPolicyAccessGranted",
			"()Z");
	}
	jboolean NotificationManager::isNotificationListenerAccessGranted(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNotificationListenerAccessGranted",
			"(Landroid/content/ComponentName;)Z",
			arg0.__jniObject().object());
	}
	jboolean NotificationManager::shouldHideSilentStatusBarIcons()
	{
		return __thiz.callMethod<jboolean>(
			"shouldHideSilentStatusBarIcons",
			"()Z");
	}
	QAndroidJniObject NotificationManager::getNotificationPolicy()
	{
		return __thiz.callObjectMethod(
			"getNotificationPolicy",
			"()Landroid/app/NotificationManager$Policy;");
	}
	void NotificationManager::setNotificationPolicy(__jni_impl::android::app::NotificationManager_Policy arg0)
	{
		__thiz.callMethod<void>(
			"setNotificationPolicy",
			"(Landroid/app/NotificationManager$Policy;)V",
			arg0.__jniObject().object());
	}
	void NotificationManager::setInterruptionFilter(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInterruptionFilter",
			"(I)V",
			arg0);
	}
	QAndroidJniObject NotificationManager::getNotificationChannels()
	{
		return __thiz.callObjectMethod(
			"getNotificationChannels",
			"()Ljava/util/List;");
	}
	QAndroidJniObject NotificationManager::getNotificationChannelGroups()
	{
		return __thiz.callObjectMethod(
			"getNotificationChannelGroups",
			"()Ljava/util/List;");
	}
	QAndroidJniObject NotificationManager::getActiveNotifications()
	{
		return __thiz.callObjectMethod(
			"getActiveNotifications",
			"()[Landroid/service/notification/StatusBarNotification;");
	}
	jint NotificationManager::getCurrentInterruptionFilter()
	{
		return __thiz.callMethod<jint>(
			"getCurrentInterruptionFilter",
			"()I");
	}
	jint NotificationManager::getImportance()
	{
		return __thiz.callMethod<jint>(
			"getImportance",
			"()I");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class NotificationManager : public __jni_impl::android::app::NotificationManager
	{
	public:
		NotificationManager(QAndroidJniObject obj) { __thiz = obj; }
		NotificationManager()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATIONMANAGER

