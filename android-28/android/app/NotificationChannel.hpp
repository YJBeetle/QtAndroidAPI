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
		jboolean canBypassDnd() const;
		jboolean canShowBadge() const;
		jint describeContents() const;
		void enableLights(jboolean arg0) const;
		void enableVibration(jboolean arg0) const;
		jboolean equals(JObject arg0) const;
		android::media::AudioAttributes getAudioAttributes() const;
		JString getDescription() const;
		JString getGroup() const;
		JString getId() const;
		jint getImportance() const;
		jint getLightColor() const;
		jint getLockscreenVisibility() const;
		JString getName() const;
		android::net::Uri getSound() const;
		JLongArray getVibrationPattern() const;
		jint hashCode() const;
		void setBypassDnd(jboolean arg0) const;
		void setDescription(JString arg0) const;
		void setGroup(JString arg0) const;
		void setImportance(jint arg0) const;
		void setLightColor(jint arg0) const;
		void setLockscreenVisibility(jint arg0) const;
		void setName(JString arg0) const;
		void setShowBadge(jboolean arg0) const;
		void setSound(android::net::Uri arg0, android::media::AudioAttributes arg1) const;
		void setVibrationPattern(JLongArray arg0) const;
		jboolean shouldShowLights() const;
		jboolean shouldVibrate() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

