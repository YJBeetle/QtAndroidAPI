#pragma once

#ifndef ANDROID_APP_NOTIFICATION
#define ANDROID_APP_NOTIFICATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::app
{
	class Notification_BubbleMetadata;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}

namespace __jni_impl::android::app
{
	class Notification : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AUDIO_ATTRIBUTES_DEFAULT();
		static jint BADGE_ICON_LARGE();
		static jint BADGE_ICON_NONE();
		static jint BADGE_ICON_SMALL();
		static QAndroidJniObject CATEGORY_ALARM();
		static QAndroidJniObject CATEGORY_CALL();
		static QAndroidJniObject CATEGORY_EMAIL();
		static QAndroidJniObject CATEGORY_ERROR();
		static QAndroidJniObject CATEGORY_EVENT();
		static QAndroidJniObject CATEGORY_MESSAGE();
		static QAndroidJniObject CATEGORY_NAVIGATION();
		static QAndroidJniObject CATEGORY_PROGRESS();
		static QAndroidJniObject CATEGORY_PROMO();
		static QAndroidJniObject CATEGORY_RECOMMENDATION();
		static QAndroidJniObject CATEGORY_REMINDER();
		static QAndroidJniObject CATEGORY_SERVICE();
		static QAndroidJniObject CATEGORY_SOCIAL();
		static QAndroidJniObject CATEGORY_STATUS();
		static QAndroidJniObject CATEGORY_SYSTEM();
		static QAndroidJniObject CATEGORY_TRANSPORT();
		static jint COLOR_DEFAULT();
		static QAndroidJniObject CREATOR();
		static jint DEFAULT_ALL();
		static jint DEFAULT_LIGHTS();
		static jint DEFAULT_SOUND();
		static jint DEFAULT_VIBRATE();
		static QAndroidJniObject EXTRA_AUDIO_CONTENTS_URI();
		static QAndroidJniObject EXTRA_BACKGROUND_IMAGE_URI();
		static QAndroidJniObject EXTRA_BIG_TEXT();
		static QAndroidJniObject EXTRA_CHANNEL_GROUP_ID();
		static QAndroidJniObject EXTRA_CHANNEL_ID();
		static QAndroidJniObject EXTRA_CHRONOMETER_COUNT_DOWN();
		static QAndroidJniObject EXTRA_COLORIZED();
		static QAndroidJniObject EXTRA_COMPACT_ACTIONS();
		static QAndroidJniObject EXTRA_CONVERSATION_TITLE();
		static QAndroidJniObject EXTRA_HISTORIC_MESSAGES();
		static QAndroidJniObject EXTRA_INFO_TEXT();
		static QAndroidJniObject EXTRA_IS_GROUP_CONVERSATION();
		static QAndroidJniObject EXTRA_LARGE_ICON();
		static QAndroidJniObject EXTRA_LARGE_ICON_BIG();
		static QAndroidJniObject EXTRA_MEDIA_SESSION();
		static QAndroidJniObject EXTRA_MESSAGES();
		static QAndroidJniObject EXTRA_MESSAGING_PERSON();
		static QAndroidJniObject EXTRA_NOTIFICATION_ID();
		static QAndroidJniObject EXTRA_NOTIFICATION_TAG();
		static QAndroidJniObject EXTRA_PEOPLE();
		static QAndroidJniObject EXTRA_PEOPLE_LIST();
		static QAndroidJniObject EXTRA_PICTURE();
		static QAndroidJniObject EXTRA_PROGRESS();
		static QAndroidJniObject EXTRA_PROGRESS_INDETERMINATE();
		static QAndroidJniObject EXTRA_PROGRESS_MAX();
		static QAndroidJniObject EXTRA_REMOTE_INPUT_DRAFT();
		static QAndroidJniObject EXTRA_REMOTE_INPUT_HISTORY();
		static QAndroidJniObject EXTRA_SELF_DISPLAY_NAME();
		static QAndroidJniObject EXTRA_SHOW_CHRONOMETER();
		static QAndroidJniObject EXTRA_SHOW_WHEN();
		static QAndroidJniObject EXTRA_SMALL_ICON();
		static QAndroidJniObject EXTRA_SUB_TEXT();
		static QAndroidJniObject EXTRA_SUMMARY_TEXT();
		static QAndroidJniObject EXTRA_TEMPLATE();
		static QAndroidJniObject EXTRA_TEXT();
		static QAndroidJniObject EXTRA_TEXT_LINES();
		static QAndroidJniObject EXTRA_TITLE();
		static QAndroidJniObject EXTRA_TITLE_BIG();
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
		static QAndroidJniObject INTENT_CATEGORY_NOTIFICATION_PREFERENCES();
		static jint PRIORITY_DEFAULT();
		static jint PRIORITY_HIGH();
		static jint PRIORITY_LOW();
		static jint PRIORITY_MAX();
		static jint PRIORITY_MIN();
		static jint STREAM_DEFAULT();
		static jint VISIBILITY_PRIVATE();
		static jint VISIBILITY_PUBLIC();
		static jint VISIBILITY_SECRET();
		QAndroidJniObject actions();
		QAndroidJniObject audioAttributes();
		jint audioStreamType();
		QAndroidJniObject bigContentView();
		QAndroidJniObject category();
		jint color();
		QAndroidJniObject contentIntent();
		QAndroidJniObject contentView();
		jint defaults();
		QAndroidJniObject deleteIntent();
		QAndroidJniObject extras();
		jint flags();
		QAndroidJniObject fullScreenIntent();
		QAndroidJniObject headsUpContentView();
		jint icon();
		jint iconLevel();
		QAndroidJniObject largeIcon();
		jint ledARGB();
		jint ledOffMS();
		jint ledOnMS();
		jint number();
		jint priority();
		QAndroidJniObject publicVersion();
		QAndroidJniObject sound();
		QAndroidJniObject tickerText();
		QAndroidJniObject tickerView();
		QAndroidJniObject vibrate();
		jint visibility();
		jlong when();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0, jstring arg1, jlong arg2);
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject clone();
		QAndroidJniObject getSortKey();
		QAndroidJniObject getChannelId();
		jlong getTimeoutAfter();
		jint getBadgeIconType();
		QAndroidJniObject getShortcutId();
		QAndroidJniObject getLocusId();
		QAndroidJniObject getSettingsText();
		jint getGroupAlertBehavior();
		QAndroidJniObject getBubbleMetadata();
		jboolean getAllowSystemGeneratedContextualActions();
		QAndroidJniObject getSmallIcon();
		QAndroidJniObject getLargeIcon();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getGroup();
	};
} // namespace __jni_impl::android::app

