#include "./TracingConfig.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./TracingController.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	TracingController::TracingController(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TracingController::TracingController()
		: __JniBaseClass(
			"android.webkit.TracingController",
			"()V"
		) {}
	
	// Methods
	android::webkit::TracingController TracingController::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.TracingController",
			"getInstance",
			"()Landroid/webkit/TracingController;"
		);
	}
	jboolean TracingController::isTracing()
	{
		return callMethod<jboolean>(
			"isTracing",
			"()Z"
		);
	}
	void TracingController::start(android::webkit::TracingConfig arg0)
	{
		callMethod<void>(
			"start",
			"(Landroid/webkit/TracingConfig;)V",
			arg0.object()
		);
	}
	jboolean TracingController::stop(java::io::OutputStream arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"stop",
			"(Ljava/io/OutputStream;Ljava/util/concurrent/Executor;)Z",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::webkit

