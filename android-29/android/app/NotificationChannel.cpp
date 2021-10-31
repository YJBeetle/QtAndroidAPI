#include "../media/AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "./NotificationChannel.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject NotificationChannel::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationChannel",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring NotificationChannel::DEFAULT_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationChannel",
			"DEFAULT_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	NotificationChannel::NotificationChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotificationChannel::NotificationChannel(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.NotificationChannel",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean NotificationChannel::canBubble()
	{
		return __thiz.callMethod<jboolean>(
			"canBubble",
			"()Z"
		);
	}
	jboolean NotificationChannel::canBypassDnd()
	{
		return __thiz.callMethod<jboolean>(
			"canBypassDnd",
			"()Z"
		);
	}
	jboolean NotificationChannel::canShowBadge()
	{
		return __thiz.callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	jint NotificationChannel::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NotificationChannel::enableLights(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"enableLights",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::enableVibration(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"enableVibration",
			"(Z)V",
			arg0
		);
	}
	jboolean NotificationChannel::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject NotificationChannel::getAudioAttributes()
	{
		return __thiz.callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jstring NotificationChannel::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationChannel::getGroup()
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NotificationChannel::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NotificationChannel::getImportance()
	{
		return __thiz.callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	jint NotificationChannel::getLightColor()
	{
		return __thiz.callMethod<jint>(
			"getLightColor",
			"()I"
		);
	}
	jint NotificationChannel::getLockscreenVisibility()
	{
		return __thiz.callMethod<jint>(
			"getLockscreenVisibility",
			"()I"
		);
	}
	jstring NotificationChannel::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject NotificationChannel::getSound()
	{
		return __thiz.callObjectMethod(
			"getSound",
			"()Landroid/net/Uri;"
		);
	}
	jlongArray NotificationChannel::getVibrationPattern()
	{
		return __thiz.callObjectMethod(
			"getVibrationPattern",
			"()[J"
		).object<jlongArray>();
	}
	jboolean NotificationChannel::hasUserSetImportance()
	{
		return __thiz.callMethod<jboolean>(
			"hasUserSetImportance",
			"()Z"
		);
	}
	jint NotificationChannel::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void NotificationChannel::setAllowBubbles(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAllowBubbles",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setBypassDnd(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBypassDnd",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationChannel::setGroup(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setGroup",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotificationChannel::setImportance(jint arg0)
	{
		__thiz.callMethod<void>(
			"setImportance",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setLightColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLightColor",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setLockscreenVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLockscreenVisibility",
			"(I)V",
			arg0
		);
	}
	void NotificationChannel::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void NotificationChannel::setShowBadge(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowBadge",
			"(Z)V",
			arg0
		);
	}
	void NotificationChannel::setSound(android::net::Uri arg0, android::media::AudioAttributes arg1)
	{
		__thiz.callMethod<void>(
			"setSound",
			"(Landroid/net/Uri;Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void NotificationChannel::setVibrationPattern(jlongArray arg0)
	{
		__thiz.callMethod<void>(
			"setVibrationPattern",
			"([J)V",
			arg0
		);
	}
	jboolean NotificationChannel::shouldShowLights()
	{
		return __thiz.callMethod<jboolean>(
			"shouldShowLights",
			"()Z"
		);
	}
	jboolean NotificationChannel::shouldVibrate()
	{
		return __thiz.callMethod<jboolean>(
			"shouldVibrate",
			"()Z"
		);
	}
	jstring NotificationChannel::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NotificationChannel::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

