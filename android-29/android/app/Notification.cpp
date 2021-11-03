#include "./Notification_BubbleMetadata.hpp"
#include "./PendingIntent.hpp"
#include "../content/LocusId.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../media/AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../widget/RemoteViews.hpp"
#include "./Notification.hpp"

namespace android::app
{
	// Fields
	android::media::AudioAttributes Notification::AUDIO_ATTRIBUTES_DEFAULT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"AUDIO_ATTRIBUTES_DEFAULT",
			"Landroid/media/AudioAttributes;"
		);
	}
	jint Notification::BADGE_ICON_LARGE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_LARGE"
		);
	}
	jint Notification::BADGE_ICON_NONE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_NONE"
		);
	}
	jint Notification::BADGE_ICON_SMALL()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_SMALL"
		);
	}
	jstring Notification::CATEGORY_ALARM()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_ALARM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_CALL()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_EMAIL()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_ERROR()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_EVENT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_MESSAGE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_NAVIGATION()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_NAVIGATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_PROGRESS()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_PROGRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_PROMO()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_PROMO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_RECOMMENDATION()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_RECOMMENDATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_REMINDER()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_REMINDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_SERVICE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_SOCIAL()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SOCIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_STATUS()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_SYSTEM()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SYSTEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_TRANSPORT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_TRANSPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::COLOR_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"COLOR_DEFAULT"
		);
	}
	JObject Notification::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Notification::DEFAULT_ALL()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_ALL"
		);
	}
	jint Notification::DEFAULT_LIGHTS()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_LIGHTS"
		);
	}
	jint Notification::DEFAULT_SOUND()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_SOUND"
		);
	}
	jint Notification::DEFAULT_VIBRATE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_VIBRATE"
		);
	}
	jstring Notification::EXTRA_AUDIO_CONTENTS_URI()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_AUDIO_CONTENTS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_BACKGROUND_IMAGE_URI()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_BACKGROUND_IMAGE_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_BIG_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_BIG_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_CHANNEL_GROUP_ID()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHANNEL_GROUP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_CHRONOMETER_COUNT_DOWN()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHRONOMETER_COUNT_DOWN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_COLORIZED()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_COLORIZED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_COMPACT_ACTIONS()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_COMPACT_ACTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_CONVERSATION_TITLE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CONVERSATION_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_HISTORIC_MESSAGES()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_HISTORIC_MESSAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_INFO_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_INFO_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_IS_GROUP_CONVERSATION()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_IS_GROUP_CONVERSATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_LARGE_ICON()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_LARGE_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_LARGE_ICON_BIG()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_LARGE_ICON_BIG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_MEDIA_SESSION()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MEDIA_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_MESSAGES()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MESSAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_MESSAGING_PERSON()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MESSAGING_PERSON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_NOTIFICATION_ID()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_NOTIFICATION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_NOTIFICATION_TAG()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_NOTIFICATION_TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PEOPLE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PEOPLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PEOPLE_LIST()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PEOPLE_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PICTURE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PROGRESS()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PROGRESS_INDETERMINATE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS_INDETERMINATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PROGRESS_MAX()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS_MAX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_REMOTE_INPUT_DRAFT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_REMOTE_INPUT_DRAFT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_REMOTE_INPUT_HISTORY()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_REMOTE_INPUT_HISTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SELF_DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SELF_DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SHOW_CHRONOMETER()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SHOW_CHRONOMETER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SHOW_WHEN()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SHOW_WHEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SMALL_ICON()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SMALL_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SUB_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SUB_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SUMMARY_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SUMMARY_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TEMPLATE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEMPLATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TEXT()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TEXT_LINES()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEXT_LINES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TITLE()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TITLE_BIG()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TITLE_BIG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::FLAG_AUTO_CANCEL()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_AUTO_CANCEL"
		);
	}
	jint Notification::FLAG_BUBBLE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_BUBBLE"
		);
	}
	jint Notification::FLAG_FOREGROUND_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_FOREGROUND_SERVICE"
		);
	}
	jint Notification::FLAG_GROUP_SUMMARY()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_GROUP_SUMMARY"
		);
	}
	jint Notification::FLAG_HIGH_PRIORITY()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_HIGH_PRIORITY"
		);
	}
	jint Notification::FLAG_INSISTENT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_INSISTENT"
		);
	}
	jint Notification::FLAG_LOCAL_ONLY()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_LOCAL_ONLY"
		);
	}
	jint Notification::FLAG_NO_CLEAR()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_NO_CLEAR"
		);
	}
	jint Notification::FLAG_ONGOING_EVENT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_ONGOING_EVENT"
		);
	}
	jint Notification::FLAG_ONLY_ALERT_ONCE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_ONLY_ALERT_ONCE"
		);
	}
	jint Notification::FLAG_SHOW_LIGHTS()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"FLAG_SHOW_LIGHTS"
		);
	}
	jint Notification::GROUP_ALERT_ALL()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_ALL"
		);
	}
	jint Notification::GROUP_ALERT_CHILDREN()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_CHILDREN"
		);
	}
	jint Notification::GROUP_ALERT_SUMMARY()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_SUMMARY"
		);
	}
	jstring Notification::INTENT_CATEGORY_NOTIFICATION_PREFERENCES()
	{
		return getStaticObjectField(
			"android.app.Notification",
			"INTENT_CATEGORY_NOTIFICATION_PREFERENCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::PRIORITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_DEFAULT"
		);
	}
	jint Notification::PRIORITY_HIGH()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_HIGH"
		);
	}
	jint Notification::PRIORITY_LOW()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_LOW"
		);
	}
	jint Notification::PRIORITY_MAX()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_MAX"
		);
	}
	jint Notification::PRIORITY_MIN()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_MIN"
		);
	}
	jint Notification::STREAM_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"STREAM_DEFAULT"
		);
	}
	jint Notification::VISIBILITY_PRIVATE()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_PRIVATE"
		);
	}
	jint Notification::VISIBILITY_PUBLIC()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_PUBLIC"
		);
	}
	jint Notification::VISIBILITY_SECRET()
	{
		return getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_SECRET"
		);
	}
	jarray Notification::actions()
	{
		return getObjectField(
			"actions",
			"[Landroid/app/Notification$Action;"
		).object<jarray>();
	}
	android::media::AudioAttributes Notification::audioAttributes()
	{
		return getObjectField(
			"audioAttributes",
			"Landroid/media/AudioAttributes;"
		);
	}
	jint Notification::audioStreamType()
	{
		return getField<jint>(
			"audioStreamType"
		);
	}
	android::widget::RemoteViews Notification::bigContentView()
	{
		return getObjectField(
			"bigContentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	jstring Notification::category()
	{
		return getObjectField(
			"category",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::color()
	{
		return getField<jint>(
			"color"
		);
	}
	android::app::PendingIntent Notification::contentIntent()
	{
		return getObjectField(
			"contentIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	android::widget::RemoteViews Notification::contentView()
	{
		return getObjectField(
			"contentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	jint Notification::defaults()
	{
		return getField<jint>(
			"defaults"
		);
	}
	android::app::PendingIntent Notification::deleteIntent()
	{
		return getObjectField(
			"deleteIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	android::os::Bundle Notification::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	jint Notification::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	android::app::PendingIntent Notification::fullScreenIntent()
	{
		return getObjectField(
			"fullScreenIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	android::widget::RemoteViews Notification::headsUpContentView()
	{
		return getObjectField(
			"headsUpContentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	jint Notification::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	jint Notification::iconLevel()
	{
		return getField<jint>(
			"iconLevel"
		);
	}
	android::graphics::Bitmap Notification::largeIcon()
	{
		return getObjectField(
			"largeIcon",
			"Landroid/graphics/Bitmap;"
		);
	}
	jint Notification::ledARGB()
	{
		return getField<jint>(
			"ledARGB"
		);
	}
	jint Notification::ledOffMS()
	{
		return getField<jint>(
			"ledOffMS"
		);
	}
	jint Notification::ledOnMS()
	{
		return getField<jint>(
			"ledOnMS"
		);
	}
	jint Notification::number()
	{
		return getField<jint>(
			"number"
		);
	}
	jint Notification::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	android::app::Notification Notification::publicVersion()
	{
		return getObjectField(
			"publicVersion",
			"Landroid/app/Notification;"
		);
	}
	android::net::Uri Notification::sound()
	{
		return getObjectField(
			"sound",
			"Landroid/net/Uri;"
		);
	}
	jstring Notification::tickerText()
	{
		return getObjectField(
			"tickerText",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::widget::RemoteViews Notification::tickerView()
	{
		return getObjectField(
			"tickerView",
			"Landroid/widget/RemoteViews;"
		);
	}
	jlongArray Notification::vibrate()
	{
		return getObjectField(
			"vibrate",
			"[J"
		).object<jlongArray>();
	}
	jint Notification::visibility()
	{
		return getField<jint>(
			"visibility"
		);
	}
	jlong Notification::when()
	{
		return getField<jlong>(
			"when"
		);
	}
	
	// QJniObject forward
	Notification::Notification(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Notification::Notification()
		: JObject(
			"android.app.Notification",
			"()V"
		) {}
	Notification::Notification(android::os::Parcel arg0)
		: JObject(
			"android.app.Notification",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Notification::Notification(jint arg0, jstring arg1, jlong arg2)
		: JObject(
			"android.app.Notification",
			"(ILjava/lang/CharSequence;J)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::app::Notification Notification::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification;"
		);
	}
	jint Notification::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Notification::getAllowSystemGeneratedContextualActions()
	{
		return callMethod<jboolean>(
			"getAllowSystemGeneratedContextualActions",
			"()Z"
		);
	}
	jint Notification::getBadgeIconType()
	{
		return callMethod<jint>(
			"getBadgeIconType",
			"()I"
		);
	}
	android::app::Notification_BubbleMetadata Notification::getBubbleMetadata()
	{
		return callObjectMethod(
			"getBubbleMetadata",
			"()Landroid/app/Notification$BubbleMetadata;"
		);
	}
	jstring Notification::getChannelId()
	{
		return callObjectMethod(
			"getChannelId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::getGroup()
	{
		return callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::getGroupAlertBehavior()
	{
		return callMethod<jint>(
			"getGroupAlertBehavior",
			"()I"
		);
	}
	android::graphics::drawable::Icon Notification::getLargeIcon()
	{
		return callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	android::content::LocusId Notification::getLocusId()
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jstring Notification::getSettingsText()
	{
		return callObjectMethod(
			"getSettingsText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Notification::getShortcutId()
	{
		return callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::graphics::drawable::Icon Notification::getSmallIcon()
	{
		return callObjectMethod(
			"getSmallIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring Notification::getSortKey()
	{
		return callObjectMethod(
			"getSortKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Notification::getTimeoutAfter()
	{
		return callMethod<jlong>(
			"getTimeoutAfter",
			"()J"
		);
	}
	jstring Notification::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Notification::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

