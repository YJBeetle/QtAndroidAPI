#pragma once

#include "../../JObject.hpp"

class JLongArray;
class JArray;
class JArray;
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
class JString;
class JString;

namespace android::app
{
	class Notification_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_Builder(QAndroidJniObject obj);
		
		// Constructors
		Notification_Builder(android::content::Context arg0);
		Notification_Builder(android::content::Context arg0, JString arg1);
		
		// Methods
		static android::app::Notification_Builder recoverBuilder(android::content::Context arg0, android::app::Notification arg1);
		android::app::Notification_Builder addAction(android::app::Notification_Action arg0) const;
		android::app::Notification_Builder addAction(jint arg0, JString arg1, android::app::PendingIntent arg2) const;
		android::app::Notification_Builder addExtras(android::os::Bundle arg0) const;
		android::app::Notification_Builder addPerson(android::app::Person arg0) const;
		android::app::Notification_Builder addPerson(JString arg0) const;
		android::app::Notification build() const;
		android::widget::RemoteViews createBigContentView() const;
		android::widget::RemoteViews createContentView() const;
		android::widget::RemoteViews createHeadsUpContentView() const;
		android::app::Notification_Builder extend(JObject arg0) const;
		android::os::Bundle getExtras() const;
		android::app::Notification getNotification() const;
		android::app::Notification_Style getStyle() const;
		android::app::Notification_Builder setActions(JArray arg0) const;
		android::app::Notification_Builder setAllowSystemGeneratedContextualActions(jboolean arg0) const;
		android::app::Notification_Builder setAutoCancel(jboolean arg0) const;
		android::app::Notification_Builder setBadgeIconType(jint arg0) const;
		android::app::Notification_Builder setBubbleMetadata(android::app::Notification_BubbleMetadata arg0) const;
		android::app::Notification_Builder setCategory(JString arg0) const;
		android::app::Notification_Builder setChannelId(JString arg0) const;
		android::app::Notification_Builder setChronometerCountDown(jboolean arg0) const;
		android::app::Notification_Builder setColor(jint arg0) const;
		android::app::Notification_Builder setColorized(jboolean arg0) const;
		android::app::Notification_Builder setContent(android::widget::RemoteViews arg0) const;
		android::app::Notification_Builder setContentInfo(JString arg0) const;
		android::app::Notification_Builder setContentIntent(android::app::PendingIntent arg0) const;
		android::app::Notification_Builder setContentText(JString arg0) const;
		android::app::Notification_Builder setContentTitle(JString arg0) const;
		android::app::Notification_Builder setCustomBigContentView(android::widget::RemoteViews arg0) const;
		android::app::Notification_Builder setCustomContentView(android::widget::RemoteViews arg0) const;
		android::app::Notification_Builder setCustomHeadsUpContentView(android::widget::RemoteViews arg0) const;
		android::app::Notification_Builder setDefaults(jint arg0) const;
		android::app::Notification_Builder setDeleteIntent(android::app::PendingIntent arg0) const;
		android::app::Notification_Builder setExtras(android::os::Bundle arg0) const;
		android::app::Notification_Builder setFullScreenIntent(android::app::PendingIntent arg0, jboolean arg1) const;
		android::app::Notification_Builder setGroup(JString arg0) const;
		android::app::Notification_Builder setGroupAlertBehavior(jint arg0) const;
		android::app::Notification_Builder setGroupSummary(jboolean arg0) const;
		android::app::Notification_Builder setLargeIcon(android::graphics::Bitmap arg0) const;
		android::app::Notification_Builder setLargeIcon(android::graphics::drawable::Icon arg0) const;
		android::app::Notification_Builder setLights(jint arg0, jint arg1, jint arg2) const;
		android::app::Notification_Builder setLocalOnly(jboolean arg0) const;
		android::app::Notification_Builder setLocusId(android::content::LocusId arg0) const;
		android::app::Notification_Builder setNumber(jint arg0) const;
		android::app::Notification_Builder setOngoing(jboolean arg0) const;
		android::app::Notification_Builder setOnlyAlertOnce(jboolean arg0) const;
		android::app::Notification_Builder setPriority(jint arg0) const;
		android::app::Notification_Builder setProgress(jint arg0, jint arg1, jboolean arg2) const;
		android::app::Notification_Builder setPublicVersion(android::app::Notification arg0) const;
		android::app::Notification_Builder setRemoteInputHistory(JArray arg0) const;
		android::app::Notification_Builder setSettingsText(JString arg0) const;
		android::app::Notification_Builder setShortcutId(JString arg0) const;
		android::app::Notification_Builder setShowWhen(jboolean arg0) const;
		android::app::Notification_Builder setSmallIcon(android::graphics::drawable::Icon arg0) const;
		android::app::Notification_Builder setSmallIcon(jint arg0) const;
		android::app::Notification_Builder setSmallIcon(jint arg0, jint arg1) const;
		android::app::Notification_Builder setSortKey(JString arg0) const;
		android::app::Notification_Builder setSound(android::net::Uri arg0) const;
		android::app::Notification_Builder setSound(android::net::Uri arg0, android::media::AudioAttributes arg1) const;
		android::app::Notification_Builder setSound(android::net::Uri arg0, jint arg1) const;
		android::app::Notification_Builder setStyle(android::app::Notification_Style arg0) const;
		android::app::Notification_Builder setSubText(JString arg0) const;
		android::app::Notification_Builder setTicker(JString arg0) const;
		android::app::Notification_Builder setTicker(JString arg0, android::widget::RemoteViews arg1) const;
		android::app::Notification_Builder setTimeoutAfter(jlong arg0) const;
		android::app::Notification_Builder setUsesChronometer(jboolean arg0) const;
		android::app::Notification_Builder setVibrate(JLongArray arg0) const;
		android::app::Notification_Builder setVisibility(jint arg0) const;
		android::app::Notification_Builder setWhen(jlong arg0) const;
	};
} // namespace android::app

