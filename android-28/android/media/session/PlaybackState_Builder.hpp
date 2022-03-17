#pragma once

#include "./PlaybackState.def.hpp"
#include "./PlaybackState_CustomAction.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PlaybackState_Builder.def.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	inline PlaybackState_Builder::PlaybackState_Builder()
		: JObject(
			"android.media.session.PlaybackState$Builder",
			"()V"
		) {}
	inline PlaybackState_Builder::PlaybackState_Builder(android::media::session::PlaybackState arg0)
		: JObject(
			"android.media.session.PlaybackState$Builder",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::addCustomAction(android::media::session::PlaybackState_CustomAction arg0) const
	{
		return callObjectMethod(
			"addCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;)Landroid/media/session/PlaybackState$Builder;",
			arg0.object()
		);
	}
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::addCustomAction(JString arg0, JString arg1, jint arg2) const
	{
		return callObjectMethod(
			"addCustomAction",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/media/session/PlaybackState$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline android::media::session::PlaybackState PlaybackState_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/session/PlaybackState;"
		);
	}
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::setActions(jlong arg0) const
	{
		return callObjectMethod(
			"setActions",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::setActiveQueueItemId(jlong arg0) const
	{
		return callObjectMethod(
			"setActiveQueueItemId",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::setBufferedPosition(jlong arg0) const
	{
		return callObjectMethod(
			"setBufferedPosition",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::setErrorMessage(JString arg0) const
	{
		return callObjectMethod(
			"setErrorMessage",
			"(Ljava/lang/CharSequence;)Landroid/media/session/PlaybackState$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/session/PlaybackState$Builder;",
			arg0.object()
		);
	}
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::setState(jint arg0, jlong arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"setState",
			"(IJF)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::media::session::PlaybackState_Builder PlaybackState_Builder::setState(jint arg0, jlong arg1, jfloat arg2, jlong arg3) const
	{
		return callObjectMethod(
			"setState",
			"(IJFJ)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::media::session

// Base class headers

