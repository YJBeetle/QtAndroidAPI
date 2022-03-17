#pragma once

#include "./AudioCodec.def.hpp"
#include "./AudioGroup.def.hpp"
#include "../../../java/net/InetAddress.def.hpp"
#include "./AudioStream.def.hpp"

namespace android::net::rtp
{
	// Fields
	
	// Constructors
	inline AudioStream::AudioStream(java::net::InetAddress arg0)
		: android::net::rtp::RtpStream(
			"android.net.rtp.AudioStream",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::rtp::AudioCodec AudioStream::getCodec() const
	{
		return callObjectMethod(
			"getCodec",
			"()Landroid/net/rtp/AudioCodec;"
		);
	}
	inline jint AudioStream::getDtmfType() const
	{
		return callMethod<jint>(
			"getDtmfType",
			"()I"
		);
	}
	inline android::net::rtp::AudioGroup AudioStream::getGroup() const
	{
		return callObjectMethod(
			"getGroup",
			"()Landroid/net/rtp/AudioGroup;"
		);
	}
	inline jboolean AudioStream::isBusy() const
	{
		return callMethod<jboolean>(
			"isBusy",
			"()Z"
		);
	}
	inline void AudioStream::join(android::net::rtp::AudioGroup arg0) const
	{
		callMethod<void>(
			"join",
			"(Landroid/net/rtp/AudioGroup;)V",
			arg0.object()
		);
	}
	inline void AudioStream::setCodec(android::net::rtp::AudioCodec arg0) const
	{
		callMethod<void>(
			"setCodec",
			"(Landroid/net/rtp/AudioCodec;)V",
			arg0.object()
		);
	}
	inline void AudioStream::setDtmfType(jint arg0) const
	{
		callMethod<void>(
			"setDtmfType",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::rtp

// Base class headers
#include "./RtpStream.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::rtp;
#endif
