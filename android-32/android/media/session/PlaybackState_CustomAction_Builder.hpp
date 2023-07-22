#pragma once

#include "./PlaybackState_CustomAction.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PlaybackState_CustomAction_Builder.def.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	inline PlaybackState_CustomAction_Builder::PlaybackState_CustomAction_Builder(JString arg0, JString arg1, jint arg2)
		: JObject(
			"android.media.session.PlaybackState$CustomAction$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline android::media::session::PlaybackState_CustomAction PlaybackState_CustomAction_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/session/PlaybackState$CustomAction;"
		);
	}
	inline android::media::session::PlaybackState_CustomAction_Builder PlaybackState_CustomAction_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/session/PlaybackState$CustomAction$Builder;",
			arg0.object()
		);
	}
} // namespace android::media::session

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::session;
#endif
