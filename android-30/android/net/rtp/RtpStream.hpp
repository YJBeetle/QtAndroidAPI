#pragma once

#include "../../../java/net/InetAddress.def.hpp"
#include "./RtpStream.def.hpp"

namespace android::net::rtp
{
	// Fields
	inline jint RtpStream::MODE_NORMAL()
	{
		return getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_NORMAL"
		);
	}
	inline jint RtpStream::MODE_RECEIVE_ONLY()
	{
		return getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_RECEIVE_ONLY"
		);
	}
	inline jint RtpStream::MODE_SEND_ONLY()
	{
		return getStaticField<jint>(
			"android.net.rtp.RtpStream",
			"MODE_SEND_ONLY"
		);
	}
	
	// Constructors
	
	// Methods
	inline void RtpStream::associate(java::net::InetAddress arg0, jint arg1) const
	{
		callMethod<void>(
			"associate",
			"(Ljava/net/InetAddress;I)V",
			arg0.object(),
			arg1
		);
	}
	inline java::net::InetAddress RtpStream::getLocalAddress() const
	{
		return callObjectMethod(
			"getLocalAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jint RtpStream::getLocalPort() const
	{
		return callMethod<jint>(
			"getLocalPort",
			"()I"
		);
	}
	inline jint RtpStream::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline java::net::InetAddress RtpStream::getRemoteAddress() const
	{
		return callObjectMethod(
			"getRemoteAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	inline jint RtpStream::getRemotePort() const
	{
		return callMethod<jint>(
			"getRemotePort",
			"()I"
		);
	}
	inline jboolean RtpStream::isBusy() const
	{
		return callMethod<jboolean>(
			"isBusy",
			"()Z"
		);
	}
	inline void RtpStream::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void RtpStream::setMode(jint arg0) const
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::rtp

// Base class headers

