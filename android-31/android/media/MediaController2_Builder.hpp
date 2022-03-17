#pragma once

#include "../content/Context.def.hpp"
#include "./MediaController2.def.hpp"
#include "./MediaController2_ControllerCallback.def.hpp"
#include "./Session2Token.def.hpp"
#include "../os/Bundle.def.hpp"
#include "./MediaController2_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaController2_Builder::MediaController2_Builder(android::content::Context arg0, android::media::Session2Token arg1)
		: JObject(
			"android.media.MediaController2$Builder",
			"(Landroid/content/Context;Landroid/media/Session2Token;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::media::MediaController2 MediaController2_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaController2;"
		);
	}
	inline android::media::MediaController2_Builder MediaController2_Builder::setConnectionHints(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setConnectionHints",
			"(Landroid/os/Bundle;)Landroid/media/MediaController2$Builder;",
			arg0.object()
		);
	}
	inline android::media::MediaController2_Builder MediaController2_Builder::setControllerCallback(JObject arg0, android::media::MediaController2_ControllerCallback arg1) const
	{
		return callObjectMethod(
			"setControllerCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/MediaController2$ControllerCallback;)Landroid/media/MediaController2$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
