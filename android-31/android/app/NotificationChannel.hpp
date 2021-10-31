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
		static __JniBaseClass CREATOR();
		static jstring DEFAULT_CHANNEL_ID();
		static jstring EDIT_CONVERSATION();
		static jstring EDIT_IMPORTANCE();
		static jstring EDIT_LAUNCHER();
		static jstring EDIT_LOCKED_DEVICE();
		static jstring EDIT_SOUND();
		static jstring EDIT_VIBRATION();
		static jstring EDIT_ZEN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationChannel(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NotificationChannel(QAndroidJniObject obj);
		
		// Constructors
		NotificationChannel(jstring arg0, jstring arg1, jint arg2);
		
		// Methods
		jboolean canBubble();
		jboolean canBypassDnd();
		jboolean canShowBadge();
		jint describeContents();
		void enableLights(jboolean arg0);
		void enableVibration(jboolean arg0);
		jboolean equals(jobject arg0);
		android::media::AudioAttributes getAudioAttributes();
		jstring getConversationId();
		jstring getDescription();
		jstring getGroup();
		jstring getId();
		jint getImportance();
		jint getLightColor();
		jint getLockscreenVisibility();
		jstring getName();
		jstring getParentChannelId();
		android::net::Uri getSound();
		jlongArray getVibrationPattern();
		jboolean hasUserSetImportance();
		jboolean hasUserSetSound();
		jint hashCode();
		jboolean isConversation();
		jboolean isDemoted();
		jboolean isImportantConversation();
		void setAllowBubbles(jboolean arg0);
		void setBypassDnd(jboolean arg0);
		void setConversationId(jstring arg0, jstring arg1);
		void setDescription(jstring arg0);
		void setGroup(jstring arg0);
		void setImportance(jint arg0);
		void setLightColor(jint arg0);
		void setLockscreenVisibility(jint arg0);
		void setName(jstring arg0);
		void setShowBadge(jboolean arg0);
		void setSound(android::net::Uri arg0, android::media::AudioAttributes arg1);
		void setVibrationPattern(jlongArray arg0);
		jboolean shouldShowLights();
		jboolean shouldVibrate();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

