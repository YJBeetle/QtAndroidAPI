#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./Notification.hpp"
#include "./Notification_Action.hpp"
#include "./Notification_Style.hpp"
#include "./PendingIntent.hpp"
#include "./Person.hpp"
#include "../content/Context.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../media/AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../widget/RemoteViews.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Notification_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	Notification_Builder::Notification_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification_Builder::Notification_Builder(android::content::Context arg0)
		: JObject(
			"android.app.Notification$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Notification_Builder::Notification_Builder(android::content::Context arg0, JString arg1)
		: JObject(
			"android.app.Notification$Builder",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::app::Notification_Builder Notification_Builder::recoverBuilder(android::content::Context arg0, android::app::Notification arg1)
	{
		return callStaticObjectMethod(
			"android.app.Notification$Builder",
			"recoverBuilder",
			"(Landroid/content/Context;Landroid/app/Notification;)Landroid/app/Notification$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::addAction(android::app::Notification_Action arg0) const
	{
		return callObjectMethod(
			"addAction",
			"(Landroid/app/Notification$Action;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::addAction(jint arg0, JString arg1, android::app::PendingIntent arg2) const
	{
		return callObjectMethod(
			"addAction",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::addExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::addPerson(android::app::Person arg0) const
	{
		return callObjectMethod(
			"addPerson",
			"(Landroid/app/Person;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::addPerson(JString arg0) const
	{
		return callObjectMethod(
			"addPerson",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification Notification_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Notification;"
		);
	}
	android::widget::RemoteViews Notification_Builder::createBigContentView() const
	{
		return callObjectMethod(
			"createBigContentView",
			"()Landroid/widget/RemoteViews;"
		);
	}
	android::widget::RemoteViews Notification_Builder::createContentView() const
	{
		return callObjectMethod(
			"createContentView",
			"()Landroid/widget/RemoteViews;"
		);
	}
	android::widget::RemoteViews Notification_Builder::createHeadsUpContentView() const
	{
		return callObjectMethod(
			"createHeadsUpContentView",
			"()Landroid/widget/RemoteViews;"
		);
	}
	android::app::Notification_Builder Notification_Builder::extend(JObject arg0) const
	{
		return callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Extender;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::os::Bundle Notification_Builder::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::app::Notification Notification_Builder::getNotification() const
	{
		return callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	android::app::Notification_Style Notification_Builder::getStyle() const
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/app/Notification$Style;"
		);
	}
	android::app::Notification_Builder Notification_Builder::setActions(JArray arg0) const
	{
		return callObjectMethod(
			"setActions",
			"([Landroid/app/Notification$Action;)Landroid/app/Notification$Builder;",
			arg0.object<jarray>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setAutoCancel(jboolean arg0) const
	{
		return callObjectMethod(
			"setAutoCancel",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setBadgeIconType(jint arg0) const
	{
		return callObjectMethod(
			"setBadgeIconType",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setCategory(JString arg0) const
	{
		return callObjectMethod(
			"setCategory",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setChannelId(JString arg0) const
	{
		return callObjectMethod(
			"setChannelId",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setChronometerCountDown(jboolean arg0) const
	{
		return callObjectMethod(
			"setChronometerCountDown",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setColor(jint arg0) const
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setColorized(jboolean arg0) const
	{
		return callObjectMethod(
			"setColorized",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setContent(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setContent",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setContentInfo(JString arg0) const
	{
		return callObjectMethod(
			"setContentInfo",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setContentIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setContentIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setContentText(JString arg0) const
	{
		return callObjectMethod(
			"setContentText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setContentTitle(JString arg0) const
	{
		return callObjectMethod(
			"setContentTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setCustomBigContentView(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setCustomBigContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setCustomContentView(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setCustomContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setCustomHeadsUpContentView(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setCustomHeadsUpContentView",
			"(Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setDefaults(jint arg0) const
	{
		return callObjectMethod(
			"setDefaults",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setDeleteIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setDeleteIntent",
			"(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setFullScreenIntent(android::app::PendingIntent arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setFullScreenIntent",
			"(Landroid/app/PendingIntent;Z)Landroid/app/Notification$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::app::Notification_Builder Notification_Builder::setGroup(JString arg0) const
	{
		return callObjectMethod(
			"setGroup",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setGroupAlertBehavior(jint arg0) const
	{
		return callObjectMethod(
			"setGroupAlertBehavior",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setGroupSummary(jboolean arg0) const
	{
		return callObjectMethod(
			"setGroupSummary",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setLargeIcon(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/Bitmap;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setLargeIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setLargeIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setLights(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"setLights",
			"(III)Landroid/app/Notification$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::app::Notification_Builder Notification_Builder::setLocalOnly(jboolean arg0) const
	{
		return callObjectMethod(
			"setLocalOnly",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setNumber(jint arg0) const
	{
		return callObjectMethod(
			"setNumber",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setOngoing(jboolean arg0) const
	{
		return callObjectMethod(
			"setOngoing",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setOnlyAlertOnce(jboolean arg0) const
	{
		return callObjectMethod(
			"setOnlyAlertOnce",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setPriority(jint arg0) const
	{
		return callObjectMethod(
			"setPriority",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setProgress(jint arg0, jint arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"setProgress",
			"(IIZ)Landroid/app/Notification$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::app::Notification_Builder Notification_Builder::setPublicVersion(android::app::Notification arg0) const
	{
		return callObjectMethod(
			"setPublicVersion",
			"(Landroid/app/Notification;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setRemoteInputHistory(JArray arg0) const
	{
		return callObjectMethod(
			"setRemoteInputHistory",
			"([Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0.object<jarray>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setSettingsText(JString arg0) const
	{
		return callObjectMethod(
			"setSettingsText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setShortcutId(JString arg0) const
	{
		return callObjectMethod(
			"setShortcutId",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setShowWhen(jboolean arg0) const
	{
		return callObjectMethod(
			"setShowWhen",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setSmallIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setSmallIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setSmallIcon(jint arg0) const
	{
		return callObjectMethod(
			"setSmallIcon",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setSmallIcon(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setSmallIcon",
			"(II)Landroid/app/Notification$Builder;",
			arg0,
			arg1
		);
	}
	android::app::Notification_Builder Notification_Builder::setSortKey(JString arg0) const
	{
		return callObjectMethod(
			"setSortKey",
			"(Ljava/lang/String;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setSound(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setSound(android::net::Uri arg0, android::media::AudioAttributes arg1) const
	{
		return callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;Landroid/media/AudioAttributes;)Landroid/app/Notification$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setSound(android::net::Uri arg0, jint arg1) const
	{
		return callObjectMethod(
			"setSound",
			"(Landroid/net/Uri;I)Landroid/app/Notification$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::app::Notification_Builder Notification_Builder::setStyle(android::app::Notification_Style arg0) const
	{
		return callObjectMethod(
			"setStyle",
			"(Landroid/app/Notification$Style;)Landroid/app/Notification$Builder;",
			arg0.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setSubText(JString arg0) const
	{
		return callObjectMethod(
			"setSubText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setTicker(JString arg0) const
	{
		return callObjectMethod(
			"setTicker",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setTicker(JString arg0, android::widget::RemoteViews arg1) const
	{
		return callObjectMethod(
			"setTicker",
			"(Ljava/lang/CharSequence;Landroid/widget/RemoteViews;)Landroid/app/Notification$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::app::Notification_Builder Notification_Builder::setTimeoutAfter(jlong arg0) const
	{
		return callObjectMethod(
			"setTimeoutAfter",
			"(J)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setUsesChronometer(jboolean arg0) const
	{
		return callObjectMethod(
			"setUsesChronometer",
			"(Z)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setVibrate(JLongArray arg0) const
	{
		return callObjectMethod(
			"setVibrate",
			"([J)Landroid/app/Notification$Builder;",
			arg0.object<jlongArray>()
		);
	}
	android::app::Notification_Builder Notification_Builder::setVisibility(jint arg0) const
	{
		return callObjectMethod(
			"setVisibility",
			"(I)Landroid/app/Notification$Builder;",
			arg0
		);
	}
	android::app::Notification_Builder Notification_Builder::setWhen(jlong arg0) const
	{
		return callObjectMethod(
			"setWhen",
			"(J)Landroid/app/Notification$Builder;",
			arg0
		);
	}
} // namespace android::app

