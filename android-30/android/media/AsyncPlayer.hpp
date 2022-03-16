#pragma once

#include "../content/Context.def.hpp"
#include "./AudioAttributes.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./AsyncPlayer.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AsyncPlayer::AsyncPlayer(JString arg0)
		: JObject(
			"android.media.AsyncPlayer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void AsyncPlayer::play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, android::media::AudioAttributes arg3) const
	{
		callMethod<void>(
			"play",
			"(Landroid/content/Context;Landroid/net/Uri;ZLandroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline void AsyncPlayer::play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, jint arg3) const
	{
		callMethod<void>(
			"play",
			"(Landroid/content/Context;Landroid/net/Uri;ZI)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void AsyncPlayer::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

// Base class headers

