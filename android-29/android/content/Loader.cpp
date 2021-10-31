#include "./Context.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./Loader.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	Loader::Loader(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Loader::Loader(android::content::Context arg0)
		: __JniBaseClass(
			"android.content.Loader",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void Loader::abandon()
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	jboolean Loader::cancelLoad()
	{
		return callMethod<jboolean>(
			"cancelLoad",
			"()Z"
		);
	}
	void Loader::commitContentChanged()
	{
		callMethod<void>(
			"commitContentChanged",
			"()V"
		);
	}
	jstring Loader::dataToString(jobject arg0)
	{
		return callObjectMethod(
			"dataToString",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Loader::deliverCancellation()
	{
		callMethod<void>(
			"deliverCancellation",
			"()V"
		);
	}
	void Loader::deliverResult(jobject arg0)
	{
		callMethod<void>(
			"deliverResult",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Loader::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
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
	void Loader::forceLoad()
	{
		callMethod<void>(
			"forceLoad",
			"()V"
		);
	}
	QAndroidJniObject Loader::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint Loader::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jboolean Loader::isAbandoned()
	{
		return callMethod<jboolean>(
			"isAbandoned",
			"()Z"
		);
	}
	jboolean Loader::isReset()
	{
		return callMethod<jboolean>(
			"isReset",
			"()Z"
		);
	}
	jboolean Loader::isStarted()
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void Loader::onContentChanged()
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void Loader::registerListener(jint arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"registerListener",
			"(ILandroid/content/Loader$OnLoadCompleteListener;)V",
			arg0,
			arg1.object()
		);
	}
	void Loader::registerOnLoadCanceledListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"registerOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.object()
		);
	}
	void Loader::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Loader::rollbackContentChanged()
	{
		callMethod<void>(
			"rollbackContentChanged",
			"()V"
		);
	}
	void Loader::startLoading()
	{
		callMethod<void>(
			"startLoading",
			"()V"
		);
	}
	void Loader::stopLoading()
	{
		callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	jboolean Loader::takeContentChanged()
	{
		return callMethod<jboolean>(
			"takeContentChanged",
			"()Z"
		);
	}
	jstring Loader::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Loader::unregisterListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/content/Loader$OnLoadCompleteListener;)V",
			arg0.object()
		);
	}
	void Loader::unregisterOnLoadCanceledListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.object()
		);
	}
} // namespace android::content

