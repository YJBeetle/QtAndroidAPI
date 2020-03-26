#pragma once

#ifndef ANDROID_NET_RTP_RTPSTREAM
#define ANDROID_NET_RTP_RTPSTREAM

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::net::rtp
{
	class RtpStream : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_NORMAL();
		static jint MODE_RECEIVE_ONLY();
		static jint MODE_SEND_ONLY();
		
		// Constructors
		void __constructor();
		
		// Methods
		void release();
		QAndroidJniObject getRemoteAddress();
		jint getRemotePort();
		jboolean isBusy();
		jint getMode();
		void setMode(jint arg0);
		jint getLocalPort();
		QAndroidJniObject getLocalAddress();
		void associate(__jni_impl::java::net::InetAddress arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::rtp

#include "../../../java/net/InetAddress.hpp"

namespace __jni_impl::android::net::rtp
{
	// Fields
	jint RtpStream::MODE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_NORMAL"
		);
	}
	jint RtpStream::MODE_RECEIVE_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_RECEIVE_ONLY"
		);
	}
	jint RtpStream::MODE_SEND_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_SEND_ONLY"
		);
	}
	
	// Constructors
	void RtpStream::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.rtp.RtpStream",
			"(V)V");
	}
	
	// Methods
	void RtpStream::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	QAndroidJniObject RtpStream::getRemoteAddress()
	{
		return __thiz.callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint RtpStream::getRemotePort()
	{
		return __thiz.callMethod<jint>(
			"getRemotePort",
			"()I"
		);
	}
	jboolean RtpStream::isBusy()
	{
		return __thiz.callMethod<jboolean>(
			"isBusy",
			"()Z"
		);
	}
	jint RtpStream::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	void RtpStream::setMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
	jint RtpStream::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	QAndroidJniObject RtpStream::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	void RtpStream::associate(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"associate",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::rtp

namespace android::net::rtp
{
	class RtpStream : public __jni_impl::android::net::rtp::RtpStream
	{
	public:
		RtpStream(QAndroidJniObject obj) { __thiz = obj; }
		RtpStream()
		{
			__constructor();
		}
	};
} // namespace android::net::rtp

#endif // ANDROID_NET_RTP_RTPSTREAM

