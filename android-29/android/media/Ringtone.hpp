#pragma once

#include "../content/Context.def.hpp"
#include "./AudioAttributes.def.hpp"
#include "../../JString.hpp"
#include "./Ringtone.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::AudioAttributes Ringtone::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	inline jint Ringtone::getStreamType() const
	{
		return callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	inline JString Ringtone::getTitle(android::content::Context arg0) const
	{
		return callObjectMethod(
			"getTitle",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jfloat Ringtone::getVolume() const
	{
		return callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	inline jboolean Ringtone::isLooping() const
	{
		return callMethod<jboolean>(
			"isLooping",
			"()Z"
		);
	}
	inline jboolean Ringtone::isPlaying() const
	{
		return callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	inline void Ringtone::play() const
	{
		callMethod<void>(
			"play",
			"()V"
		);
	}
	inline void Ringtone::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	inline void Ringtone::setLooping(jboolean arg0) const
	{
		callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0
		);
	}
	inline void Ringtone::setStreamType(jint arg0) const
	{
		callMethod<void>(
			"setStreamType",
			"(I)V",
			arg0
		);
	}
	inline void Ringtone::setVolume(jfloat arg0) const
	{
		callMethod<void>(
			"setVolume",
			"(F)V",
			arg0
		);
	}
	inline void Ringtone::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

// Base class headers

