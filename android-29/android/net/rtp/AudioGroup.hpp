#pragma once

#include "../../../JArray.hpp"
#include "./AudioGroup.def.hpp"

namespace android::net::rtp
{
	// Fields
	inline jint AudioGroup::MODE_ECHO_SUPPRESSION()
	{
		return getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_ECHO_SUPPRESSION"
		);
	}
	inline jint AudioGroup::MODE_MUTED()
	{
		return getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_MUTED"
		);
	}
	inline jint AudioGroup::MODE_NORMAL()
	{
		return getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_NORMAL"
		);
	}
	inline jint AudioGroup::MODE_ON_HOLD()
	{
		return getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_ON_HOLD"
		);
	}
	
	// Constructors
	inline AudioGroup::AudioGroup()
		: JObject(
			"android.net.rtp.AudioGroup",
			"()V"
		) {}
	
	// Methods
	inline void AudioGroup::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jint AudioGroup::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline JArray AudioGroup::getStreams() const
	{
		return callObjectMethod(
			"getStreams",
			"()[Landroid/net/rtp/AudioStream;"
		);
	}
	inline void AudioGroup::sendDtmf(jint arg0) const
	{
		callMethod<void>(
			"sendDtmf",
			"(I)V",
			arg0
		);
	}
	inline void AudioGroup::setMode(jint arg0) const
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::rtp

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::rtp;
#endif
