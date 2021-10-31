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
	
	RemoteController::RemoteController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteController::RemoteController(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	RemoteController::RemoteController(android::content::Context arg0, __JniBaseClass arg1, android::os::Looper arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.RemoteController",
			"(Landroid/content/Context;Landroid/media/RemoteController$OnClientUpdateListener;Landroid/os/Looper;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jboolean RemoteController::clearArtworkConfiguration()
	{
		return __thiz.callMethod<jboolean>(
			"clearArtworkConfiguration",
			"()Z"
		);
	}
	QAndroidJniObject RemoteController::editMetadata()
	{
		return __thiz.callObjectMethod(
			"editMetadata",
			"()Landroid/media/RemoteController$MetadataEditor;"
		);
	}
	jlong RemoteController::getEstimatedMediaPosition()
	{
		return __thiz.callMethod<jlong>(
			"getEstimatedMediaPosition",
			"()J"
		);
	}
	jboolean RemoteController::seekTo(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"seekTo",
			"(J)Z",
			arg0
		);
	}
	jboolean RemoteController::sendMediaKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sendMediaKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RemoteController::setArtworkConfiguration(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"setArtworkConfiguration",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean RemoteController::setSynchronizationMode(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setSynchronizationMode",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

