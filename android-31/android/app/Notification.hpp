#pragma once

#include "../../JObject.hpp"

class JLongArray;
class JArray;
namespace android::app
{
	class Notification_BubbleMetadata;
}
namespace android::app
{
	class PendingIntent;
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
namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class Pair;
}
namespace android::widget
{
	class RemoteViews;
}
class JString;
class JObject;
class JString;

namespace android::app
{
	class Notification : public JObject
	{
	public:
		// Fields
		static android::media::AudioAttributes AUDIO_ATTRIBUTES_DEFAULT();
		static jint BADGE_ICON_LARGE();
		static jint BADGE_ICON_NONE();
		static jint BADGE_ICON_SMALL();
		static JString CATEGORY_ALARM();
		static JString CATEGORY_CALL();
		static JString CATEGORY_EMAIL();
		static JString CATEGORY_ERROR();
		static JString CATEGORY_EVENT();
		static JString CATEGORY_LOCATION_SHARING();
		static JString CATEGORY_MESSAGE();
		static JString CATEGORY_MISSED_CALL();
		static JString CATEGORY_NAVIGATION();
		static JString CATEGORY_PROGRESS();
		static JString CATEGORY_PROMO();
		static JString CATEGORY_RECOMMENDATION();
		static JString CATEGORY_REMINDER();
		static JString CATEGORY_SERVICE();
		static JString CATEGORY_SOCIAL();
		static JString CATEGORY_STATUS();
		static JString CATEGORY_STOPWATCH();
		static JString CATEGORY_SYSTEM();
		static JString CATEGORY_TRANSPORT();
		static JString CATEGORY_WORKOUT();
		static jint COLOR_DEFAULT();
		static JObject CREATOR();
		static jint DEFAULT_ALL();
		static jint DEFAULT_LIGHTS();
		static jint DEFAULT_SOUND();
		static jint DEFAULT_VIBRATE();
		static JString EXTRA_ANSWER_COLOR();
		static JString EXTRA_ANSWER_INTENT();
		static JString EXTRA_AUDIO_CONTENTS_URI();
		static JString EXTRA_BACKGROUND_IMAGE_URI();
		static JString EXTRA_BIG_TEXT();
		static JString EXTRA_CALL_IS_VIDEO();
		static JString EXTRA_CALL_PERSON();
		static JString EXTRA_CHANNEL_GROUP_ID();
		static JString EXTRA_CHANNEL_ID();
		static JString EXTRA_CHRONOMETER_COUNT_DOWN();
		static JString EXTRA_COLORIZED();
		static JString EXTRA_COMPACT_ACTIONS();
		static JString EXTRA_CONVERSATION_TITLE();
		static JString EXTRA_DECLINE_COLOR();
		static JString EXTRA_DECLINE_INTENT();
		static JString EXTRA_HANG_UP_INTENT();
		static JString EXTRA_HISTORIC_MESSAGES();
		static JString EXTRA_INFO_TEXT();
		static JString EXTRA_IS_GROUP_CONVERSATION();
		static JString EXTRA_LARGE_ICON();
		static JString EXTRA_LARGE_ICON_BIG();
		static JString EXTRA_MEDIA_SESSION();
		static JString EXTRA_MESSAGES();
		static JString EXTRA_MESSAGING_PERSON();
		static JString EXTRA_NOTIFICATION_ID();
		static JString EXTRA_NOTIFICATION_TAG();
		static JString EXTRA_PEOPLE();
		static JString EXTRA_PEOPLE_LIST();
		static JString EXTRA_PICTURE();
		static JString EXTRA_PICTURE_CONTENT_DESCRIPTION();
		static JString EXTRA_PICTURE_ICON();
		static JString EXTRA_PROGRESS();
		static JString EXTRA_PROGRESS_INDETERMINATE();
		static JString EXTRA_PROGRESS_MAX();
		static JString EXTRA_REMOTE_INPUT_DRAFT();
		static JString EXTRA_REMOTE_INPUT_HISTORY();
		static JString EXTRA_SELF_DISPLAY_NAME();
		static JString EXTRA_SHOW_BIG_PICTURE_WHEN_COLLAPSED();
		static JString EXTRA_SHOW_CHRONOMETER();
		static JString EXTRA_SHOW_WHEN();
		static JString EXTRA_SMALL_ICON();
		static JString EXTRA_SUB_TEXT();
		static JString EXTRA_SUMMARY_TEXT();
		static JString EXTRA_TEMPLATE();
		static JString EXTRA_TEXT();
		static JString EXTRA_TEXT_LINES();
		static JString EXTRA_TITLE();
		static JString EXTRA_TITLE_BIG();
		static JString EXTRA_VERIFICATION_ICON();
		static JString EXTRA_VERIFICATION_TEXT();
		static jint FLAG_AUTO_CANCEL();
		static jint FLAG_BUBBLE();
		static jint FLAG_FOREGROUND_SERVICE();
		static jint FLAG_GROUP_SUMMARY();
		static jint FLAG_HIGH_PRIORITY();
		static jint FLAG_INSISTENT();
		static jint FLAG_LOCAL_ONLY();
		static jint FLAG_NO_CLEAR();
		static jint FLAG_ONGOING_EVENT();
		static jint FLAG_ONLY_ALERT_ONCE();
		static jint FLAG_SHOW_LIGHTS();
		static jint FOREGROUND_SERVICE_DEFAULT();
		static jint FOREGROUND_SERVICE_DEFERRED();
		static jint FOREGROUND_SERVICE_IMMEDIATE();
		static jint GROUP_ALERT_ALL();
		static jint GROUP_ALERT_CHILDREN();
		static jint GROUP_ALERT_SUMMARY();
		static JString INTENT_CATEGORY_NOTIFICATION_PREFERENCES();
		static jint PRIORITY_DEFAULT();
		static jint PRIORITY_HIGH();
		static jint PRIORITY_LOW();
		static jint PRIORITY_MAX();
		static jint PRIORITY_MIN();
		static jint STREAM_DEFAULT();
		static jint VISIBILITY_PRIVATE();
		static jint VISIBILITY_PUBLIC();
		static jint VISIBILITY_SECRET();
		JArray actions();
		android::media::AudioAttributes audioAttributes();
		jint audioStreamType();
		android::widget::RemoteViews bigContentView();
		JString category();
		jint color();
		android::app::PendingIntent contentIntent();
		android::widget::RemoteViews contentView();
		jint defaults();
		android::app::PendingIntent deleteIntent();
		android::os::Bundle extras();
		jint flags();
		android::app::PendingIntent fullScreenIntent();
		android::widget::RemoteViews headsUpContentView();
		jint icon();
		jint iconLevel();
		android::graphics::Bitmap largeIcon();
		jint ledARGB();
		jint ledOffMS();
		jint ledOnMS();
		jint number();
		jint priority();
		android::app::Notification publicVersion();
		android::net::Uri sound();
		JString tickerText();
		android::widget::RemoteViews tickerView();
		JLongArray vibrate();
		jint visibility();
		jlong when();
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification(QJniObject obj);
		
		// Constructors
		Notification();
		Notification(android::os::Parcel arg0);
		Notification(jint arg0, JString arg1, jlong arg2);
		
		// Methods
		android::app::Notification clone() const;
		jint describeContents() const;
		android::util::Pair findRemoteInputActionPair(jboolean arg0) const;
		jboolean getAllowSystemGeneratedContextualActions() const;
		jint getBadgeIconType() const;
		android::app::Notification_BubbleMetadata getBubbleMetadata() const;
		JString getChannelId() const;
		JObject getContextualActions() const;
		JString getGroup() const;
		jint getGroupAlertBehavior() const;
		android::graphics::drawable::Icon getLargeIcon() const;
		android::content::LocusId getLocusId() const;
		JString getSettingsText() const;
		JString getShortcutId() const;
		android::graphics::drawable::Icon getSmallIcon() const;
		JString getSortKey() const;
		jlong getTimeoutAfter() const;
		jboolean hasImage() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

