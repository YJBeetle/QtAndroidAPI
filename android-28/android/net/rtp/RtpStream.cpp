#include "../../../java/net/InetAddress.hpp"
#include "./RtpStream.hpp"

namespace android::net::rtp
{
	// Fields
	jint RtpStream::MODE_NORMAL()
	{
		return getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_NORMAL"
		);
	}
	jint RtpStream::MODE_RECEIVE_ONLY()
	{
		return getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_RECEIVE_ONLY"
		);
	}
	jint RtpStream::MODE_SEND_ONLY()
	{
		return getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_SEND_ONLY"
		);
	}
	
	// QJniObject forward
	RtpStream::RtpStream(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void RtpStream::associate(java::net::InetAddress arg0, jint arg1)
	{
		callMethod<void>(
			"associate",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	java::net::InetAddress RtpStream::getLocalAddress()
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint RtpStream::getLocalPort()
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	jint RtpStream::getMode()
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	java::net::InetAddress RtpStream::getRemoteAddress()
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint RtpStream::getRemotePort()
	{
		return callMethod<jint>(
			"getRemotePort",
			"()I"
		);
	}
	jboolean RtpStream::isBusy()
	{
		return callMethod<jboolean>(
			"isBusy",
			"()Z"
		);
	}
	void RtpStream::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void RtpStream::setMode(jint arg0)
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::rtp

