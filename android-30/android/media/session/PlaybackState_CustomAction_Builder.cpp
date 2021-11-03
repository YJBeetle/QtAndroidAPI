#include "./PlaybackState_CustomAction.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PlaybackState_CustomAction_Builder.hpp"

namespace android::media::session
{
	// Fields
	
	// QAndroidJniObject forward
	PlaybackState_CustomAction_Builder::PlaybackState_CustomAction_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PlaybackState_CustomAction_Builder::PlaybackState_CustomAction_Builder(JString arg0, JString arg1, jint arg2)
		: JObject(
			"android.media.session.PlaybackState$CustomAction$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
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

