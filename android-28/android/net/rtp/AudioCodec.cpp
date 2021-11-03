#include "./AudioCodec.hpp"

namespace android::net::rtp
{
	// Fields
	android::net::rtp::AudioCodec AudioCodec::AMR()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"AMR",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	android::net::rtp::AudioCodec AudioCodec::GSM()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"GSM",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	android::net::rtp::AudioCodec AudioCodec::GSM_EFR()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"GSM_EFR",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	android::net::rtp::AudioCodec AudioCodec::PCMA()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"PCMA",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	android::net::rtp::AudioCodec AudioCodec::PCMU()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"PCMU",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	jstring AudioCodec::fmtp()
	{
		return getObjectField(
			"fmtp",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioCodec::rtpmap()
	{
		return getObjectField(
			"rtpmap",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint AudioCodec::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// QJniObject forward
	AudioCodec::AudioCodec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::rtp::AudioCodec AudioCodec::getCodec(jint arg0, jstring arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodec",
			"(ILjava/lang/String;Ljava/lang/String;)Landroid/net/rtp/AudioCodec;",
			arg0,
			arg1,
			arg2
		);
	}
	jarray AudioCodec::getCodecs()
	{
		return callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodecs",
			"()[Landroid/net/rtp/AudioCodec;"
		).object<jarray>();
	}
} // namespace android::net::rtp

