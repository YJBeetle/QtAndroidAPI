#pragma once

#ifndef ANDROID_NET_RTP_AUDIOCODEC
#define ANDROID_NET_RTP_AUDIOCODEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::rtp
{
	class AudioCodec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AMR();
		static QAndroidJniObject GSM();
		static QAndroidJniObject GSM_EFR();
		static QAndroidJniObject PCMA();
		static QAndroidJniObject PCMU();
		QAndroidJniObject fmtp();
		QAndroidJniObject rtpmap();
		jint type();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getCodec(jint arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject getCodecs();
	};
} // namespace __jni_impl::android::net::rtp


namespace __jni_impl::android::net::rtp
{
	// Fields
	QAndroidJniObject AudioCodec::AMR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"AMR",
			"Landroid/net/rtp/AudioCodec;");
	}
	QAndroidJniObject AudioCodec::GSM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"GSM",
			"Landroid/net/rtp/AudioCodec;");
	}
	QAndroidJniObject AudioCodec::GSM_EFR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"GSM_EFR",
			"Landroid/net/rtp/AudioCodec;");
	}
	QAndroidJniObject AudioCodec::PCMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"PCMA",
			"Landroid/net/rtp/AudioCodec;");
	}
	QAndroidJniObject AudioCodec::PCMU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"PCMU",
			"Landroid/net/rtp/AudioCodec;");
	}
	QAndroidJniObject AudioCodec::fmtp()
	{
		return __thiz.getObjectField(
			"fmtp",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AudioCodec::rtpmap()
	{
		return __thiz.getObjectField(
			"rtpmap",
			"Ljava/lang/String;");
	}
	jint AudioCodec::type()
	{
		return __thiz.getField<jint>(
			"type");
	}
	
	// Constructors
	void AudioCodec::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.rtp.AudioCodec",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AudioCodec::getCodec(jint arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodec",
			"(ILjava/lang/String;Ljava/lang/String;)Landroid/net/rtp/AudioCodec;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject AudioCodec::getCodecs()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodecs",
			"()[Landroid/net/rtp/AudioCodec;");
	}
} // namespace __jni_impl::android::net::rtp

namespace android::net::rtp
{
	class AudioCodec : public __jni_impl::android::net::rtp::AudioCodec
	{
	public:
		AudioCodec(QAndroidJniObject obj) { __thiz = obj; }
		AudioCodec()
		{
			__constructor();
		}
	};
} // namespace android::net::rtp

#endif // ANDROID_NET_RTP_AUDIOCODEC

