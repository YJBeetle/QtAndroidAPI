#include "../../JLongArray.hpp"
#include "../media/AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NotificationChannel.hpp"

namespace android::app
{
	// Fields
	JObject NotificationChannel::CREATOR()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString NotificationChannel::DEFAULT_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"DEFAULT_CHANNEL_ID",
			"Ljava/lang/String;"
		);
	}
	JString NotificationChannel::EDIT_CONVERSATION()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"EDIT_CONVERSATION",
			"Ljava/lang/String;"
		);
	}
	JString NotificationChannel::EDIT_IMPORTANCE()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"EDIT_IMPORTANCE",
			"Ljava/lang/String;"
		);
	}
	JString NotificationChannel::EDIT_LAUNCHER()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"EDIT_LAUNCHER",
			"Ljava/lang/String;"
		);
	}
	JString NotificationChannel::EDIT_LOCKED_DEVICE()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"EDIT_LOCKED_DEVICE",
			"Ljava/lang/String;"
		);
	}
	JString NotificationChannel::EDIT_SOUND()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"EDIT_SOUND",
			"Ljava/lang/String;"
		);
	}
	JString NotificationChannel::EDIT_VIBRATION()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"EDIT_VIBRATION",
			"Ljava/lang/String;"
		);
	}
	JString NotificationChannel::EDIT_ZEN()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"EDIT_ZEN",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	NotificationChannel::NotificationChannel(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NotificationChannel::NotificationChannel(JString arg0, JString arg1, jint arg2)
		: JObject(
			"android.app.NotificationChannel",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	jboolean NotificationChannel::canBubble() const
	{
		return callMethod<jboolean>(
			"canBubble",
			"()Z"
		);
	}
	jboolean NotificationChannel::canBypassDnd() const
	{
		return callMethod<jboolean>(
			"canBypassDnd",
			"()Z"
		);
	}
	jboolean NotificationChannel::canShowBadge() const
	{
		return callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	jint NotificationChannel::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NotificationChannel::enableLights(jboolean arg0) const
	{
		callMethod<void>(
			"enableLights",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::enableVibration(jboolean arg0) const
	{
		callMethod<void>(
			"enableVibration",
			"(Z)V",
			arg0
		);
	}
	jboolean NotificationChannel::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::media::AudioAttributes NotificationChannel::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	JString NotificationChannel::getConversationId() const
	{
		return callObjectMethod(
			"getConversationId",
			"()Ljava/lang/String;"
		);
	}
	JString NotificationChannel::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	JString NotificationChannel::getGroup() const
	{
		return callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;"
		);
	}
	JString NotificationChannel::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	jint NotificationChannel::getImportance() const
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	jint NotificationChannel::getLightColor() const
	{
		return callMethod<jint>(
			"getLightColor",
			"()I"
		);
	}
	jint NotificationChannel::getLockscreenVisibility() const
	{
		return callMethod<jint>(
			"getLockscreenVisibility",
			"()I"
		);
	}
	JString NotificationChannel::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString NotificationChannel::getParentChannelId() const
	{
		return callObjectMethod(
			"getParentChannelId",
			"()Ljava/lang/String;"
		);
	}
	android::net::Uri NotificationChannel::getSound() const
	{
		return callObjectMethod(
			"getSound",
			"()Landroid/net/Uri;"
		);
	}
	JLongArray NotificationChannel::getVibrationPattern() const
	{
		return callObjectMethod(
			"getVibrationPattern",
			"()[J"
		);
	}
	jboolean NotificationChannel::hasUserSetImportance() const
	{
		return callMethod<jboolean>(
			"hasUserSetImportance",
			"()Z"
		);
	}
	jboolean NotificationChannel::hasUserSetSound() const
	{
		return callMethod<jboolean>(
			"hasUserSetSound",
			"()Z"
		);
	}
	jint NotificationChannel::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NotificationChannel::isConversation() const
	{
		return callMethod<jboolean>(
			"isConversation",
			"()Z"
		);
	}
	jboolean NotificationChannel::isDemoted() const
	{
		return callMethod<jboolean>(
			"isDemoted",
			"()Z"
		);
	}
	jboolean NotificationChannel::isImportantConversation() const
	{
		return callMethod<jboolean>(
			"isImportantConversation",
			"()Z"
		);
	}
	void NotificationChannel::setAllowBubbles(jboolean arg0) const
	{
		callMethod<void>(
			"setAllowBubbles",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setBypassDnd(jboolean arg0) const
	{
		callMethod<void>(
			"setBypassDnd",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setConversationId(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setConversationId",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void NotificationChannel::setDescription(JString arg0) const
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void NotificationChannel::setGroup(JString arg0) const
	{
		callMethod<void>(
			"setGroup",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void NotificationChannel::setImportance(jint arg0) const
	{
		callMethod<void>(
			"setImportance",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setLightColor(jint arg0) const
	{
		callMethod<void>(
			"setLightColor",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setLockscreenVisibility(jint arg0) const
	{
		callMethod<void>(
			"setLockscreenVisibility",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void NotificationChannel::setShowBadge(jboolean arg0) const
	{
		callMethod<void>(
			"setShowBadge",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setSound(android::net::Uri arg0, android::media::AudioAttributes arg1) const
	{
		callMethod<void>(
			"setSound",
			"(Landroid/net/Uri;Landroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NotificationChannel::setVibrationPattern(JLongArray arg0) const
	{
		callMethod<void>(
			"setVibrationPattern",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	jboolean NotificationChannel::shouldShowLights() const
	{
		return callMethod<jboolean>(
			"shouldShowLights",
			"()Z"
		);
	}
	jboolean NotificationChannel::shouldVibrate() const
	{
		return callMethod<jboolean>(
			"shouldVibrate",
			"()Z"
		);
	}
	JString NotificationChannel::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NotificationChannel::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

