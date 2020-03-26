#pragma once

#ifndef ANDROID_APP_NOTIFICATION_BUILDER
#define ANDROID_APP_NOTIFICATION_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::app
{
	class Notification;
}
namespace __jni_impl::android::app
{
	class Notification_Style;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::app
{
	class Notification_Action;
}
namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::app
{
	class Notification_BubbleMetadata;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::app
{
	class Person;
}

namespace __jni_impl::android::app
{
	class Notification_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		QAndroidJniObject setPriority(jint arg0);
		QAndroidJniObject build();
		QAndroidJniObject setColor(jint arg0);
		QAndroidJniObject getStyle();
		QAndroidJniObject setStyle(__jni_impl::android::app::Notification_Style arg0);
		QAndroidJniObject setProgress(jint arg0, jint arg1, jboolean arg2);
		QAndroidJniObject getExtras();
		QAndroidJniObject getNotification();
		QAndroidJniObject setGroup(jstring arg0);
		QAndroidJniObject setSound(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setSound(__jni_impl::android::net::Uri arg0, __jni_impl::android::media::AudioAttributes arg1);
		QAndroidJniObject setSound(__jni_impl::android::net::Uri arg0, jint arg1);
		QAndroidJniObject setChronometerCountDown(jboolean arg0);
		QAndroidJniObject addAction(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2);
		QAndroidJniObject addAction(__jni_impl::android::app::Notification_Action arg0);
		QAndroidJniObject setVisibility(jint arg0);
		QAndroidJniObject setShortcutId(jstring arg0);
		QAndroidJniObject setLocusId(__jni_impl::android::content::LocusId arg0);
		QAndroidJniObject setBadgeIconType(jint arg0);
		QAndroidJniObject setGroupAlertBehavior(jint arg0);
		QAndroidJniObject setBubbleMetadata(__jni_impl::android::app::Notification_BubbleMetadata arg0);
		QAndroidJniObject setChannelId(jstring arg0);
		QAndroidJniObject setTimeoutAfter(jlong arg0);
		QAndroidJniObject setWhen(jlong arg0);
		QAndroidJniObject setShowWhen(jboolean arg0);
		QAndroidJniObject setUsesChronometer(jboolean arg0);
		QAndroidJniObject setSmallIcon(jint arg0, jint arg1);
		QAndroidJniObject setSmallIcon(jint arg0);
		QAndroidJniObject setSmallIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		QAndroidJniObject setContentTitle(jstring arg0);
		QAndroidJniObject setContentText(jstring arg0);
		QAndroidJniObject setSubText(jstring arg0);
		QAndroidJniObject setSettingsText(jstring arg0);
		QAndroidJniObject setRemoteInputHistory(jarray arg0);
		QAndroidJniObject setContentInfo(jstring arg0);
		QAndroidJniObject setContent(__jni_impl::android::widget::RemoteViews arg0);
		QAndroidJniObject setCustomContentView(__jni_impl::android::widget::RemoteViews arg0);
		QAndroidJniObject setCustomBigContentView(__jni_impl::android::widget::RemoteViews arg0);
		QAndroidJniObject setCustomHeadsUpContentView(__jni_impl::android::widget::RemoteViews arg0);
		QAndroidJniObject setContentIntent(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject setDeleteIntent(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject setFullScreenIntent(__jni_impl::android::app::PendingIntent arg0, jboolean arg1);
		QAndroidJniObject setTicker(jstring arg0);
		QAndroidJniObject setTicker(jstring arg0, __jni_impl::android::widget::RemoteViews arg1);
		QAndroidJniObject setLargeIcon(__jni_impl::android::graphics::Bitmap arg0);
		QAndroidJniObject setLargeIcon(__jni_impl::android::graphics::drawable::Icon arg0);
		QAndroidJniObject setVibrate(jlongArray arg0);
		QAndroidJniObject setLights(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject setOngoing(jboolean arg0);
		QAndroidJniObject setColorized(jboolean arg0);
		QAndroidJniObject setOnlyAlertOnce(jboolean arg0);
		QAndroidJniObject setAutoCancel(jboolean arg0);
		QAndroidJniObject setLocalOnly(jboolean arg0);
		QAndroidJniObject setDefaults(jint arg0);
		QAndroidJniObject setCategory(jstring arg0);
		QAndroidJniObject addPerson(jstring arg0);
		QAndroidJniObject addPerson(__jni_impl::android::app::Person arg0);
		QAndroidJniObject setGroupSummary(jboolean arg0);
		QAndroidJniObject setSortKey(jstring arg0);
		QAndroidJniObject addExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setActions(jarray arg0);
		QAndroidJniObject setPublicVersion(__jni_impl::android::app::Notification arg0);
		QAndroidJniObject createContentView();
		QAndroidJniObject createBigContentView();
		QAndroidJniObject createHeadsUpContentView();
		static QAndroidJniObject recoverBuilder(__jni_impl::android::content::Context arg0, __jni_impl::android::app::Notification arg1);
		QAndroidJniObject setAllowSystemGeneratedContextualActions(jboolean arg0);
		QAndroidJniObject extend(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setNumber(jint arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "Notification.hpp"
#include "Notification_Style.hpp"
#include "../os/Bundle.hpp"
#include "../net/Uri.hpp"
#include "../media/AudioAttributes.hpp"
#include "PendingIntent.hpp"
#include "Notification_Action.hpp"
#include "../content/LocusId.hpp"
#include "Notification_BubbleMetadata.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../widget/RemoteViews.hpp"
#include "../graphics/Bitmap.hpp"
#include "Person.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Notification_Builder::__constructor(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Builder",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Notification_Builder::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_Builder::setPriority(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPriority",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification;"
		);
	}
	QAndroidJniObject Notification_Builder::setColor(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::getStyle()
	{
		return __thiz.callObjectMethod(
			"getStyle",
			"()Landroid/app/Notification$Style;"
		);
	}
	QAndroidJniObject Notification_Builder::setStyle(__jni_impl::android::app::Notification_Style arg0)
	{
		return __thiz.callObjectMethod(
			"setStyle",
			"(Landroid/app/Notification$Style;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setProgress(jint arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"setProgress",
			"(IIZ)Landroid/app/Notification$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Notification_Builder::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Notification_Builder::getNotification()
	{
		return __thiz.callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	QAndroidJniObject Notification_Builder::setGroup(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setGroup",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setSound(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setSound(__jni_impl::android::net::Uri arg0, __jni_impl::android::media::AudioAttributes arg1)
	{
		return __thiz.callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;Landroid/media/AudioAttributes;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setSound(__jni_impl::android::net::Uri arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;I)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Notification_Builder::setChronometerCountDown(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setChronometerCountDown",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::addAction(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::addAction(__jni_impl::android::app::Notification_Action arg0)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(Landroid/app/Notification$Action;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setVisibility(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setVisibility",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setShortcutId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setShortcutId",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setLocusId(__jni_impl::android::content::LocusId arg0)
	{
		return __thiz.callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setBadgeIconType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBadgeIconType",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setGroupAlertBehavior(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setGroupAlertBehavior",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setBubbleMetadata(__jni_impl::android::app::Notification_BubbleMetadata arg0)
	{
		return __thiz.callObjectMethod(
			"setBubbleMetadata",
			"(Landroid/app/Notification$BubbleMetadata;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setChannelId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setChannelId",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setTimeoutAfter(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setTimeoutAfter",
			"(J)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setWhen(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setWhen",
			"(J)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setShowWhen(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setShowWhen",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setUsesChronometer(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUsesChronometer",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setSmallIcon(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setSmallIcon",
			"(II)Landroid/app/Notification$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Notification_Builder::setSmallIcon(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSmallIcon",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setSmallIcon(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setSmallIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setContentTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setContentText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setContentText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setSubText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSubText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setSettingsText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSettingsText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setRemoteInputHistory(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setRemoteInputHistory",
			"([Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setContentInfo(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setContentInfo",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setContent(__jni_impl::android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setContent",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setCustomContentView(__jni_impl::android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setCustomBigContentView(__jni_impl::android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomBigContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setCustomHeadsUpContentView(__jni_impl::android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomHeadsUpContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setContentIntent(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setContentIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setDeleteIntent(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setFullScreenIntent(__jni_impl::android::app::PendingIntent arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"setFullScreenIntent",
			"(Landroid/app/PendingIntent;Z)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Notification_Builder::setTicker(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTicker",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setTicker(jstring arg0, __jni_impl::android::widget::RemoteViews arg1)
	{
		return __thiz.callObjectMethod(
			"setTicker",
			"(Ljava/lang/CharSequence;Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setLargeIcon(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setLargeIcon(__jni_impl::android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setVibrate(jlongArray arg0)
	{
		return __thiz.callObjectMethod(
			"setVibrate",
			"([J)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setLights(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"setLights",
			"(III)Landroid/app/Notification$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Notification_Builder::setOngoing(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setOngoing",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setColorized(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setColorized",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setOnlyAlertOnce(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setOnlyAlertOnce",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setAutoCancel(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAutoCancel",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setLocalOnly(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLocalOnly",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setDefaults(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setDefaults",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setCategory(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setCategory",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::addPerson(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addPerson",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::addPerson(__jni_impl::android::app::Person arg0)
	{
		return __thiz.callObjectMethod(
			"addPerson",
			"(Landroid/app/Person;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setGroupSummary(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setGroupSummary",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setSortKey(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSortKey",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::addExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setActions(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setActions",
			"([Landroid/app/Notification$Action;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setPublicVersion(__jni_impl::android::app::Notification arg0)
	{
		return __thiz.callObjectMethod(
			"setPublicVersion",
			"(Landroid/app/Notification;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::createContentView()
	{
		return __thiz.callObjectMethod(
			"createContentView",
			"()Landroid/widget/RemoteViews;"
		);
	}
	QAndroidJniObject Notification_Builder::createBigContentView()
	{
		return __thiz.callObjectMethod(
			"createBigContentView",
			"()Landroid/widget/RemoteViews;"
		);
	}
	QAndroidJniObject Notification_Builder::createHeadsUpContentView()
	{
		return __thiz.callObjectMethod(
			"createHeadsUpContentView",
			"()Landroid/widget/RemoteViews;"
		);
	}
	QAndroidJniObject Notification_Builder::recoverBuilder(__jni_impl::android::content::Context arg0, __jni_impl::android::app::Notification arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Notification$Builder",
			"recoverBuilder",
			"(Landroid/content/Context;Landroid/app/Notification;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setAllowSystemGeneratedContextualActions(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowSystemGeneratedContextualActions",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::extend(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Extender;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setNumber(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setNumber",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_Builder : public __jni_impl::android::app::Notification_Builder
	{
	public:
		Notification_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Notification_Builder(__jni_impl::android::content::Context arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Notification_Builder(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_BUILDER

