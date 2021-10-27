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
	
	AbstractInputMethodService::AbstractInputMethodService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractInputMethodService::AbstractInputMethodService()
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.AbstractInputMethodService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject AbstractInputMethodService::getKeyDispatcherState()
	{
		return __thiz.callObjectMethod(
			"getKeyDispatcherState",
			"()Landroid/view/KeyEvent$DispatcherState;"
		);
	}
	QAndroidJniObject AbstractInputMethodService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractInputMethodService::onCreateInputMethodInterface()
	{
		return __thiz.callObjectMethod(
			"onCreateInputMethodInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodImpl;"
		);
	}
	QAndroidJniObject AbstractInputMethodService::onCreateInputMethodSessionInterface()
	{
		return __thiz.callObjectMethod(
			"onCreateInputMethodSessionInterface",
			"()Landroid/inputmethodservice/AbstractInputMethodService$AbstractInputMethodSessionImpl;"
		);
	}
	jboolean AbstractInputMethodService::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractInputMethodService::onTrackballEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::inputmethodservice

