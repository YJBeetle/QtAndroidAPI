#pragma once

#ifndef ANDROID_TELECOM_VIDEOPROFILE
#define ANDROID_TELECOM_VIDEOPROFILE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telecom
{
	class VideoProfile : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint QUALITY_DEFAULT();
		static jint QUALITY_HIGH();
		static jint QUALITY_LOW();
		static jint QUALITY_MEDIUM();
		static jint STATE_AUDIO_ONLY();
		static jint STATE_BIDIRECTIONAL();
		static jint STATE_PAUSED();
		static jint STATE_RX_ENABLED();
		static jint STATE_TX_ENABLED();
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getVideoState();
		jint getQuality();
		static jstring videoStateToString(jint arg0);
		static jboolean isAudioOnly(jint arg0);
		static jboolean isVideo(jint arg0);
		static jboolean isTransmissionEnabled(jint arg0);
		static jboolean isReceptionEnabled(jint arg0);
		static jboolean isBidirectional(jint arg0);
		static jboolean isPaused(jint arg0);
	};
} // namespace __jni_impl::android::telecom

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject VideoProfile::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.VideoProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint VideoProfile::QUALITY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_DEFAULT"
		);
	}
	jint VideoProfile::QUALITY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_HIGH"
		);
	}
	jint VideoProfile::QUALITY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_LOW"
		);
	}
	jint VideoProfile::QUALITY_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"QUALITY_MEDIUM"
		);
	}
	jint VideoProfile::STATE_AUDIO_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_AUDIO_ONLY"
		);
	}
	jint VideoProfile::STATE_BIDIRECTIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_BIDIRECTIONAL"
		);
	}
	jint VideoProfile::STATE_PAUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_PAUSED"
		);
	}
	jint VideoProfile::STATE_RX_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_RX_ENABLED"
		);
	}
	jint VideoProfile::STATE_TX_ENABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.VideoProfile",
			"STATE_TX_ENABLED"
		);
	}
	
	// Constructors
	void VideoProfile::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.VideoProfile",
			"(I)V",
			arg0);
	}
	void VideoProfile::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.VideoProfile",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	jstring VideoProfile::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint VideoProfile::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void VideoProfile::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint VideoProfile::getVideoState()
	{
		return __thiz.callMethod<jint>(
			"getVideoState",
			"()I"
		);
	}
	jint VideoProfile::getQuality()
	{
		return __thiz.callMethod<jint>(
			"getQuality",
			"()I"
		);
	}
	jstring VideoProfile::videoStateToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.VideoProfile",
			"videoStateToString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean VideoProfile::isAudioOnly(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isAudioOnly",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isVideo(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isVideo",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isTransmissionEnabled(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isTransmissionEnabled",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isReceptionEnabled(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isReceptionEnabled",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isBidirectional(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isBidirectional",
			"(I)Z",
			arg0
		);
	}
	jboolean VideoProfile::isPaused(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.telecom.VideoProfile",
			"isPaused",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class VideoProfile : public __jni_impl::android::telecom::VideoProfile
	{
	public:
		VideoProfile(QAndroidJniObject obj) { __thiz = obj; }
		VideoProfile(jint arg0)
		{
			__constructor(
				arg0);
		}
		VideoProfile(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_VIDEOPROFILE

