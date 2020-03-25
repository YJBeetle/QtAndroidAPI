#pragma once

#ifndef ANDROID_NET_RTP_AUDIOSTREAM
#define ANDROID_NET_RTP_AUDIOSTREAM

#include "../../../__JniBaseClass.hpp"
#include "RtpStream.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::android::net::rtp
{
	class AudioGroup;
}
namespace __jni_impl::android::net::rtp
{
	class AudioCodec;
}

namespace __jni_impl::android::net::rtp
{
	class AudioStream : public __jni_impl::android::net::rtp::RtpStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::net::InetAddress arg0);
		
		// Methods
		void join(__jni_impl::android::net::rtp::AudioGroup arg0);
		jboolean isBusy();
		jint getDtmfType();
		QAndroidJniObject getCodec();
		void setCodec(__jni_impl::android::net::rtp::AudioCodec arg0);
		void setDtmfType(jint arg0);
		QAndroidJniObject getGroup();
	};
} // namespace __jni_impl::android::net::rtp

#include "../../../java/net/InetAddress.hpp"
#include "AudioGroup.hpp"
#include "AudioCodec.hpp"

namespace __jni_impl::android::net::rtp
{
	// Fields
	
	// Constructors
	void AudioStream::__constructor(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.rtp.AudioStream",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void AudioStream::join(__jni_impl::android::net::rtp::AudioGroup arg0)
	{
		__thiz.callMethod<void>(
			"join",
			"(Landroid/net/rtp/AudioGroup;)V",
			arg0.__jniObject().object());
	}
	jboolean AudioStream::isBusy()
	{
		return __thiz.callMethod<jboolean>(
			"isBusy",
			"()Z");
	}
	jint AudioStream::getDtmfType()
	{
		return __thiz.callMethod<jint>(
			"getDtmfType",
			"()I");
	}
	QAndroidJniObject AudioStream::getCodec()
	{
		return __thiz.callObjectMethod(
			"getCodec",
			"()Landroid/net/rtp/AudioCodec;");
	}
	void AudioStream::setCodec(__jni_impl::android::net::rtp::AudioCodec arg0)
	{
		__thiz.callMethod<void>(
			"setCodec",
			"(Landroid/net/rtp/AudioCodec;)V",
			arg0.__jniObject().object());
	}
	void AudioStream::setDtmfType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDtmfType",
			"(I)V",
			arg0);
	}
	QAndroidJniObject AudioStream::getGroup()
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"()Landroid/net/rtp/AudioGroup;");
	}
} // namespace __jni_impl::android::net::rtp

namespace android::net::rtp
{
	class AudioStream : public __jni_impl::android::net::rtp::AudioStream
	{
	public:
		AudioStream(QAndroidJniObject obj) { __thiz = obj; }
		AudioStream(__jni_impl::java::net::InetAddress arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::rtp

#endif // ANDROID_NET_RTP_AUDIOSTREAM

