#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::webkit
{
	class TracingConfig;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::android::webkit
{
	class TracingController : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		jboolean isTracing();
		void start(__jni_impl::android::webkit::TracingConfig arg0);
		jboolean stop(__jni_impl::java::io::OutputStream arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::webkit

#include "./TracingConfig.hpp"
#include "../../java/io/OutputStream.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void TracingController::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.webkit.TracingController",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TracingController::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.webkit.TracingController",
			"getInstance",
			"()Landroid/webkit/TracingController;"
		);
	}
	jboolean TracingController::isTracing()
	{
		return __thiz.callMethod<jboolean>(
			"isTracing",
			"()Z"
		);
	}
	void TracingController::start(__jni_impl::android::webkit::TracingConfig arg0)
	{
		__thiz.callMethod<void>(
			"start",
			"(Landroid/webkit/TracingConfig;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TracingController::stop(__jni_impl::java::io::OutputStream arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"stop",
			"(Ljava/io/OutputStream;Ljava/util/concurrent/Executor;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class TracingController : public __jni_impl::android::webkit::TracingController
	{
	public:
		TracingController(QAndroidJniObject obj) { __thiz = obj; }
		TracingController()
		{
			__constructor();
		}
	};
} // namespace android::webkit

