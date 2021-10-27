#pragma once

#ifndef ANDROID_APP_NOTIFICATIONCHANNEL
#define ANDROID_APP_NOTIFICATIONCHANNEL

#include "../../__JniBaseClass.hpp"

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
	class Parcel;
}

namespace __jni_impl::android::app
{
	class NotificationChannel : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring DEFAULT_CHANNEL_ID();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2);
		
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
		void setSound(__jni_impl::android::net::Uri arg0, __jni_impl::android::media::AudioAttributes arg1);
		void setVibrationPattern(jlongArray arg0);
		jboolean shouldShowLights();
		jboolean shouldVibrate();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../media/AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void NotificationChannel::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.NotificationChannel",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NotificationChannel::__constructor(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.NotificationChannel",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
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
	void NotificationChannel::setDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void NotificationChannel::setGroup(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setGroup",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void NotificationChannel::setName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void NotificationChannel::setSound(__jni_impl::android::net::Uri arg0, __jni_impl::android::media::AudioAttributes arg1)
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
	void NotificationChannel::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class NotificationChannel : public __jni_impl::android::app::NotificationChannel
	{
	public:
		NotificationChannel(QAndroidJniObject obj) { __thiz = obj; }
		NotificationChannel(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATIONCHANNEL

