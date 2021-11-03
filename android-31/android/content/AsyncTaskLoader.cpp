#include "../../JArray.hpp"
#include "./Context.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AsyncTaskLoader.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	AsyncTaskLoader::AsyncTaskLoader(QAndroidJniObject obj) : android::content::Loader(obj) {}
	
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
	void AsyncTaskLoader::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	jboolean AsyncTaskLoader::isLoadInBackgroundCanceled()
	{
		return callMethod<jboolean>(
			"isLoadInBackgroundCanceled",
			"()Z"
		);
	}
	JObject AsyncTaskLoader::loadInBackground()
	{
		return callObjectMethod(
			"loadInBackground",
			"()Ljava/lang/Object;"
		);
	}
	void AsyncTaskLoader::onCanceled(JObject arg0)
	{
		callMethod<void>(
			"onCanceled",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
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

