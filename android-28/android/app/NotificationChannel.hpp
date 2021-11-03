#pragma once

#include "../../JObject.hpp"

class JLongArray;
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
class JString;
class JObject;
class JString;

namespace android::app
{
	class NotificationChannel : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString DEFAULT_CHANNEL_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NotificationChannel(QAndroidJniObject obj);
		
		// Constructors
		NotificationChannel(JString arg0, JString arg1, jint arg2);
		
		// Methods
		jboolean canBypassDnd();
		jboolean canShowBadge();
		jint describeContents();
		void enableLights(jboolean arg0);
		void enableVibration(jboolean arg0);
		jboolean equals(JObject arg0);
		android::media::AudioAttributes getAudioAttributes();
		JString getDescription();
		JString getGroup();
		JString getId();
		jint getImportance();
		jint getLightColor();
		jint getLockscreenVisibility();
		JString getName();
		android::net::Uri getSound();
		JLongArray getVibrationPattern();
		jint hashCode();
		void setBypassDnd(jboolean arg0);
		void setDescription(JString arg0);
		void setGroup(JString arg0);
		void setImportance(jint arg0);
		void setLightColor(jint arg0);
		void setLockscreenVisibility(jint arg0);
		void setName(JString arg0);
		void setShowBadge(jboolean arg0);
		void setSound(android::net::Uri arg0, android::media::AudioAttributes arg1);
		void setVibrationPattern(JLongArray arg0);
		jboolean shouldShowLights();
		jboolean shouldVibrate();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

