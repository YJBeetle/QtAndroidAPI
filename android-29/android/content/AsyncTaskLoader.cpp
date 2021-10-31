#include "./Context.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./AsyncTaskLoader.hpp"

namespace android::content
{
	// Fields
	
	AsyncTaskLoader::AsyncTaskLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AsyncTaskLoader::AsyncTaskLoader(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.AsyncTaskLoader",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AsyncTaskLoader::cancelLoadInBackground()
	{
		__thiz.callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	void AsyncTaskLoader::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	jboolean AsyncTaskLoader::isLoadInBackgroundCanceled()
	{
		return __thiz.callMethod<jboolean>(
			"isLoadInBackgroundCanceled",
			"()Z"
		);
	}
	jobject AsyncTaskLoader::loadInBackground()
	{
		return __thiz.callObjectMethod(
			"loadInBackground",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void AsyncTaskLoader::onCanceled(jobject arg0)
	{
		__thiz.callMethod<void>(
			"onCanceled",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AsyncTaskLoader::setUpdateThrottle(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setUpdateThrottle",
			"(J)V",
			arg0
		);
	}
} // namespace android::content

