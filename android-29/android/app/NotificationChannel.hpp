#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Parcel;
}

namespace android::app
{
	class NotificationChannel : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring DEFAULT_CHANNEL_ID();
		
		NotificationChannel(QAndroidJniObject obj);
		// Constructors
		NotificationChannel(jstring &arg0, jstring &arg1, jint &arg2);
		NotificationChannel(const QString &arg0, const QString &arg1, jint &arg2);
		NotificationChannel() = default;
		
		// Methods
		jboolean canBubble();
		jboolean canBypassDnd();
		jboolean canShowBadge();
		jint describeContents();
		void enableLights(jboolean arg0);
		void enableVibration(jboolean arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getAudioAttributes();
		jstring getDescription();
		jstring getGroup();
		jstring getId();
		jint getImportance();
		jint getLightColor();
		jint getLockscreenVisibility();
		jstring getName();
		QAndroidJniObject getSound();
		jlongArray getVibrationPattern();
		jboolean hasUserSetImportance();
		jint hashCode();
		void setAllowBubbles(jboolean arg0);
		void setBypassDnd(jboolean arg0);
		void setDescription(jstring arg0);
		void setDescription(const QString &arg0);
		void setGroup(jstring arg0);
		void setGroup(const QString &arg0);
		void setImportance(jint arg0);
		void setLightColor(jint arg0);
		void setLockscreenVisibility(jint arg0);
		void setName(jstring arg0);
		void setName(const QString &arg0);
		void setShowBadge(jboolean arg0);
		void setSound(android::net::Uri arg0, android::media::AudioAttributes arg1);
		void setVibrationPattern(jlongArray arg0);
		jboolean shouldShowLights();
		jboolean shouldVibrate();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

