#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Notification;
}
namespace android::app
{
	class Notification_Action;
}
namespace android::app
{
	class Notification_BubbleMetadata;
}
namespace android::app
{
	class Notification_Style;
}
namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class Person;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class LocusId;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::media
{
	class AudioAttributes;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::app
{
	class Notification_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		Notification_Builder(QAndroidJniObject obj);
		// Constructors
		Notification_Builder(android::content::Context arg0);
		Notification_Builder(android::content::Context arg0, jstring arg1);
		Notification_Builder() = default;
		
		// Methods
		static QAndroidJniObject recoverBuilder(android::content::Context arg0, android::app::Notification arg1);
		QAndroidJniObject addAction(android::app::Notification_Action arg0);
		QAndroidJniObject addAction(jint arg0, jstring arg1, android::app::PendingIntent arg2);
		QAndroidJniObject addExtras(android::os::Bundle arg0);
		QAndroidJniObject addPerson(android::app::Person arg0);
		QAndroidJniObject addPerson(jstring arg0);
		QAndroidJniObject build();
		QAndroidJniObject createBigContentView();
		QAndroidJniObject createContentView();
		QAndroidJniObject createHeadsUpContentView();
		QAndroidJniObject extend(__JniBaseClass arg0);
		QAndroidJniObject getExtras();
		QAndroidJniObject getNotification();
		QAndroidJniObject getStyle();
		QAndroidJniObject setActions(jarray arg0);
		QAndroidJniObject setAllowSystemGeneratedContextualActions(jboolean arg0);
		QAndroidJniObject setAutoCancel(jboolean arg0);
		QAndroidJniObject setBadgeIconType(jint arg0);
		QAndroidJniObject setBubbleMetadata(android::app::Notification_BubbleMetadata arg0);
		QAndroidJniObject setCategory(jstring arg0);
		QAndroidJniObject setChannelId(jstring arg0);
		QAndroidJniObject setChronometerCountDown(jboolean arg0);
		QAndroidJniObject setColor(jint arg0);
		QAndroidJniObject setColorized(jboolean arg0);
		QAndroidJniObject setContent(android::widget::RemoteViews arg0);
		QAndroidJniObject setContentInfo(jstring arg0);
		QAndroidJniObject setContentIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setContentText(jstring arg0);
		QAndroidJniObject setContentTitle(jstring arg0);
		QAndroidJniObject setCustomBigContentView(android::widget::RemoteViews arg0);
		QAndroidJniObject setCustomContentView(android::widget::RemoteViews arg0);
		QAndroidJniObject setCustomHeadsUpContentView(android::widget::RemoteViews arg0);
		QAndroidJniObject setDefaults(jint arg0);
		QAndroidJniObject setDeleteIntent(android::app::PendingIntent arg0);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setFullScreenIntent(android::app::PendingIntent arg0, jboolean arg1);
		QAndroidJniObject setGroup(jstring arg0);
		QAndroidJniObject setGroupAlertBehavior(jint arg0);
		QAndroidJniObject setGroupSummary(jboolean arg0);
		QAndroidJniObject setLargeIcon(android::graphics::Bitmap arg0);
		QAndroidJniObject setLargeIcon(android::graphics::drawable::Icon arg0);
		QAndroidJniObject setLights(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject setLocalOnly(jboolean arg0);
		QAndroidJniObject setLocusId(android::content::LocusId arg0);
		QAndroidJniObject setNumber(jint arg0);
		QAndroidJniObject setOngoing(jboolean arg0);
		QAndroidJniObject setOnlyAlertOnce(jboolean arg0);
		QAndroidJniObject setPriority(jint arg0);
		QAndroidJniObject setProgress(jint arg0, jint arg1, jboolean arg2);
		QAndroidJniObject setPublicVersion(android::app::Notification arg0);
		QAndroidJniObject setRemoteInputHistory(jarray arg0);
		QAndroidJniObject setSettingsText(jstring arg0);
		QAndroidJniObject setShortcutId(jstring arg0);
		QAndroidJniObject setShowWhen(jboolean arg0);
		QAndroidJniObject setSmallIcon(android::graphics::drawable::Icon arg0);
		QAndroidJniObject setSmallIcon(jint arg0);
		QAndroidJniObject setSmallIcon(jint arg0, jint arg1);
		QAndroidJniObject setSortKey(jstring arg0);
		QAndroidJniObject setSound(android::net::Uri arg0);
		QAndroidJniObject setSound(android::net::Uri arg0, android::media::AudioAttributes arg1);
		QAndroidJniObject setSound(android::net::Uri arg0, jint arg1);
		QAndroidJniObject setStyle(android::app::Notification_Style arg0);
		QAndroidJniObject setSubText(jstring arg0);
		QAndroidJniObject setTicker(jstring arg0);
		QAndroidJniObject setTicker(jstring arg0, android::widget::RemoteViews arg1);
		QAndroidJniObject setTimeoutAfter(jlong arg0);
		QAndroidJniObject setUsesChronometer(jboolean arg0);
		QAndroidJniObject setVibrate(jlongArray arg0);
		QAndroidJniObject setVisibility(jint arg0);
		QAndroidJniObject setWhen(jlong arg0);
	};
} // namespace android::app

