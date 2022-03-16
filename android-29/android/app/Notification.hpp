#pragma once

#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "./Notification_BubbleMetadata.def.hpp"
#include "./PendingIntent.def.hpp"
#include "../content/LocusId.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../media/AudioAttributes.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../widget/RemoteViews.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Notification.def.hpp"

namespace android::app
{
	// Fields
	inline android::media::AudioAttributes Notification::AUDIO_ATTRIBUTES_DEFAULT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"AUDIO_ATTRIBUTES_DEFAULT",
			"Landroid/media/AudioAttributes;"
		);
	}
	inline jint Notification::BADGE_ICON_LARGE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_LARGE"
		);
	}
	inline jint Notification::BADGE_ICON_NONE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_NONE"
		);
	}
	inline jint Notification::BADGE_ICON_SMALL()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_SMALL"
		);
	}
	inline JString Notification::CATEGORY_ALARM()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_ALARM",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_CALL()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_CALL",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_EMAIL()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_EMAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_ERROR()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_ERROR",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_EVENT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_EVENT",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_MESSAGE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_MESSAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_NAVIGATION()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_NAVIGATION",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_PROGRESS()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_PROGRESS",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_PROMO()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_PROMO",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_RECOMMENDATION()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_RECOMMENDATION",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_REMINDER()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_REMINDER",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_SERVICE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SERVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_SOCIAL()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SOCIAL",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_STATUS()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_STATUS",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_SYSTEM()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SYSTEM",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::CATEGORY_TRANSPORT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_TRANSPORT",
			"Ljava/lang/String;"
		);
	}
	inline jint Notification::COLOR_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"COLOR_DEFAULT"
		);
	}
	inline JObject Notification::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Notification::DEFAULT_ALL()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_ALL"
		);
	}
	inline jint Notification::DEFAULT_LIGHTS()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_LIGHTS"
		);
	}
	inline jint Notification::DEFAULT_SOUND()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_SOUND"
		);
	}
	inline jint Notification::DEFAULT_VIBRATE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_VIBRATE"
		);
	}
	inline JString Notification::EXTRA_AUDIO_CONTENTS_URI()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_AUDIO_CONTENTS_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_BACKGROUND_IMAGE_URI()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_BACKGROUND_IMAGE_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_BIG_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_BIG_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_CHANNEL_GROUP_ID()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHANNEL_GROUP_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_CHRONOMETER_COUNT_DOWN()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHRONOMETER_COUNT_DOWN",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_COLORIZED()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_COLORIZED",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_COMPACT_ACTIONS()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_COMPACT_ACTIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_CONVERSATION_TITLE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CONVERSATION_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_HISTORIC_MESSAGES()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_HISTORIC_MESSAGES",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_INFO_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_INFO_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_IS_GROUP_CONVERSATION()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_IS_GROUP_CONVERSATION",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_LARGE_ICON()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_LARGE_ICON",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_LARGE_ICON_BIG()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_LARGE_ICON_BIG",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_MEDIA_SESSION()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MEDIA_SESSION",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_MESSAGES()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MESSAGES",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_MESSAGING_PERSON()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MESSAGING_PERSON",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_NOTIFICATION_ID()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_NOTIFICATION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_NOTIFICATION_TAG()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_NOTIFICATION_TAG",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_PEOPLE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PEOPLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_PEOPLE_LIST()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PEOPLE_LIST",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_PICTURE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PICTURE",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_PROGRESS()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_PROGRESS_INDETERMINATE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS_INDETERMINATE",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_PROGRESS_MAX()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_REMOTE_INPUT_DRAFT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_REMOTE_INPUT_DRAFT",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_REMOTE_INPUT_HISTORY()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_REMOTE_INPUT_HISTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_SELF_DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SELF_DISPLAY_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_SHOW_CHRONOMETER()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SHOW_CHRONOMETER",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_SHOW_WHEN()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SHOW_WHEN",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_SMALL_ICON()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SMALL_ICON",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_SUB_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SUB_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_SUMMARY_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SUMMARY_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_TEMPLATE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEMPLATE",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_TEXT_LINES()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEXT_LINES",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_TITLE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString Notification::EXTRA_TITLE_BIG()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TITLE_BIG",
			"Ljava/lang/String;"
		);
	}
	inline jint Notification::FLAG_AUTO_CANCEL()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_AUTO_CANCEL"
		);
	}
	inline jint Notification::FLAG_BUBBLE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_BUBBLE"
		);
	}
	inline jint Notification::FLAG_FOREGROUND_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_FOREGROUND_SERVICE"
		);
	}
	inline jint Notification::FLAG_GROUP_SUMMARY()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_GROUP_SUMMARY"
		);
	}
	inline jint Notification::FLAG_HIGH_PRIORITY()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_HIGH_PRIORITY"
		);
	}
	inline jint Notification::FLAG_INSISTENT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_INSISTENT"
		);
	}
	inline jint Notification::FLAG_LOCAL_ONLY()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_LOCAL_ONLY"
		);
	}
	inline jint Notification::FLAG_NO_CLEAR()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_NO_CLEAR"
		);
	}
	inline jint Notification::FLAG_ONGOING_EVENT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_ONGOING_EVENT"
		);
	}
	inline jint Notification::FLAG_ONLY_ALERT_ONCE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_ONLY_ALERT_ONCE"
		);
	}
	inline jint Notification::FLAG_SHOW_LIGHTS()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_SHOW_LIGHTS"
		);
	}
	inline jint Notification::GROUP_ALERT_ALL()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_ALL"
		);
	}
	inline jint Notification::GROUP_ALERT_CHILDREN()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_CHILDREN"
		);
	}
	inline jint Notification::GROUP_ALERT_SUMMARY()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_SUMMARY"
		);
	}
	inline JString Notification::INTENT_CATEGORY_NOTIFICATION_PREFERENCES()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"INTENT_CATEGORY_NOTIFICATION_PREFERENCES",
			"Ljava/lang/String;"
		);
	}
	inline jint Notification::PRIORITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_DEFAULT"
		);
	}
	inline jint Notification::PRIORITY_HIGH()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_HIGH"
		);
	}
	inline jint Notification::PRIORITY_LOW()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_LOW"
		);
	}
	inline jint Notification::PRIORITY_MAX()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_MAX"
		);
	}
	inline jint Notification::PRIORITY_MIN()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_MIN"
		);
	}
	inline jint Notification::STREAM_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"STREAM_DEFAULT"
		);
	}
	inline jint Notification::VISIBILITY_PRIVATE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_PRIVATE"
		);
	}
	inline jint Notification::VISIBILITY_PUBLIC()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_PUBLIC"
		);
	}
	inline jint Notification::VISIBILITY_SECRET()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_SECRET"
		);
	}
	inline JArray Notification::actions()
	{
		return getObjectField(
			"actions",
			"[Landroid/app/Notification$Action;"
		);
	}
	inline android::media::AudioAttributes Notification::audioAttributes()
	{
		return getObjectField(
			"audioAttributes",
			"Landroid/media/AudioAttributes;"
		);
	}
	inline jint Notification::audioStreamType()
	{
		return getField<jint>(
			"audioStreamType"
		);
	}
	inline android::widget::RemoteViews Notification::bigContentView()
	{
		return getObjectField(
			"bigContentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	inline JString Notification::category()
	{
		return getObjectField(
			"category",
			"Ljava/lang/String;"
		);
	}
	inline jint Notification::color()
	{
		return getField<jint>(
			"color"
		);
	}
	inline android::app::PendingIntent Notification::contentIntent()
	{
		return getObjectField(
			"contentIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	inline android::widget::RemoteViews Notification::contentView()
	{
		return getObjectField(
			"contentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	inline jint Notification::defaults()
	{
		return getField<jint>(
			"defaults"
		);
	}
	inline android::app::PendingIntent Notification::deleteIntent()
	{
		return getObjectField(
			"deleteIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	inline android::os::Bundle Notification::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	inline jint Notification::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline android::app::PendingIntent Notification::fullScreenIntent()
	{
		return getObjectField(
			"fullScreenIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	inline android::widget::RemoteViews Notification::headsUpContentView()
	{
		return getObjectField(
			"headsUpContentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	inline jint Notification::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	inline jint Notification::iconLevel()
	{
		return getField<jint>(
			"iconLevel"
		);
	}
	inline android::graphics::Bitmap Notification::largeIcon()
	{
		return getObjectField(
			"largeIcon",
			"Landroid/graphics/Bitmap;"
		);
	}
	inline jint Notification::ledARGB()
	{
		return getField<jint>(
			"ledARGB"
		);
	}
	inline jint Notification::ledOffMS()
	{
		return getField<jint>(
			"ledOffMS"
		);
	}
	inline jint Notification::ledOnMS()
	{
		return getField<jint>(
			"ledOnMS"
		);
	}
	inline jint Notification::number()
	{
		return getField<jint>(
			"number"
		);
	}
	inline jint Notification::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	inline android::app::Notification Notification::publicVersion()
	{
		return getObjectField(
			"publicVersion",
			"Landroid/app/Notification;"
		);
	}
	inline android::net::Uri Notification::sound()
	{
		return getObjectField(
			"sound",
			"Landroid/net/Uri;"
		);
	}
	inline JString Notification::tickerText()
	{
		return getObjectField(
			"tickerText",
			"Ljava/lang/CharSequence;"
		);
	}
	inline android::widget::RemoteViews Notification::tickerView()
	{
		return getObjectField(
			"tickerView",
			"Landroid/widget/RemoteViews;"
		);
	}
	inline JLongArray Notification::vibrate()
	{
		return getObjectField(
			"vibrate",
			"[J"
		);
	}
	inline jint Notification::visibility()
	{
		return getField<jint>(
			"visibility"
		);
	}
	inline jlong Notification::when()
	{
		return getField<jlong>(
			"when"
		);
	}
	
	// Constructors
	inline Notification::Notification()
		: JObject(
			"android.app.Notification",
			"()V"
		) {}
	inline Notification::Notification(android::os::Parcel arg0)
		: JObject(
			"android.app.Notification",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline Notification::Notification(jint arg0, JString arg1, jlong arg2)
		: JObject(
			"android.app.Notification",
			"(ILjava/lang/CharSequence;J)V",
			arg0,
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline android::app::Notification Notification::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification;"
		);
	}
	inline jint Notification::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Notification::getAllowSystemGeneratedContextualActions() const
	{
		return callMethod<jboolean>(
			"getAllowSystemGeneratedContextualActions",
			"()Z"
		);
	}
	inline jint Notification::getBadgeIconType() const
	{
		return callMethod<jint>(
			"getBadgeIconType",
			"()I"
		);
	}
	inline android::app::Notification_BubbleMetadata Notification::getBubbleMetadata() const
	{
		return callObjectMethod(
			"getBubbleMetadata",
			"()Landroid/app/Notification$BubbleMetadata;"
		);
	}
	inline JString Notification::getChannelId() const
	{
		return callObjectMethod(
			"getChannelId",
			"()Ljava/lang/String;"
		);
	}
	inline JString Notification::getGroup() const
	{
		return callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;"
		);
	}
	inline jint Notification::getGroupAlertBehavior() const
	{
		return callMethod<jint>(
			"getGroupAlertBehavior",
			"()I"
		);
	}
	inline android::graphics::drawable::Icon Notification::getLargeIcon() const
	{
		return callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline android::content::LocusId Notification::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	inline JString Notification::getSettingsText() const
	{
		return callObjectMethod(
			"getSettingsText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Notification::getShortcutId() const
	{
		return callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		);
	}
	inline android::graphics::drawable::Icon Notification::getSmallIcon() const
	{
		return callObjectMethod(
			"getSmallIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString Notification::getSortKey() const
	{
		return callObjectMethod(
			"getSortKey",
			"()Ljava/lang/String;"
		);
	}
	inline jlong Notification::getTimeoutAfter() const
	{
		return callMethod<jlong>(
			"getTimeoutAfter",
			"()J"
		);
	}
	inline JString Notification::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Notification::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

