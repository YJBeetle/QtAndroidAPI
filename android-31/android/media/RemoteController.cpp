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
		return getStaticField<jint>(
			"android.media.RemoteController",
			"POSITION_SYNCHRONIZATION_CHECK"
		);
	}
	jint RemoteController::POSITION_SYNCHRONIZATION_NONE()
	{
		return getStaticField<jint>(
			"android.media.RemoteController",
			"POSITION_SYNCHRONIZATION_NONE"
		);
	}
	
	// QAndroidJniObject forward
	RemoteController::RemoteController(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RemoteController::RemoteController(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	RemoteController::RemoteController(android::content::Context arg0, JObject arg1, android::os::Looper arg2)
		: JObject(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;Landroid/os/Looper;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jboolean RemoteController::clearArtworkConfiguration() const
	{
		return callMethod<jboolean>(
			"clearArtworkConfiguration",
			"()Z"
		);
	}
	android::media::RemoteController_MetadataEditor RemoteController::editMetadata() const
	{
		return callObjectMethod(
			"editMetadata",
			"()Landroid/media/RemoteController$MetadataEditor;"
		);
	}
	jlong RemoteController::getEstimatedMediaPosition() const
	{
		return callMethod<jlong>(
			"getEstimatedMediaPosition",
			"()J"
		);
	}
	jboolean RemoteController::seekTo(jlong arg0) const
	{
		return callMethod<jboolean>(
			"seekTo",
			"(J)Z",
			arg0
		);
	}
	jboolean RemoteController::sendMediaKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"sendMediaKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	jboolean RemoteController::setArtworkConfiguration(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"setArtworkConfiguration",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean RemoteController::setSynchronizationMode(jint arg0) const
	{
		return callMethod<jboolean>(
			"setSynchronizationMode",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

