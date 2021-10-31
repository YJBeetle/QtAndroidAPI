#include "./PlaybackState.hpp"
#include "./PlaybackState_CustomAction.hpp"
#include "../../os/Bundle.hpp"
#include "./PlaybackState_Builder.hpp"

namespace android::media::session
{
	// Fields
	
	// QAndroidJniObject forward
	PlaybackState_Builder::PlaybackState_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PlaybackState_Builder::PlaybackState_Builder()
		: __JniBaseClass(
			"android.media.session.PlaybackState$Builder",
			"()V"
		) {}
	PlaybackState_Builder::PlaybackState_Builder(android::media::session::PlaybackState arg0)
		: __JniBaseClass(
			"android.media.session.PlaybackState$Builder",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject PlaybackState_Builder::addCustomAction(android::media::session::PlaybackState_CustomAction arg0)
	{
		return callObjectMethod(
			"addCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;)Landroid/media/session/PlaybackState$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject PlaybackState_Builder::addCustomAction(jstring arg0, jstring arg1, jint arg2)
	{
		return callObjectMethod(
			"addCustomAction",
			"(Ljava/lang/String;Ljava/lang/String;I)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject PlaybackState_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/session/PlaybackState;"
		);
	}
	QAndroidJniObject PlaybackState_Builder::setActions(jlong arg0)
	{
		return callObjectMethod(
			"setActions",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	QAndroidJniObject PlaybackState_Builder::setActiveQueueItemId(jlong arg0)
	{
		return callObjectMethod(
			"setActiveQueueItemId",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	QAndroidJniObject PlaybackState_Builder::setBufferedPosition(jlong arg0)
	{
		return callObjectMethod(
			"setBufferedPosition",
			"(J)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	QAndroidJniObject PlaybackState_Builder::setErrorMessage(jstring arg0)
	{
		return callObjectMethod(
			"setErrorMessage",
			"(Ljava/lang/CharSequence;)Landroid/media/session/PlaybackState$Builder;",
			arg0
		);
	}
	QAndroidJniObject PlaybackState_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/session/PlaybackState$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject PlaybackState_Builder::setState(jint arg0, jlong arg1, jfloat arg2)
	{
		return callObjectMethod(
			"setState",
			"(IJF)Landroid/media/session/PlaybackState$Builder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject PlaybackState_Builder::setState(jint arg0, jlong arg1, jfloat arg2, jlong arg3)
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
