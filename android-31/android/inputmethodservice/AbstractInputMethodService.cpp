#include "../content/Intent.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"
#include "../view/KeyEvent_DispatcherState.hpp"
#include "../view/MotionEvent.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./AbstractInputMethodService.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractInputMethodService::AbstractInputMethodService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	AbstractInputMethodService::AbstractInputMethodService()
		: android::app::Service(
			"android.inputmethodservice.AbstractInputMethodService",
			"()V"
		) {}
	
	// Methods
	android::view::KeyEvent_DispatcherState AbstractInputMethodService::getKeyDispatcherState()
	{
		return callObjectMethod(
			"getKeyDispatcherState",
			"()Landroid/view/KeyEvent$DispatcherState;"
		);
	}
	jboolean AbstractInputMethodService::isUiContext()
	{
		return callMethod<jboolean>(
			"isUiContext",
			"()Z"
		);
	}
	__JniBaseClass AbstractInputMethodService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodImpl AbstractInputMethodService::onCreateInputMethodInterface()
	{
		return callObjectMethod(
			"onCreateInputMethodInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;"
		);
	}
	android::inputmethodservice::AbstractInputMethodService_AbstractInputMethodSessionImpl AbstractInputMethodService::onCreateInputMethodSessionInterface()
	{
		return callObjectMethod(
			"onCreateInputMethodSessionInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;"
		);
	}
	jboolean AbstractInputMethodService::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean AbstractInputMethodService::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
} // namespace android::inputmethodservice

