#pragma once

#ifndef ANDROID_MEDIA_AUDIODEVICEINFO
#define ANDROID_MEDIA_AUDIODEVICEINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class AudioDeviceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_AUX_LINE();
		static jint TYPE_BLUETOOTH_A2DP();
		static jint TYPE_BLUETOOTH_SCO();
		static jint TYPE_BUILTIN_EARPIECE();
		static jint TYPE_BUILTIN_MIC();
		static jint TYPE_BUILTIN_SPEAKER();
		static jint TYPE_BUS();
		static jint TYPE_DOCK();
		static jint TYPE_FM();
		static jint TYPE_FM_TUNER();
		static jint TYPE_HDMI();
		static jint TYPE_HDMI_ARC();
		static jint TYPE_HEARING_AID();
		static jint TYPE_IP();
		static jint TYPE_LINE_ANALOG();
		static jint TYPE_LINE_DIGITAL();
		static jint TYPE_TELEPHONY();
		static jint TYPE_TV_TUNER();
		static jint TYPE_UNKNOWN();
		static jint TYPE_USB_ACCESSORY();
		static jint TYPE_USB_DEVICE();
		static jint TYPE_USB_HEADSET();
		static jint TYPE_WIRED_HEADPHONES();
		static jint TYPE_WIRED_HEADSET();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jint getId();
		jint getType();
		QAndroidJniObject getAddress();
		jboolean isSource();
		jboolean isSink();
		QAndroidJniObject getSampleRates();
		QAndroidJniObject getChannelMasks();
		QAndroidJniObject getChannelIndexMasks();
		QAndroidJniObject getChannelCounts();
		QAndroidJniObject getEncodings();
		QAndroidJniObject getProductName();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint AudioDeviceInfo::TYPE_AUX_LINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_AUX_LINE");
	}
	jint AudioDeviceInfo::TYPE_BLUETOOTH_A2DP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLUETOOTH_A2DP");
	}
	jint AudioDeviceInfo::TYPE_BLUETOOTH_SCO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BLUETOOTH_SCO");
	}
	jint AudioDeviceInfo::TYPE_BUILTIN_EARPIECE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_EARPIECE");
	}
	jint AudioDeviceInfo::TYPE_BUILTIN_MIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_MIC");
	}
	jint AudioDeviceInfo::TYPE_BUILTIN_SPEAKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUILTIN_SPEAKER");
	}
	jint AudioDeviceInfo::TYPE_BUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_BUS");
	}
	jint AudioDeviceInfo::TYPE_DOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_DOCK");
	}
	jint AudioDeviceInfo::TYPE_FM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_FM");
	}
	jint AudioDeviceInfo::TYPE_FM_TUNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_FM_TUNER");
	}
	jint AudioDeviceInfo::TYPE_HDMI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HDMI");
	}
	jint AudioDeviceInfo::TYPE_HDMI_ARC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HDMI_ARC");
	}
	jint AudioDeviceInfo::TYPE_HEARING_AID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_HEARING_AID");
	}
	jint AudioDeviceInfo::TYPE_IP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_IP");
	}
	jint AudioDeviceInfo::TYPE_LINE_ANALOG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_LINE_ANALOG");
	}
	jint AudioDeviceInfo::TYPE_LINE_DIGITAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_LINE_DIGITAL");
	}
	jint AudioDeviceInfo::TYPE_TELEPHONY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_TELEPHONY");
	}
	jint AudioDeviceInfo::TYPE_TV_TUNER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_TV_TUNER");
	}
	jint AudioDeviceInfo::TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_UNKNOWN");
	}
	jint AudioDeviceInfo::TYPE_USB_ACCESSORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_ACCESSORY");
	}
	jint AudioDeviceInfo::TYPE_USB_DEVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_DEVICE");
	}
	jint AudioDeviceInfo::TYPE_USB_HEADSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_USB_HEADSET");
	}
	jint AudioDeviceInfo::TYPE_WIRED_HEADPHONES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_WIRED_HEADPHONES");
	}
	jint AudioDeviceInfo::TYPE_WIRED_HEADSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.AudioDeviceInfo",
			"TYPE_WIRED_HEADSET");
	}
	
	// Constructors
	void AudioDeviceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioDeviceInfo",
			"(V)V");
	}
	
	// Methods
	jboolean AudioDeviceInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint AudioDeviceInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint AudioDeviceInfo::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
	jint AudioDeviceInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I");
	}
	QAndroidJniObject AudioDeviceInfo::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;");
	}
	jboolean AudioDeviceInfo::isSource()
	{
		return __thiz.callMethod<jboolean>(
			"isSource",
			"()Z");
	}
	jboolean AudioDeviceInfo::isSink()
	{
		return __thiz.callMethod<jboolean>(
			"isSink",
			"()Z");
	}
	QAndroidJniObject AudioDeviceInfo::getSampleRates()
	{
		return __thiz.callObjectMethod(
			"getSampleRates",
			"()[I");
	}
	QAndroidJniObject AudioDeviceInfo::getChannelMasks()
	{
		return __thiz.callObjectMethod(
			"getChannelMasks",
			"()[I");
	}
	QAndroidJniObject AudioDeviceInfo::getChannelIndexMasks()
	{
		return __thiz.callObjectMethod(
			"getChannelIndexMasks",
			"()[I");
	}
	QAndroidJniObject AudioDeviceInfo::getChannelCounts()
	{
		return __thiz.callObjectMethod(
			"getChannelCounts",
			"()[I");
	}
	QAndroidJniObject AudioDeviceInfo::getEncodings()
	{
		return __thiz.callObjectMethod(
			"getEncodings",
			"()[I");
	}
	QAndroidJniObject AudioDeviceInfo::getProductName()
	{
		return __thiz.callObjectMethod(
			"getProductName",
			"()Ljava/lang/CharSequence;");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioDeviceInfo : public __jni_impl::android::media::AudioDeviceInfo
	{
	public:
		AudioDeviceInfo(QAndroidJniObject obj) { __thiz = obj; }
		AudioDeviceInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIODEVICEINFO

