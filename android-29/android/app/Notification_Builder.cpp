#include "./Notification.hpp"
#include "./Notification_Action.hpp"
#include "./Notification_BubbleMetadata.hpp"
#include "./Notification_Style.hpp"
#include "./PendingIntent.hpp"
#include "./Person.hpp"
#include "../content/Context.hpp"
#include "../content/LocusId.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../media/AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../widget/RemoteViews.hpp"
#include "./Notification_Builder.hpp"

namespace android::app
{
	// Fields
	
	Notification_Builder::Notification_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_Builder::Notification_Builder(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Builder",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Notification_Builder::Notification_Builder(android::content::Context arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Builder",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject Notification_Builder::recoverBuilder(android::content::Context arg0, android::app::Notification arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.Notification$Builder",
			"recoverBuilder",
			"(Landroid/content/Context;Landroid/app/Notification;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::addAction(android::app::Notification_Action arg0)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(Landroid/app/Notification$Action;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::addAction(jint arg0, jstring arg1, android::app::PendingIntent arg2)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::addExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::addPerson(android::app::Person arg0)
	{
		return __thiz.callObjectMethod(
			"addPerson",
			"(Landroid/app/Person;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification;"
		);
	}
	QAndroidJniObject Notification_Builder::createBigContentView()
	{
		return __thiz.callObjectMethod(
			"createBigContentView",
			"()Landroid/widget/RemoteViews;"
		);
	}
	QAndroidJniObject Notification_Builder::createContentView()
	{
		return __thiz.callObjectMethod(
			"createContentView",
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
	QAndroidJniObject Notification_Builder::extend(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Extender;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::getStyle()
	{
		return __thiz.callObjectMethod(
			"getStyle",
			"()Landroid/app/Notification$Style;"
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
	QAndroidJniObject Notification_Builder::setAllowSystemGeneratedContextualActions(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowSystemGeneratedContextualActions",
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
	QAndroidJniObject Notification_Builder::setBadgeIconType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBadgeIconType",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setBubbleMetadata(android::app::Notification_BubbleMetadata arg0)
	{
		return __thiz.callObjectMethod(
			"setBubbleMetadata",
			"(Landroid/app/Notification$BubbleMetadata;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setChannelId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setChannelId",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0
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
	QAndroidJniObject Notification_Builder::setColor(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$Builder;",
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
	QAndroidJniObject Notification_Builder::setContent(android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setContent",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setContentIntent(android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setContentIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setContentTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setCustomBigContentView(android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomBigContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setCustomContentView(android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setCustomHeadsUpContentView(android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomHeadsUpContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setDeleteIntent(android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setFullScreenIntent(android::app::PendingIntent arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"setFullScreenIntent",
			"(Landroid/app/PendingIntent;Z)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object(),
			arg1
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
	QAndroidJniObject Notification_Builder::setGroupAlertBehavior(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setGroupAlertBehavior",
			"(I)Landroid/app/Notification$Builder;",
			arg0
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
	QAndroidJniObject Notification_Builder::setLargeIcon(android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setLargeIcon(android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setLocalOnly(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setLocalOnly",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setLocusId(android::content::LocusId arg0)
	{
		return __thiz.callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/app/Notification$Builder;",
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
	QAndroidJniObject Notification_Builder::setOngoing(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setOngoing",
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
	QAndroidJniObject Notification_Builder::setPriority(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setPriority",
			"(I)Landroid/app/Notification$Builder;",
			arg0
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
	QAndroidJniObject Notification_Builder::setPublicVersion(android::app::Notification arg0)
	{
		return __thiz.callObjectMethod(
			"setPublicVersion",
			"(Landroid/app/Notification;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setSettingsText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSettingsText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
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
	QAndroidJniObject Notification_Builder::setShowWhen(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setShowWhen",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setSmallIcon(android::graphics::drawable::Icon arg0)
	{
		return __thiz.callObjectMethod(
			"setSmallIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setSmallIcon(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setSmallIcon",
			"(II)Landroid/app/Notification$Builder;",
			arg0,
			arg1
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
	QAndroidJniObject Notification_Builder::setSound(android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setSound(android::net::Uri arg0, android::media::AudioAttributes arg1)
	{
		return __thiz.callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;Landroid/media/AudioAttributes;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Builder::setSound(android::net::Uri arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;I)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Notification_Builder::setStyle(android::app::Notification_Style arg0)
	{
		return __thiz.callObjectMethod(
			"setStyle",
			"(Landroid/app/Notification$Style;)Landroid/app/Notification$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setTicker(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTicker",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Builder::setTicker(jstring arg0, android::widget::RemoteViews arg1)
	{
		return __thiz.callObjectMethod(
			"setTicker",
			"(Ljava/lang/CharSequence;Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0,
			arg1.__jniObject().object()
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
	QAndroidJniObject Notification_Builder::setUsesChronometer(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUsesChronometer",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
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
	QAndroidJniObject Notification_Builder::setVisibility(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setVisibility",
			"(I)Landroid/app/Notification$Builder;",
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
} // namespace android::app

