#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./AudioCodec.def.hpp"

namespace android::net::rtp
{
	// Fields
	inline android::net::rtp::AudioCodec AudioCodec::AMR()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"AMR",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	inline android::net::rtp::AudioCodec AudioCodec::GSM()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"GSM",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	inline android::net::rtp::AudioCodec AudioCodec::GSM_EFR()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"GSM_EFR",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	inline android::net::rtp::AudioCodec AudioCodec::PCMA()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"PCMA",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	inline android::net::rtp::AudioCodec AudioCodec::PCMU()
	{
		return getStaticObjectField(
			"android.net.rtp.AudioCodec",
			"PCMU",
			"Landroid/net/rtp/AudioCodec;"
		);
	}
	inline JString AudioCodec::fmtp()
	{
		return getObjectField(
			"fmtp",
			"Ljava/lang/String;"
		);
	}
	inline JString AudioCodec::rtpmap()
	{
		return getObjectField(
			"rtpmap",
			"Ljava/lang/String;"
		);
	}
	inline jint AudioCodec::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::rtp::AudioCodec AudioCodec::getCodec(jint arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodec",
			"(ILjava/lang/String;Ljava/lang/String;)Landroid/net/rtp/AudioCodec;",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	inline JArray AudioCodec::getCodecs()
	{
		return callStaticObjectMethod(
			"android.net.rtp.AudioCodec",
			"getCodecs",
			"()[Landroid/net/rtp/AudioCodec;"
		);
	}
} // namespace android::net::rtp

// Base class headers

