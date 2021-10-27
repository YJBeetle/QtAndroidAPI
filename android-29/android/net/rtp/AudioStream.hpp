#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./RtpStream.hpp"

namespace __jni_impl::android::net::rtp
{
	class AudioCodec;
}
namespace __jni_impl::android::net::rtp
{
	class AudioGroup;
}
namespace __jni_impl::java::net
{
	class InetAddress;
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
		QAndroidJniObject getCodec();
		jint getDtmfType();
		QAndroidJniObject getGroup();
		jboolean isBusy();
		void join(__jni_impl::android::net::rtp::AudioGroup arg0);
		void setCodec(__jni_impl::android::net::rtp::AudioCodec arg0);
		void setDtmfType(jint arg0);
	};
} // namespace __jni_impl::android::net::rtp

#include "./AudioCodec.hpp"
#include "./AudioGroup.hpp"
#include "../../../java/net/InetAddress.hpp"

namespace __jni_impl::android::net::rtp
{
	// Fields
	
	// Constructors
	void AudioStream::__constructor(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.rtp.AudioStream",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject AudioStream::getCodec()
	{
		return __thiz.callObjectMethod(
			"getCodec",
			"()Landroid/net/rtp/AudioCodec;"
		);
	}
	jint AudioStream::getDtmfType()
	{
		return __thiz.callMethod<jint>(
			"getDtmfType",
			"()I"
		);
	}
	QAndroidJniObject AudioStream::getGroup()
	{
		return __thiz.callObjectMethod(
			"getGroup",
			"()Landroid/net/rtp/AudioGroup;"
		);
	}
	jboolean AudioStream::isBusy()
	{
		return __thiz.callMethod<jboolean>(
			"isBusy",
			"()Z"
		);
	}
	void AudioStream::join(__jni_impl::android::net::rtp::AudioGroup arg0)
	{
		__thiz.callMethod<void>(
			"join",
			"(Landroid/net/rtp/AudioGroup;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioStream::setCodec(__jni_impl::android::net::rtp::AudioCodec arg0)
	{
		__thiz.callMethod<void>(
			"setCodec",
			"(Landroid/net/rtp/AudioCodec;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioStream::setDtmfType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDtmfType",
			"(I)V",
			arg0
		);
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

