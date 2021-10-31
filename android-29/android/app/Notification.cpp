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
	QAndroidJniObject Notification::AUDIO_ATTRIBUTES_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"AUDIO_ATTRIBUTES_DEFAULT",
			"Landroid/media/AudioAttributes;"
		);
	}
	jint Notification::BADGE_ICON_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_LARGE"
		);
	}
	jint Notification::BADGE_ICON_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_NONE"
		);
	}
	jint Notification::BADGE_ICON_SMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_SMALL"
		);
	}
	jstring Notification::CATEGORY_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_ALARM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_CALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_CALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_EVENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_NAVIGATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_NAVIGATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_PROGRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_PROGRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_PROMO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_PROMO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_RECOMMENDATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_RECOMMENDATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_REMINDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_REMINDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SERVICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_SOCIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SOCIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_SYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SYSTEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::CATEGORY_TRANSPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_TRANSPORT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::COLOR_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"COLOR_DEFAULT"
		);
	}
	QAndroidJniObject Notification::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Notification::DEFAULT_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_ALL"
		);
	}
	jint Notification::DEFAULT_LIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_LIGHTS"
		);
	}
	jint Notification::DEFAULT_SOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_SOUND"
		);
	}
	jint Notification::DEFAULT_VIBRATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_VIBRATE"
		);
	}
	jstring Notification::EXTRA_AUDIO_CONTENTS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_AUDIO_CONTENTS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_BACKGROUND_IMAGE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_BACKGROUND_IMAGE_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_BIG_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_BIG_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_CHANNEL_GROUP_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHANNEL_GROUP_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_CHRONOMETER_COUNT_DOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHRONOMETER_COUNT_DOWN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_COLORIZED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_COLORIZED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_COMPACT_ACTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_COMPACT_ACTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_CONVERSATION_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CONVERSATION_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_HISTORIC_MESSAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_HISTORIC_MESSAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_INFO_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_INFO_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_IS_GROUP_CONVERSATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_IS_GROUP_CONVERSATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_LARGE_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_LARGE_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_LARGE_ICON_BIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_LARGE_ICON_BIG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_MEDIA_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MEDIA_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_MESSAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MESSAGES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_MESSAGING_PERSON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MESSAGING_PERSON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_NOTIFICATION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_NOTIFICATION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_NOTIFICATION_TAG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_NOTIFICATION_TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PEOPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PEOPLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PEOPLE_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PEOPLE_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PICTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PROGRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PROGRESS_INDETERMINATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS_INDETERMINATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_PROGRESS_MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS_MAX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_REMOTE_INPUT_DRAFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_REMOTE_INPUT_DRAFT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_REMOTE_INPUT_HISTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_REMOTE_INPUT_HISTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SELF_DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SELF_DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SHOW_CHRONOMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SHOW_CHRONOMETER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SHOW_WHEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SHOW_WHEN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SMALL_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SMALL_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SUB_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SUB_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_SUMMARY_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SUMMARY_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TEMPLATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEMPLATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TEXT_LINES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEXT_LINES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::EXTRA_TITLE_BIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TITLE_BIG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::FLAG_AUTO_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_AUTO_CANCEL"
		);
	}
	jint Notification::FLAG_BUBBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_BUBBLE"
		);
	}
	jint Notification::FLAG_FOREGROUND_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_FOREGROUND_SERVICE"
		);
	}
	jint Notification::FLAG_GROUP_SUMMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_GROUP_SUMMARY"
		);
	}
	jint Notification::FLAG_HIGH_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_HIGH_PRIORITY"
		);
	}
	jint Notification::FLAG_INSISTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_INSISTENT"
		);
	}
	jint Notification::FLAG_LOCAL_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_LOCAL_ONLY"
		);
	}
	jint Notification::FLAG_NO_CLEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_NO_CLEAR"
		);
	}
	jint Notification::FLAG_ONGOING_EVENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_ONGOING_EVENT"
		);
	}
	jint Notification::FLAG_ONLY_ALERT_ONCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_ONLY_ALERT_ONCE"
		);
	}
	jint Notification::FLAG_SHOW_LIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_SHOW_LIGHTS"
		);
	}
	jint Notification::GROUP_ALERT_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_ALL"
		);
	}
	jint Notification::GROUP_ALERT_CHILDREN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_CHILDREN"
		);
	}
	jint Notification::GROUP_ALERT_SUMMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_SUMMARY"
		);
	}
	jstring Notification::INTENT_CATEGORY_NOTIFICATION_PREFERENCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"INTENT_CATEGORY_NOTIFICATION_PREFERENCES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::PRIORITY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_DEFAULT"
		);
	}
	jint Notification::PRIORITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_HIGH"
		);
	}
	jint Notification::PRIORITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_LOW"
		);
	}
	jint Notification::PRIORITY_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_MAX"
		);
	}
	jint Notification::PRIORITY_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_MIN"
		);
	}
	jint Notification::STREAM_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"STREAM_DEFAULT"
		);
	}
	jint Notification::VISIBILITY_PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_PRIVATE"
		);
	}
	jint Notification::VISIBILITY_PUBLIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_PUBLIC"
		);
	}
	jint Notification::VISIBILITY_SECRET()
	{
		return QAndroidJniObject::getStaticField<jint>(
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
	QAndroidJniObject Notification::audioAttributes()
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
	QAndroidJniObject Notification::bigContentView()
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
	QAndroidJniObject Notification::contentIntent()
	{
		return getObjectField(
			"contentIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification::contentView()
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
	QAndroidJniObject Notification::deleteIntent()
	{
		return getObjectField(
			"deleteIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification::extras()
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
	QAndroidJniObject Notification::fullScreenIntent()
	{
		return getObjectField(
			"fullScreenIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification::headsUpContentView()
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
	QAndroidJniObject Notification::largeIcon()
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
	QAndroidJniObject Notification::publicVersion()
	{
		return getObjectField(
			"publicVersion",
			"Landroid/app/Notification;"
		);
	}
	QAndroidJniObject Notification::sound()
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
	QAndroidJniObject Notification::tickerView()
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
	
	// QAndroidJniObject forward
	Notification::Notification(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification::Notification()
		: __JniBaseClass(
			"android.app.Notification",
			"()V"
		) {}
	Notification::Notification(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.app.Notification",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Notification::Notification(jint arg0, jstring arg1, jlong arg2)
		: __JniBaseClass(
			"android.app.Notification",
			"(ILjava/lang/CharSequence;J)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	QAndroidJniObject Notification::clone()
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
	QAndroidJniObject Notification::getBubbleMetadata()
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
	QAndroidJniObject Notification::getLargeIcon()
	{
		return callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	QAndroidJniObject Notification::getLocusId()
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
	QAndroidJniObject Notification::getSmallIcon()
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
