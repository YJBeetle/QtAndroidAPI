#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::app
{
	class Notification : public __JniBaseClass
	{
	public:
		// Fields
		static android::media::AudioAttributes AUDIO_ATTRIBUTES_DEFAULT();
		static jint BADGE_ICON_LARGE();
		static jint BADGE_ICON_NONE();
		static jint BADGE_ICON_SMALL();
		static jstring CATEGORY_ALARM();
		static jstring CATEGORY_CALL();
		static jstring CATEGORY_EMAIL();
		static jstring CATEGORY_ERROR();
		static jstring CATEGORY_EVENT();
		static jstring CATEGORY_MESSAGE();
		static jstring CATEGORY_NAVIGATION();
		static jstring CATEGORY_PROGRESS();
		static jstring CATEGORY_PROMO();
		static jstring CATEGORY_RECOMMENDATION();
		static jstring CATEGORY_REMINDER();
		static jstring CATEGORY_SERVICE();
		static jstring CATEGORY_SOCIAL();
		static jstring CATEGORY_STATUS();
		static jstring CATEGORY_SYSTEM();
		static jstring CATEGORY_TRANSPORT();
		static jint COLOR_DEFAULT();
		static __JniBaseClass CREATOR();
		static jint DEFAULT_ALL();
		static jint DEFAULT_LIGHTS();
		static jint DEFAULT_SOUND();
		static jint DEFAULT_VIBRATE();
		static jstring EXTRA_AUDIO_CONTENTS_URI();
		static jstring EXTRA_BACKGROUND_IMAGE_URI();
		static jstring EXTRA_BIG_TEXT();
		static jstring EXTRA_CHANNEL_GROUP_ID();
		static jstring EXTRA_CHANNEL_ID();
		static jstring EXTRA_CHRONOMETER_COUNT_DOWN();
		static jstring EXTRA_COLORIZED();
		static jstring EXTRA_COMPACT_ACTIONS();
		static jstring EXTRA_CONVERSATION_TITLE();
		static jstring EXTRA_HISTORIC_MESSAGES();
		static jstring EXTRA_INFO_TEXT();
		static jstring EXTRA_IS_GROUP_CONVERSATION();
		static jstring EXTRA_LARGE_ICON();
		static jstring EXTRA_LARGE_ICON_BIG();
		static jstring EXTRA_MEDIA_SESSION();
		static jstring EXTRA_MESSAGES();
		static jstring EXTRA_MESSAGING_PERSON();
		static jstring EXTRA_NOTIFICATION_ID();
		static jstring EXTRA_NOTIFICATION_TAG();
		static jstring EXTRA_PEOPLE();
		static jstring EXTRA_PEOPLE_LIST();
		static jstring EXTRA_PICTURE();
		static jstring EXTRA_PROGRESS();
		static jstring EXTRA_PROGRESS_INDETERMINATE();
		static jstring EXTRA_PROGRESS_MAX();
		static jstring EXTRA_REMOTE_INPUT_DRAFT();
		static jstring EXTRA_REMOTE_INPUT_HISTORY();
		static jstring EXTRA_SELF_DISPLAY_NAME();
		static jstring EXTRA_SHOW_CHRONOMETER();
		static jstring EXTRA_SHOW_WHEN();
		static jstring EXTRA_SMALL_ICON();
		static jstring EXTRA_SUB_TEXT();
		static jstring EXTRA_SUMMARY_TEXT();
		static jstring EXTRA_TEMPLATE();
		static jstring EXTRA_TEXT();
		static jstring EXTRA_TEXT_LINES();
		static jstring EXTRA_TITLE();
		static jstring EXTRA_TITLE_BIG();
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
		static jint GROUP_ALERT_ALL();
		static jint GROUP_ALERT_CHILDREN();
		static jint GROUP_ALERT_SUMMARY();
		static jstring INTENT_CATEGORY_NOTIFICATION_PREFERENCES();
		static jint PRIORITY_DEFAULT();
		static jint PRIORITY_HIGH();
		static jint PRIORITY_LOW();
		static jint PRIORITY_MAX();
		static jint PRIORITY_MIN();
		static jint STREAM_DEFAULT();
		static jint VISIBILITY_PRIVATE();
		static jint VISIBILITY_PUBLIC();
		static jint VISIBILITY_SECRET();
		jarray actions();
		android::media::AudioAttributes audioAttributes();
		jint audioStreamType();
		android::widget::RemoteViews bigContentView();
		jstring category();
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
		jstring tickerText();
		android::widget::RemoteViews tickerView();
		jlongArray vibrate();
		jint visibility();
		jlong when();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Notification(QAndroidJniObject obj);
		
		// Constructors
		Notification();
		Notification(android::os::Parcel arg0);
		Notification(jint arg0, jstring arg1, jlong arg2);
		
		// Methods
		android::app::Notification clone();
		jint describeContents();
		android::util::Pair findRemoteInputActionPair(jboolean arg0);
		jboolean getAllowSystemGeneratedContextualActions();
		jint getBadgeIconType();
		android::app::Notification_BubbleMetadata getBubbleMetadata();
		jstring getChannelId();
		__JniBaseClass getContextualActions();
		jstring getGroup();
		jint getGroupAlertBehavior();
		android::graphics::drawable::Icon getLargeIcon();
		android::content::LocusId getLocusId();
		jstring getSettingsText();
		jstring getShortcutId();
		android::graphics::drawable::Icon getSmallIcon();
		jstring getSortKey();
		jlong getTimeoutAfter();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

