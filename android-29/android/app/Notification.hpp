#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification_BubbleMetadata;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
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
		static QAndroidJniObject CREATOR();
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
		QAndroidJniObject audioAttributes();
		jint audioStreamType();
		QAndroidJniObject bigContentView();
		jstring category();
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
		jstring tickerText();
		QAndroidJniObject tickerView();
		jlongArray vibrate();
		jint visibility();
		jlong when();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jint arg0, jstring arg1, jlong arg2);
		void __constructor(jint arg0, const QString &arg1, jlong arg2);
		
		// Methods
		QAndroidJniObject clone();
		jint describeContents();
		jboolean getAllowSystemGeneratedContextualActions();
		jint getBadgeIconType();
		QAndroidJniObject getBubbleMetadata();
		jstring getChannelId();
		jstring getGroup();
		jint getGroupAlertBehavior();
		QAndroidJniObject getLargeIcon();
		QAndroidJniObject getLocusId();
		jstring getSettingsText();
		jstring getShortcutId();
		QAndroidJniObject getSmallIcon();
		jstring getSortKey();
		jlong getTimeoutAfter();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

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

namespace __jni_impl::android::app
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
		return __thiz.getObjectField(
			"actions",
			"[Landroid/app/Notification$Action;"
		).object<jarray>();
	}
	QAndroidJniObject Notification::audioAttributes()
	{
		return __thiz.getObjectField(
			"audioAttributes",
			"Landroid/media/AudioAttributes;"
		);
	}
	jint Notification::audioStreamType()
	{
		return __thiz.getField<jint>(
			"audioStreamType"
		);
	}
	QAndroidJniObject Notification::bigContentView()
	{
		return __thiz.getObjectField(
			"bigContentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	jstring Notification::category()
	{
		return __thiz.getObjectField(
			"category",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::color()
	{
		return __thiz.getField<jint>(
			"color"
		);
	}
	QAndroidJniObject Notification::contentIntent()
	{
		return __thiz.getObjectField(
			"contentIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification::contentView()
	{
		return __thiz.getObjectField(
			"contentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	jint Notification::defaults()
	{
		return __thiz.getField<jint>(
			"defaults"
		);
	}
	QAndroidJniObject Notification::deleteIntent()
	{
		return __thiz.getObjectField(
			"deleteIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	jint Notification::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	QAndroidJniObject Notification::fullScreenIntent()
	{
		return __thiz.getObjectField(
			"fullScreenIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject Notification::headsUpContentView()
	{
		return __thiz.getObjectField(
			"headsUpContentView",
			"Landroid/widget/RemoteViews;"
		);
	}
	jint Notification::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	jint Notification::iconLevel()
	{
		return __thiz.getField<jint>(
			"iconLevel"
		);
	}
	QAndroidJniObject Notification::largeIcon()
	{
		return __thiz.getObjectField(
			"largeIcon",
			"Landroid/graphics/Bitmap;"
		);
	}
	jint Notification::ledARGB()
	{
		return __thiz.getField<jint>(
			"ledARGB"
		);
	}
	jint Notification::ledOffMS()
	{
		return __thiz.getField<jint>(
			"ledOffMS"
		);
	}
	jint Notification::ledOnMS()
	{
		return __thiz.getField<jint>(
			"ledOnMS"
		);
	}
	jint Notification::number()
	{
		return __thiz.getField<jint>(
			"number"
		);
	}
	jint Notification::priority()
	{
		return __thiz.getField<jint>(
			"priority"
		);
	}
	QAndroidJniObject Notification::publicVersion()
	{
		return __thiz.getObjectField(
			"publicVersion",
			"Landroid/app/Notification;"
		);
	}
	QAndroidJniObject Notification::sound()
	{
		return __thiz.getObjectField(
			"sound",
			"Landroid/net/Uri;"
		);
	}
	jstring Notification::tickerText()
	{
		return __thiz.getObjectField(
			"tickerText",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Notification::tickerView()
	{
		return __thiz.getObjectField(
			"tickerView",
			"Landroid/widget/RemoteViews;"
		);
	}
	jlongArray Notification::vibrate()
	{
		return __thiz.getObjectField(
			"vibrate",
			"[J"
		).object<jlongArray>();
	}
	jint Notification::visibility()
	{
		return __thiz.getField<jint>(
			"visibility"
		);
	}
	jlong Notification::when()
	{
		return __thiz.getField<jlong>(
			"when"
		);
	}
	
	// Constructors
	void Notification::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification",
			"()V"
		);
	}
	void Notification::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Notification::__constructor(jint arg0, jstring arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification",
			"(ILjava/lang/CharSequence;J)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Notification::__constructor(jint arg0, const QString &arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification",
			"(ILjava/lang/CharSequence;J)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject Notification::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/Notification;"
		);
	}
	jint Notification::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Notification::getAllowSystemGeneratedContextualActions()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowSystemGeneratedContextualActions",
			"()Z"
		);
	}
	jint Notification::getBadgeIconType()
	{
		return __thiz.callMethod<jint>(
			"getBadgeIconType",
			"()I"
		);
	}
	QAndroidJniObject Notification::getBubbleMetadata()
	{
		return __thiz.callObjectMethod(
			"getBubbleMetadata",
			"()Landroid/app/Notification$BubbleMetadata;"
		);
	}
	jstring Notification::getChannelId()
	{
		return __thiz.callObjectMethod(
			"getChannelId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Notification::getGroup()
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Notification::getGroupAlertBehavior()
	{
		return __thiz.callMethod<jint>(
			"getGroupAlertBehavior",
			"()I"
		);
	}
	QAndroidJniObject Notification::getLargeIcon()
	{
		return __thiz.callObjectMethod(
			"getLargeIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	QAndroidJniObject Notification::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
	jstring Notification::getSettingsText()
	{
		return __thiz.callObjectMethod(
			"getSettingsText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Notification::getShortcutId()
	{
		return __thiz.callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Notification::getSmallIcon()
	{
		return __thiz.callObjectMethod(
			"getSmallIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring Notification::getSortKey()
	{
		return __thiz.callObjectMethod(
			"getSortKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Notification::getTimeoutAfter()
	{
		return __thiz.callMethod<jlong>(
			"getTimeoutAfter",
			"()J"
		);
	}
	jstring Notification::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Notification::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification : public __jni_impl::android::app::Notification
	{
	public:
		Notification(QAndroidJniObject obj) { __thiz = obj; }
		Notification()
		{
			__constructor();
		}
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
	};
} // namespace android::app

