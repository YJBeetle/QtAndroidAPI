#include "../content/Context.hpp"
#include "./RemoteController_MetadataEditor.hpp"
#include "../os/Looper.hpp"
#include "../view/KeyEvent.hpp"
#include "./RemoteController.hpp"

namespace android::media
{
	// Fields
	jint RemoteController::POSITION_SYNCHRONIZATION_CHECK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteController",
			"POSITION_SYNCHRONIZATION_CHECK"
		);
	}
	jint RemoteController::POSITION_SYNCHRONIZATION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RemoteController",
			"POSITION_SYNCHRONIZATION_NONE"
		);
	}
	
	// QAndroidJniObject forward
	RemoteController::RemoteController(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RemoteController::RemoteController(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	RemoteController::RemoteController(android::content::Context arg0, __JniBaseClass arg1, android::os::Looper arg2)
		: __JniBaseClass(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;Landroid/os/Looper;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jboolean RemoteController::clearArtworkConfiguration()
	{
		return callMethod<jboolean>(
			"clearArtworkConfiguration",
			"()Z"
		);
	}
	android::media::RemoteController_MetadataEditor RemoteController::editMetadata()
	{
		return callObjectMethod(
			"editMetadata",
			"()Landroid/media/RemoteController$MetadataEditor;"
		);
	}
	jlong RemoteController::getEstimatedMediaPosition()
	{
		return callMethod<jlong>(
			"getEstimatedMediaPosition",
			"()J"
		);
	}
	jboolean RemoteController::seekTo(jlong arg0)
	{
		return callMethod<jboolean>(
			"seekTo",
			"(J)Z",
			arg0
		);
	}
	jboolean RemoteController::sendMediaKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"sendMediaKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean RemoteController::setArtworkConfiguration(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"setArtworkConfiguration",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean RemoteController::setSynchronizationMode(jint arg0)
	{
		return callMethod<jboolean>(
			"setSynchronizationMode",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

