#include "./PlaybackState_CustomAction.hpp"
#include "../../os/Bundle.hpp"
#include "./PlaybackState_CustomAction_Builder.hpp"

namespace android::media::session
{
	// Fields
	
	// QJniObject forward
	PlaybackState_CustomAction_Builder::PlaybackState_CustomAction_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PlaybackState_CustomAction_Builder::PlaybackState_CustomAction_Builder(jstring arg0, jstring arg1, jint arg2)
		: JObject(
			"android.media.session.PlaybackState$CustomAction$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::media::session::PlaybackState_CustomAction PlaybackState_CustomAction_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/session/PlaybackState$CustomAction;"
		);
	}
	android::media::session::PlaybackState_CustomAction_Builder PlaybackState_CustomAction_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/session/PlaybackState$CustomAction$Builder;",
			arg0.object()
		);
	}
} // namespace android::media::session

