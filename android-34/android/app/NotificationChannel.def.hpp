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
		static JString EDIT_CONVERSATION();
		static JString EDIT_IMPORTANCE();
		static JString EDIT_LAUNCHER();
		static JString EDIT_LOCKED_DEVICE();
		static JString EDIT_SOUND();
		static JString EDIT_VIBRATION();
		static JString EDIT_ZEN();
		
		// QJniObject forward
		template<typename ...Ts> explicit NotificationChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NotificationChannel(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		NotificationChannel(JString arg0, JString arg1, jint arg2);
		
		// Methods
		jboolean canBubble() const;
		jboolean canBypassDnd() const;
		jboolean canShowBadge() const;
		jint describeContents() const;
		void enableLights(jboolean arg0) const;
		void enableVibration(jboolean arg0) const;
		jboolean equals(JObject arg0) const;
		android::media::AudioAttributes getAudioAttributes() const;
		JString getConversationId() const;
		JString getDescription() const;
		JString getGroup() const;
		JString getId() const;
		jint getImportance() const;
		jint getLightColor() const;
		jint getLockscreenVisibility() const;
		JString getName() const;
		JString getParentChannelId() const;
		android::net::Uri getSound() const;
		JLongArray getVibrationPattern() const;
		jboolean hasUserSetImportance() const;
		jboolean hasUserSetSound() const;
		jint hashCode() const;
		jboolean isBlockable() const;
		jboolean isConversation() const;
		jboolean isDemoted() const;
		jboolean isImportantConversation() const;
		void setAllowBubbles(jboolean arg0) const;
		void setBlockable(jboolean arg0) const;
		void setBypassDnd(jboolean arg0) const;
		void setConversationId(JString arg0, JString arg1) const;
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

