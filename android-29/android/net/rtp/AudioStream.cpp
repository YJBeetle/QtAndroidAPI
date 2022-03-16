#include "./AudioCodec.hpp"
#include "./AudioGroup.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./AudioStream.hpp"

namespace android::net::rtp
{
	// Fields
	
	// Constructors
	AudioStream::AudioStream(java::net::InetAddress arg0)
		: android::net::rtp::RtpStream(
			"android.net.rtp.AudioStream",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::rtp::AudioCodec AudioStream::getCodec() const
	{
		return callObjectMethod(
			"getCodec",
			"()Landroid/net/rtp/AudioCodec;"
		);
	}
	jint AudioStream::getDtmfType() const
	{
		return callMethod<jint>(
			"getDtmfType",
			"()I"
		);
	}
	android::net::rtp::AudioGroup AudioStream::getGroup() const
	{
		return callObjectMethod(
			"getGroup",
			"()Landroid/net/rtp/AudioGroup;"
		);
	}
	jboolean AudioStream::isBusy() const
	{
		return callMethod<jboolean>(
			"isBusy",
			"()Z"
		);
	}
	void AudioStream::join(android::net::rtp::AudioGroup arg0) const
	{
		callMethod<void>(
			"join",
			"(Landroid/net/rtp/AudioGroup;)V",
			arg0.object()
		);
	}
	void AudioStream::setCodec(android::net::rtp::AudioCodec arg0) const
	{
		callMethod<void>(
			"setCodec",
			"(Landroid/net/rtp/AudioCodec;)V",
			arg0.object()
		);
	}
	void AudioStream::setDtmfType(jint arg0) const
	{
		callMethod<void>(
			"setDtmfType",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::rtp

