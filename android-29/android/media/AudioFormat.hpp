#pragma once

#ifndef ANDROID_MEDIA_AUDIOFORMAT
#define ANDROID_MEDIA_AUDIOFORMAT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class AudioFormat : public __JniBaseClass
	{
	public:
		// Fields
		static jint CHANNEL_CONFIGURATION_DEFAULT();
		static jint CHANNEL_CONFIGURATION_INVALID();
		static jint CHANNEL_CONFIGURATION_MONO();
		static jint CHANNEL_CONFIGURATION_STEREO();
		static jint CHANNEL_INVALID();
		static jint CHANNEL_IN_BACK();
		static jint CHANNEL_IN_BACK_PROCESSED();
		static jint CHANNEL_IN_DEFAULT();
		static jint CHANNEL_IN_FRONT();
		static jint CHANNEL_IN_FRONT_PROCESSED();
		static jint CHANNEL_IN_LEFT();
		static jint CHANNEL_IN_LEFT_PROCESSED();
		static jint CHANNEL_IN_MONO();
		static jint CHANNEL_IN_PRESSURE();
		static jint CHANNEL_IN_RIGHT();
		static jint CHANNEL_IN_RIGHT_PROCESSED();
		static jint CHANNEL_IN_STEREO();
		static jint CHANNEL_IN_VOICE_DNLINK();
		static jint CHANNEL_IN_VOICE_UPLINK();
		static jint CHANNEL_IN_X_AXIS();
		static jint CHANNEL_IN_Y_AXIS();
		static jint CHANNEL_IN_Z_AXIS();
		static jint CHANNEL_OUT_5POINT1();
		static jint CHANNEL_OUT_7POINT1();
		static jint CHANNEL_OUT_7POINT1_SURROUND();
		static jint CHANNEL_OUT_BACK_CENTER();
		static jint CHANNEL_OUT_BACK_LEFT();
		static jint CHANNEL_OUT_BACK_RIGHT();
		static jint CHANNEL_OUT_DEFAULT();
		static jint CHANNEL_OUT_FRONT_CENTER();
		static jint CHANNEL_OUT_FRONT_LEFT();
		static jint CHANNEL_OUT_FRONT_LEFT_OF_CENTER();
		static jint CHANNEL_OUT_FRONT_RIGHT();
		static jint CHANNEL_OUT_FRONT_RIGHT_OF_CENTER();
		static jint CHANNEL_OUT_LOW_FREQUENCY();
		static jint CHANNEL_OUT_MONO();
		static jint CHANNEL_OUT_QUAD();
		static jint CHANNEL_OUT_SIDE_LEFT();
		static jint CHANNEL_OUT_SIDE_RIGHT();
		static jint CHANNEL_OUT_STEREO();
		static jint CHANNEL_OUT_SURROUND();
		static QAndroidJniObject CREATOR();
		static jint ENCODING_AAC_ELD();
		static jint ENCODING_AAC_HE_V1();
		static jint ENCODING_AAC_HE_V2();
		static jint ENCODING_AAC_LC();
		static jint ENCODING_AAC_XHE();
		static jint ENCODING_AC3();
		static jint ENCODING_AC4();
		static jint ENCODING_DEFAULT();
		static jint ENCODING_DOLBY_MAT();
		static jint ENCODING_DOLBY_TRUEHD();
		static jint ENCODING_DTS();
		static jint ENCODING_DTS_HD();
		static jint ENCODING_E_AC3();
		static jint ENCODING_E_AC3_JOC();
		static jint ENCODING_IEC61937();
		static jint ENCODING_INVALID();
		static jint ENCODING_MP3();
		static jint ENCODING_PCM_16BIT();
		static jint ENCODING_PCM_8BIT();
		static jint ENCODING_PCM_FLOAT();
		static jint SAMPLE_RATE_UNSPECIFIED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getChannelCount();
		jint getChannelIndexMask();
		jint getChannelMask();
		jint getEncoding();
		jint getFrameSizeInBytes();
		jint getSampleRate();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint AudioFormat::CHANNEL_CONFIGURATION_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_DEFAULT"
		);
	}
	jint AudioFormat::CHANNEL_CONFIGURATION_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_INVALID"
		);
	}
	jint AudioFormat::CHANNEL_CONFIGURATION_MONO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_MONO"
		);
	}
	jint AudioFormat::CHANNEL_CONFIGURATION_STEREO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_STEREO"
		);
	}
	jint AudioFormat::CHANNEL_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_INVALID"
		);
	}
	jint AudioFormat::CHANNEL_IN_BACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_BACK"
		);
	}
	jint AudioFormat::CHANNEL_IN_BACK_PROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_BACK_PROCESSED"
		);
	}
	jint AudioFormat::CHANNEL_IN_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_DEFAULT"
		);
	}
	jint AudioFormat::CHANNEL_IN_FRONT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_FRONT"
		);
	}
	jint AudioFormat::CHANNEL_IN_FRONT_PROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_FRONT_PROCESSED"
		);
	}
	jint AudioFormat::CHANNEL_IN_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_LEFT"
		);
	}
	jint AudioFormat::CHANNEL_IN_LEFT_PROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_LEFT_PROCESSED"
		);
	}
	jint AudioFormat::CHANNEL_IN_MONO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_MONO"
		);
	}
	jint AudioFormat::CHANNEL_IN_PRESSURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_PRESSURE"
		);
	}
	jint AudioFormat::CHANNEL_IN_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_RIGHT"
		);
	}
	jint AudioFormat::CHANNEL_IN_RIGHT_PROCESSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_RIGHT_PROCESSED"
		);
	}
	jint AudioFormat::CHANNEL_IN_STEREO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_STEREO"
		);
	}
	jint AudioFormat::CHANNEL_IN_VOICE_DNLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_VOICE_DNLINK"
		);
	}
	jint AudioFormat::CHANNEL_IN_VOICE_UPLINK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_VOICE_UPLINK"
		);
	}
	jint AudioFormat::CHANNEL_IN_X_AXIS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_X_AXIS"
		);
	}
	jint AudioFormat::CHANNEL_IN_Y_AXIS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_Y_AXIS"
		);
	}
	jint AudioFormat::CHANNEL_IN_Z_AXIS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_Z_AXIS"
		);
	}
	jint AudioFormat::CHANNEL_OUT_5POINT1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_5POINT1"
		);
	}
	jint AudioFormat::CHANNEL_OUT_7POINT1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_7POINT1"
		);
	}
	jint AudioFormat::CHANNEL_OUT_7POINT1_SURROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_7POINT1_SURROUND"
		);
	}
	jint AudioFormat::CHANNEL_OUT_BACK_CENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_CENTER"
		);
	}
	jint AudioFormat::CHANNEL_OUT_BACK_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_LEFT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_BACK_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_RIGHT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_DEFAULT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_CENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_CENTER"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_LEFT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_LEFT_OF_CENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_LEFT_OF_CENTER"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_RIGHT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_RIGHT_OF_CENTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_RIGHT_OF_CENTER"
		);
	}
	jint AudioFormat::CHANNEL_OUT_LOW_FREQUENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_LOW_FREQUENCY"
		);
	}
	jint AudioFormat::CHANNEL_OUT_MONO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_MONO"
		);
	}
	jint AudioFormat::CHANNEL_OUT_QUAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_QUAD"
		);
	}
	jint AudioFormat::CHANNEL_OUT_SIDE_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SIDE_LEFT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_SIDE_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SIDE_RIGHT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_STEREO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_STEREO"
		);
	}
	jint AudioFormat::CHANNEL_OUT_SURROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SURROUND"
		);
	}
	QAndroidJniObject AudioFormat::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioFormat",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AudioFormat::ENCODING_AAC_ELD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_ELD"
		);
	}
	jint AudioFormat::ENCODING_AAC_HE_V1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_HE_V1"
		);
	}
	jint AudioFormat::ENCODING_AAC_HE_V2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_HE_V2"
		);
	}
	jint AudioFormat::ENCODING_AAC_LC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_LC"
		);
	}
	jint AudioFormat::ENCODING_AAC_XHE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_XHE"
		);
	}
	jint AudioFormat::ENCODING_AC3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AC3"
		);
	}
	jint AudioFormat::ENCODING_AC4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AC4"
		);
	}
	jint AudioFormat::ENCODING_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DEFAULT"
		);
	}
	jint AudioFormat::ENCODING_DOLBY_MAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DOLBY_MAT"
		);
	}
	jint AudioFormat::ENCODING_DOLBY_TRUEHD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DOLBY_TRUEHD"
		);
	}
	jint AudioFormat::ENCODING_DTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS"
		);
	}
	jint AudioFormat::ENCODING_DTS_HD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS_HD"
		);
	}
	jint AudioFormat::ENCODING_E_AC3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_E_AC3"
		);
	}
	jint AudioFormat::ENCODING_E_AC3_JOC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_E_AC3_JOC"
		);
	}
	jint AudioFormat::ENCODING_IEC61937()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_IEC61937"
		);
	}
	jint AudioFormat::ENCODING_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_INVALID"
		);
	}
	jint AudioFormat::ENCODING_MP3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_MP3"
		);
	}
	jint AudioFormat::ENCODING_PCM_16BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_16BIT"
		);
	}
	jint AudioFormat::ENCODING_PCM_8BIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_8BIT"
		);
	}
	jint AudioFormat::ENCODING_PCM_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_FLOAT"
		);
	}
	jint AudioFormat::SAMPLE_RATE_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioFormat",
			"SAMPLE_RATE_UNSPECIFIED"
		);
	}
	
	// Constructors
	void AudioFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioFormat",
			"(V)V");
	}
	
	// Methods
	jint AudioFormat::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AudioFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AudioFormat::getChannelCount()
	{
		return __thiz.callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	jint AudioFormat::getChannelIndexMask()
	{
		return __thiz.callMethod<jint>(
			"getChannelIndexMask",
			"()I"
		);
	}
	jint AudioFormat::getChannelMask()
	{
		return __thiz.callMethod<jint>(
			"getChannelMask",
			"()I"
		);
	}
	jint AudioFormat::getEncoding()
	{
		return __thiz.callMethod<jint>(
			"getEncoding",
			"()I"
		);
	}
	jint AudioFormat::getFrameSizeInBytes()
	{
		return __thiz.callMethod<jint>(
			"getFrameSizeInBytes",
			"()I"
		);
	}
	jint AudioFormat::getSampleRate()
	{
		return __thiz.callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	jint AudioFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AudioFormat::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AudioFormat::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioFormat : public __jni_impl::android::media::AudioFormat
	{
	public:
		AudioFormat(QAndroidJniObject obj) { __thiz = obj; }
		AudioFormat()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOFORMAT

