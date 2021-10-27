#include "../../../java/net/InetAddress.hpp"
#include "./RtpStream.hpp"

namespace android::net::rtp
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
	
	RtpStream::RtpStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void RtpStream::associate(java::net::InetAddress arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"associate",
			"(Ljava/net/InetAddress;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject RtpStream::getLocalAddress()
	{
		return __thiz.callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint RtpStream::getLocalPort()
	{
		return __thiz.callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	jint RtpStream::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
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
	void RtpStream::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
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
} // namespace android::net::rtp