#include "../media/AudioAttributes.hpp"
#include "../widget/RemoteViews.hpp"
#include "PendingIntent.hpp"
#include "../os/Bundle.hpp"
#include "../graphics/Bitmap.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../content/LocusId.hpp"
#include "Notification_BubbleMetadata.hpp"
#include "../graphics/drawable/Icon.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject Notification::AUDIO_ATTRIBUTES_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"AUDIO_ATTRIBUTES_DEFAULT",
			"Landroid/media/AudioAttributes;");
	}
	jint Notification::BADGE_ICON_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_LARGE");
	}
	jint Notification::BADGE_ICON_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_NONE");
	}
	jint Notification::BADGE_ICON_SMALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"BADGE_ICON_SMALL");
	}
	QAndroidJniObject Notification::CATEGORY_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_ALARM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_CALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_CALL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_EMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_ERROR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_EVENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_EVENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_NAVIGATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_NAVIGATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_PROGRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_PROGRESS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_PROMO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_PROMO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_RECOMMENDATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_RECOMMENDATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_REMINDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_REMINDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_SERVICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SERVICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_SOCIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SOCIAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_STATUS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_SYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_SYSTEM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::CATEGORY_TRANSPORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CATEGORY_TRANSPORT",
			"Ljava/lang/String;");
	}
	jint Notification::COLOR_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"COLOR_DEFAULT");
	}
	QAndroidJniObject Notification::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint Notification::DEFAULT_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_ALL");
	}
	jint Notification::DEFAULT_LIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_LIGHTS");
	}
	jint Notification::DEFAULT_SOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_SOUND");
	}
	jint Notification::DEFAULT_VIBRATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"DEFAULT_VIBRATE");
	}
	QAndroidJniObject Notification::EXTRA_AUDIO_CONTENTS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_AUDIO_CONTENTS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_BACKGROUND_IMAGE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_BACKGROUND_IMAGE_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_BIG_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_BIG_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_CHANNEL_GROUP_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHANNEL_GROUP_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHANNEL_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_CHRONOMETER_COUNT_DOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CHRONOMETER_COUNT_DOWN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_COLORIZED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_COLORIZED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_COMPACT_ACTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_COMPACT_ACTIONS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_CONVERSATION_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_CONVERSATION_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_HISTORIC_MESSAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_HISTORIC_MESSAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_INFO_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_INFO_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_IS_GROUP_CONVERSATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_IS_GROUP_CONVERSATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_LARGE_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_LARGE_ICON",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_LARGE_ICON_BIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_LARGE_ICON_BIG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_MEDIA_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MEDIA_SESSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_MESSAGES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MESSAGES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_MESSAGING_PERSON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_MESSAGING_PERSON",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_NOTIFICATION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_NOTIFICATION_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_NOTIFICATION_TAG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_NOTIFICATION_TAG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_PEOPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PEOPLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_PEOPLE_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PEOPLE_LIST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_PICTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PICTURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_PROGRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_PROGRESS_INDETERMINATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS_INDETERMINATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_PROGRESS_MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_PROGRESS_MAX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_REMOTE_INPUT_DRAFT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_REMOTE_INPUT_DRAFT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_REMOTE_INPUT_HISTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_REMOTE_INPUT_HISTORY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_SELF_DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SELF_DISPLAY_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_SHOW_CHRONOMETER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SHOW_CHRONOMETER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_SHOW_WHEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SHOW_WHEN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_SMALL_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SMALL_ICON",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_SUB_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SUB_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_SUMMARY_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_SUMMARY_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_TEMPLATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEMPLATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_TEXT_LINES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TEXT_LINES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Notification::EXTRA_TITLE_BIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"EXTRA_TITLE_BIG",
			"Ljava/lang/String;");
	}
	jint Notification::FLAG_AUTO_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_AUTO_CANCEL");
	}
	jint Notification::FLAG_BUBBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_BUBBLE");
	}
	jint Notification::FLAG_FOREGROUND_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_FOREGROUND_SERVICE");
	}
	jint Notification::FLAG_GROUP_SUMMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_GROUP_SUMMARY");
	}
	jint Notification::FLAG_HIGH_PRIORITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_HIGH_PRIORITY");
	}
	jint Notification::FLAG_INSISTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_INSISTENT");
	}
	jint Notification::FLAG_LOCAL_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_LOCAL_ONLY");
	}
	jint Notification::FLAG_NO_CLEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_NO_CLEAR");
	}
	jint Notification::FLAG_ONGOING_EVENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_ONGOING_EVENT");
	}
	jint Notification::FLAG_ONLY_ALERT_ONCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_ONLY_ALERT_ONCE");
	}
	jint Notification::FLAG_SHOW_LIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"FLAG_SHOW_LIGHTS");
	}
	jint Notification::GROUP_ALERT_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_ALL");
	}
	jint Notification::GROUP_ALERT_CHILDREN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_CHILDREN");
	}
	jint Notification::GROUP_ALERT_SUMMARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"GROUP_ALERT_SUMMARY");
	}
	QAndroidJniObject Notification::INTENT_CATEGORY_NOTIFICATION_PREFERENCES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification",
			"INTENT_CATEGORY_NOTIFICATION_PREFERENCES",
			"Ljava/lang/String;");
	}
	jint Notification::PRIORITY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_DEFAULT");
	}
	jint Notification::PRIORITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_HIGH");
	}
	jint Notification::PRIORITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_LOW");
	}
	jint Notification::PRIORITY_MAX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_MAX");
	}
	jint Notification::PRIORITY_MIN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"PRIORITY_MIN");
	}
	jint Notification::STREAM_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"STREAM_DEFAULT");
	}
	jint Notification::VISIBILITY_PRIVATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_PRIVATE");
	}
	jint Notification::VISIBILITY_PUBLIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_PUBLIC");
	}
	jint Notification::VISIBILITY_SECRET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification",
			"VISIBILITY_SECRET");
	}
	QAndroidJniObject Notification::actions()
	{
		return __thiz.getObjectField(
			"actions",
			"[Landroid/app/Notification$Action;");
	}
	QAndroidJniObject Notification::audioAttributes()
	{
		return __thiz.getObjectField(
			"audioAttributes",
			"Landroid/media/AudioAttributes;");
	}
	jint Notification::audioStreamType()
	{
		return __thiz.getField<jint>(
			"audioStreamType");
	}
	QAndroidJniObject Notification::bigContentView()
	{
		return __thiz.getObjectField(
			"bigContentView",
			"Landroid/widget/RemoteViews;");
	}
	QAndroidJniObject Notification::category()
	{
		return __thiz.getObjectField(
			"category",
			"Ljava/lang/String;");
	}
	jint Notification::color()
	{
		return __thiz.getField<jint>(
			"color");
	}
	QAndroidJniObject Notification::contentIntent()
	{
		return __thiz.getObjectField(
			"contentIntent",
			"Landroid/app/PendingIntent;");
	}
	QAndroidJniObject Notification::contentView()
	{
		return __thiz.getObjectField(
			"contentView",
			"Landroid/widget/RemoteViews;");
	}
	jint Notification::defaults()
	{
		return __thiz.getField<jint>(
			"defaults");
	}
	QAndroidJniObject Notification::deleteIntent()
	{
		return __thiz.getObjectField(
			"deleteIntent",
			"Landroid/app/PendingIntent;");
	}
	QAndroidJniObject Notification::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;");
	}
	jint Notification::flags()
	{
		return __thiz.getField<jint>(
			"flags");
	}
	QAndroidJniObject Notification::fullScreenIntent()
	{
		return __thiz.getObjectField(
			"fullScreenIntent",
			"Landroid/app/PendingIntent;");
	}
	QAndroidJniObject Notification::headsUpContentView()
	{
		return __thiz.getObjectField(
			"headsUpContentView",
			"Landroid/widget/RemoteViews;");
	}
	jint Notification::icon()
	{
		return __thiz.getField<jint>(
			"icon");
	}
	jint Notification::iconLevel()
	{
		return __thiz.getField<jint>(
			"iconLevel");
	}
	QAndroidJniObject Notification::largeIcon()
	{
		return __thiz.getObjectField(
			"largeIcon",
			"Landroid/graphics/Bitmap;");
	}
	jint Notification::ledARGB()
	{
		return __thiz.getField<jint>(
			"ledARGB");
	}
	jint Notification::ledOffMS()
	{
		return __thiz.getField<jint>(
			"ledOffMS");
	}
	jint Notification::ledOnMS()
	{
		return __thiz.getField<jint>(
			"ledOnMS");
	}
	jint Notification::number()
	{
		return __thiz.getField<jint>(
			"number");
	}
	jint Notification::priority()
	{
		return __thiz.getField<jint>(
			"priority");
	}
	QAndroidJniObject Notification::publicVersion()
	{
		return __thiz.getObjectField(
			"publicVersion",
			"Landroid/app/Notification;");
	}
	QAndroidJniObject Notification::sound()
	{
		return __thiz.getObjectField(
			"sound",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject Notification::tickerText()
	{
		return __thiz.getObjectField(
			"tickerText",
			"Ljava/lang/CharSequence;");
	}
	QAndroidJniObject Notification::tickerView()
	{
		return __thiz.getObjectField(
			"tickerView",
			"Landroid/widget/RemoteViews;");
	}
	QAndroidJniObject Notification::vibrate()
	{
		return __thiz.getObjectField(
			"vibrate",
			"[J");
	}
	jint Notification::visibility()
	{
		return __thiz.getField<jint>(
			"visibility");
	}
	jlong Notification::when()
	{
		return __thiz.getField<jlong>(
			"when");
	}
	
	// Constructors
	void Notification::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void Notification::__constructor(jint arg0, jstring arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification",
			"(ILjava/lang/CharSequence;J)V",
			arg0,
			arg1,
			arg2);
	}
	void Notification::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Notification::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Notification::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/Notification;");
	}
	QAndroidJniObject Notification::getSortKey()
	{
		return __thiz.callObjectMethod(
			"getSortKey",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Notification::getChannelId()
	{
		return __thiz.callObjectMethod(
			"getChannelId",
			"()Ljava/lang/String;");
	}
	jlong Notification::getTimeoutAfter()
	{
		return __thiz.callMethod<jlong>(
			"getTimeoutAfter",
			"()J");
	}
	jint Notification::getBadgeIconType()
	{
		return __thiz.callMethod<jint>(
			"getBadgeIconType",
			"()I");
	}
	QAndroidJniObject Notification::getShortcutId()
	{
		return __thiz.callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Notification::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;");
	}
	QAndroidJniObject Notification::getSettingsText()
	{
		return __thiz.callObjectMethod(
			"getSettingsText",
			"()Ljava/lang/CharSequence;");
	}
	jint Notification::getGroupAlertBehavior()
	{
		return __thiz.callMethod<jint>(
			"getGroupAlertBehavior",
			"()I");
	}
	QAndroidJniObject Notification::getBubbleMetadata()
	{
		return __thiz.callObjectMethod(
			"getBubbleMetadata",
			"()Landroid/app/Notification$BubbleMetadata;");
	}
	jboolean Notification::getAllowSystemGeneratedContextualActions()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowSystemGeneratedContextualActions",
			"()Z");
	}
	QAndroidJniObject Notification::getSmallIcon()
	{
		return __thiz.callObjectMethod(
			"getSmallIcon",
			"()Landroid/graphics/drawable/Icon;");
	}
	QAndroidJniObject Notification::getLargeIcon()
	{
		return __thiz.callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/drawable/Icon;");
	}
	jint Notification::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Notification::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject Notification::getGroup()
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification : public __jni_impl::android::app::Notification
	{
	public:
		Notification(QAndroidJniObject obj) { __thiz = obj; }
		Notification(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		Notification(jint arg0, jstring arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Notification()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION

