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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Notification_Builder(QAndroidJniObject obj);
		
		// Constructors
		Notification_Builder(android::content::Context arg0);
		Notification_Builder(android::content::Context arg0, jstring arg1);
		
		// Methods
		static android::app::Notification_Builder recoverBuilder(android::content::Context arg0, android::app::Notification arg1);
		android::app::Notification_Builder addAction(android::app::Notification_Action arg0);
		android::app::Notification_Builder addAction(jint arg0, jstring arg1, android::app::PendingIntent arg2);
		android::app::Notification_Builder addExtras(android::os::Bundle arg0);
		android::app::Notification_Builder addPerson(android::app::Person arg0);
		android::app::Notification_Builder addPerson(jstring arg0);
		android::app::Notification build();
		android::widget::RemoteViews createBigContentView();
		android::widget::RemoteViews createContentView();
		android::widget::RemoteViews createHeadsUpContentView();
		android::app::Notification_Builder extend(__JniBaseClass arg0);
		android::os::Bundle getExtras();
		android::app::Notification getNotification();
		android::app::Notification_Style getStyle();
		android::app::Notification_Builder setActions(jarray arg0);
		android::app::Notification_Builder setAutoCancel(jboolean arg0);
		android::app::Notification_Builder setBadgeIconType(jint arg0);
		android::app::Notification_Builder setCategory(jstring arg0);
		android::app::Notification_Builder setChannelId(jstring arg0);
		android::app::Notification_Builder setChronometerCountDown(jboolean arg0);
		android::app::Notification_Builder setColor(jint arg0);
		android::app::Notification_Builder setColorized(jboolean arg0);
		android::app::Notification_Builder setContent(android::widget::RemoteViews arg0);
		android::app::Notification_Builder setContentInfo(jstring arg0);
		android::app::Notification_Builder setContentIntent(android::app::PendingIntent arg0);
		android::app::Notification_Builder setContentText(jstring arg0);
		android::app::Notification_Builder setContentTitle(jstring arg0);
		android::app::Notification_Builder setCustomBigContentView(android::widget::RemoteViews arg0);
		android::app::Notification_Builder setCustomContentView(android::widget::RemoteViews arg0);
		android::app::Notification_Builder setCustomHeadsUpContentView(android::widget::RemoteViews arg0);
		android::app::Notification_Builder setDefaults(jint arg0);
		android::app::Notification_Builder setDeleteIntent(android::app::PendingIntent arg0);
		android::app::Notification_Builder setExtras(android::os::Bundle arg0);
		android::app::Notification_Builder setFullScreenIntent(android::app::PendingIntent arg0, jboolean arg1);
		android::app::Notification_Builder setGroup(jstring arg0);
		android::app::Notification_Builder setGroupAlertBehavior(jint arg0);
		android::app::Notification_Builder setGroupSummary(jboolean arg0);
		android::app::Notification_Builder setLargeIcon(android::graphics::Bitmap arg0);
		android::app::Notification_Builder setLargeIcon(android::graphics::drawable::Icon arg0);
		android::app::Notification_Builder setLights(jint arg0, jint arg1, jint arg2);
		android::app::Notification_Builder setLocalOnly(jboolean arg0);
		android::app::Notification_Builder setNumber(jint arg0);
		android::app::Notification_Builder setOngoing(jboolean arg0);
		android::app::Notification_Builder setOnlyAlertOnce(jboolean arg0);
		android::app::Notification_Builder setPriority(jint arg0);
		android::app::Notification_Builder setProgress(jint arg0, jint arg1, jboolean arg2);
		android::app::Notification_Builder setPublicVersion(android::app::Notification arg0);
		android::app::Notification_Builder setRemoteInputHistory(jarray arg0);
		android::app::Notification_Builder setSettingsText(jstring arg0);
		android::app::Notification_Builder setShortcutId(jstring arg0);
		android::app::Notification_Builder setShowWhen(jboolean arg0);
		android::app::Notification_Builder setSmallIcon(android::graphics::drawable::Icon arg0);
		android::app::Notification_Builder setSmallIcon(jint arg0);
		android::app::Notification_Builder setSmallIcon(jint arg0, jint arg1);
		android::app::Notification_Builder setSortKey(jstring arg0);
		android::app::Notification_Builder setSound(android::net::Uri arg0);
		android::app::Notification_Builder setSound(android::net::Uri arg0, android::media::AudioAttributes arg1);
		android::app::Notification_Builder setSound(android::net::Uri arg0, jint arg1);
		android::app::Notification_Builder setStyle(android::app::Notification_Style arg0);
		android::app::Notification_Builder setSubText(jstring arg0);
		android::app::Notification_Builder setTicker(jstring arg0);
		android::app::Notification_Builder setTicker(jstring arg0, android::widget::RemoteViews arg1);
		android::app::Notification_Builder setTimeoutAfter(jlong arg0);
		android::app::Notification_Builder setUsesChronometer(jboolean arg0);
		android::app::Notification_Builder setVibrate(jlongArray arg0);
		android::app::Notification_Builder setVisibility(jint arg0);
		android::app::Notification_Builder setWhen(jlong arg0);
	};
} // namespace android::app

