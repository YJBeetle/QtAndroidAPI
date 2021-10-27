#include "./TracingConfig.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./TracingController.hpp"

namespace android::webkit
{
	// Fields
	
	TracingController::TracingController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TracingController::TracingController()
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
	void TracingController::start(android::webkit::TracingConfig arg0)
	{
		__thiz.callMethod<void>(
			"start",
			"(Landroid/webkit/TracingConfig;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TracingController::stop(java::io::OutputStream arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"stop",
			"(Ljava/io/OutputStream;Ljava/util/concurrent/Executor;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::webkit

