#pragma once

#ifndef ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER
#define ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER

#include "../../__JniBaseClass.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::content
{
	class AsyncQueryHandler;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::os
{
	class Message;
}

namespace __jni_impl::android::content
{
	class AsyncQueryHandler_WorkerHandler : public __jni_impl::android::os::Handler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::AsyncQueryHandler arg0, __jni_impl::android::os::Looper arg1);
		
		// Methods
		void handleMessage(__jni_impl::android::os::Message arg0);
	};
} // namespace __jni_impl::android::content

#include "AsyncQueryHandler.hpp"
#include "../os/Looper.hpp"
#include "../os/Message.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void AsyncQueryHandler_WorkerHandler::__constructor(__jni_impl::android::content::AsyncQueryHandler arg0, __jni_impl::android::os::Looper arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.AsyncQueryHandler$WorkerHandler",
			"(Landroid/content/AsyncQueryHandler;Landroid/os/Looper;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void AsyncQueryHandler_WorkerHandler::handleMessage(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"handleMessage",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class AsyncQueryHandler_WorkerHandler : public __jni_impl::android::content::AsyncQueryHandler_WorkerHandler
	{
	public:
		AsyncQueryHandler_WorkerHandler(QAndroidJniObject obj) { __thiz = obj; }
		AsyncQueryHandler_WorkerHandler(__jni_impl::android::content::AsyncQueryHandler arg0, __jni_impl::android::os::Looper arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_ASYNCQUERYHANDLER_WORKERHANDLER

