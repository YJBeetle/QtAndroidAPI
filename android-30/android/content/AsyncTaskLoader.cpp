#include "./Context.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./AsyncTaskLoader.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	AsyncTaskLoader::AsyncTaskLoader(QJniObject obj) : android::content::Loader(obj) {}
	
	// Constructors
	AsyncTaskLoader::AsyncTaskLoader(android::content::Context arg0)
		: android::content::Loader(
			"android.content.AsyncTaskLoader",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void AsyncTaskLoader::cancelLoadInBackground()
	{
		callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	void AsyncTaskLoader::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	jboolean AsyncTaskLoader::isLoadInBackgroundCanceled()
	{
		return callMethod<jboolean>(
			"isLoadInBackgroundCanceled",
			"()Z"
		);
	}
	jobject AsyncTaskLoader::loadInBackground()
	{
		return callObjectMethod(
			"loadInBackground",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void AsyncTaskLoader::onCanceled(jobject arg0)
	{
		callMethod<void>(
			"onCanceled",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void AsyncTaskLoader::setUpdateThrottle(jlong arg0)
	{
		callMethod<void>(
			"setUpdateThrottle",
			"(J)V",
			arg0
		);
	}
} // namespace android::content

