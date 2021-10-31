#include "../media/AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "./NotificationChannel.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass NotificationChannel::CREATOR()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring NotificationChannel::DEFAULT_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"DEFAULT_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	NotificationChannel::NotificationChannel(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NotificationChannel::NotificationChannel(jstring arg0, jstring arg1, jint arg2)
		: __JniBaseClass(
			"android.app.NotificationChannel",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean NotificationChannel::canBubble()
	{
		return callMethod<jboolean>(
			"canBubble",
			"()Z"
		);
	}
	jboolean NotificationChannel::canBypassDnd()
	{
		return callMethod<jboolean>(
			"canBypassDnd",
			"()Z"
		);
	}
	jboolean NotificationChannel::canShowBadge()
	{
		return callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	jint NotificationChannel::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NotificationChannel::enableLights(jboolean arg0)
	{
		callMethod<void>(
			"enableLights",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::enableVibration(jboolean arg0)
	{
		callMethod<void>(
			"enableVibration",
			"(Z)V",
			arg0
		);
	}
	jboolean NotificationChannel::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::media::AudioAttributes NotificationChannel::getAudioAttributes()
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jstring NotificationChannel::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationChannel::getGroup()
	{
		return callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationChannel::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationChannel::getImportance()
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	jint NotificationChannel::getLightColor()
	{
		return callMethod<jint>(
			"getLightColor",
			"()I"
		);
	}
	jint NotificationChannel::getLockscreenVisibility()
	{
		return callMethod<jint>(
			"getLockscreenVisibility",
			"()I"
		);
	}
	jstring NotificationChannel::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::net::Uri NotificationChannel::getSound()
	{
		return callObjectMethod(
			"getSound",
			"()Landroid/net/Uri;"
		);
	}
	jlongArray NotificationChannel::getVibrationPattern()
	{
		return callObjectMethod(
			"getVibrationPattern",
			"()[J"
		).object<jlongArray>();
	}
	jboolean NotificationChannel::hasUserSetImportance()
	{
		return callMethod<jboolean>(
			"hasUserSetImportance",
			"()Z"
		);
	}
	jint NotificationChannel::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void NotificationChannel::setAllowBubbles(jboolean arg0)
	{
		callMethod<void>(
			"setAllowBubbles",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setBypassDnd(jboolean arg0)
	{
		callMethod<void>(
			"setBypassDnd",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setDescription(jstring arg0)
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationChannel::setGroup(jstring arg0)
	{
		callMethod<void>(
			"setGroup",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationChannel::setImportance(jint arg0)
	{
		callMethod<void>(
			"setImportance",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setLightColor(jint arg0)
	{
		callMethod<void>(
			"setLightColor",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setLockscreenVisibility(jint arg0)
	{
		callMethod<void>(
			"setLockscreenVisibility",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setName(jstring arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void NotificationChannel::setShowBadge(jboolean arg0)
	{
		callMethod<void>(
			"setShowBadge",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setSound(android::net::Uri arg0, android::media::AudioAttributes arg1)
	{
		callMethod<void>(
			"setSound",
			"(Landroid/net/Uri;Landroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void NotificationChannel::setVibrationPattern(jlongArray arg0)
	{
		callMethod<void>(
			"setVibrationPattern",
			"([J)V",
			arg0
		);
	}
	jboolean NotificationChannel::shouldShowLights()
	{
		return callMethod<jboolean>(
			"shouldShowLights",
			"()Z"
		);
	}
	jboolean NotificationChannel::shouldVibrate()
	{
		return callMethod<jboolean>(
			"shouldVibrate",
			"()Z"
		);
	}
	jstring NotificationChannel::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NotificationChannel::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

