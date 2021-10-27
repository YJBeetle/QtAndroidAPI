#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodImpl;
}
namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService_AbstractInputMethodSessionImpl;
}
namespace __jni_impl::android::view
{
	class KeyEvent_DispatcherState;
}
namespace __jni_impl::android::view
{
	class MotionEvent;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::inputmethodservice
{
	class AbstractInputMethodService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getKeyDispatcherState();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject onCreateInputMethodInterface();
		QAndroidJniObject onCreateInputMethodSessionInterface();
		jboolean onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0);
		jboolean onTrackballEvent(__jni_impl::android::view::MotionEvent arg0);
	};
} // namespace __jni_impl::android::inputmethodservice

#include "../content/Intent.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodImpl.hpp"
#include "./AbstractInputMethodService_AbstractInputMethodSessionImpl.hpp"
#include "../view/KeyEvent_DispatcherState.hpp"
#include "../view/MotionEvent.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	
	// Constructors
	void AbstractInputMethodService::__constructor()
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
	QAndroidJniObject AbstractInputMethodService::onBind(__jni_impl::android::content::Intent arg0)
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
	jboolean AbstractInputMethodService::onGenericMotionEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean AbstractInputMethodService::onTrackballEvent(__jni_impl::android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class AbstractInputMethodService : public __jni_impl::android::inputmethodservice::AbstractInputMethodService
	{
	public:
		AbstractInputMethodService(QAndroidJniObject obj) { __thiz = obj; }
		AbstractInputMethodService()
		{
			__constructor();
		}
	};
} // namespace android::inputmethodservice

