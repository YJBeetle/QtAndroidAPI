#include "../../JArray.hpp"
#include "./Context.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Loader.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	Loader::Loader(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Loader::Loader(android::content::Context arg0)
		: JObject(
			"android.content.Loader",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	void Loader::abandon() const
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	jboolean Loader::cancelLoad() const
	{
		return callMethod<jboolean>(
			"cancelLoad",
			"()Z"
		);
	}
	void Loader::commitContentChanged() const
	{
		callMethod<void>(
			"commitContentChanged",
			"()V"
		);
	}
	JString Loader::dataToString(JObject arg0) const
	{
		return callObjectMethod(
			"dataToString",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobject>()
		);
	}
	void Loader::deliverCancellation() const
	{
		callMethod<void>(
			"deliverCancellation",
			"()V"
		);
	}
	void Loader::deliverResult(JObject arg0) const
	{
		callMethod<void>(
			"deliverResult",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void Loader::dump(JString arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, JArray arg3) const
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
	void Loader::forceLoad() const
	{
		callMethod<void>(
			"forceLoad",
			"()V"
		);
	}
	android::content::Context Loader::getContext() const
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint Loader::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jboolean Loader::isAbandoned() const
	{
		return callMethod<jboolean>(
			"isAbandoned",
			"()Z"
		);
	}
	jboolean Loader::isReset() const
	{
		return callMethod<jboolean>(
			"isReset",
			"()Z"
		);
	}
	jboolean Loader::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void Loader::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void Loader::registerListener(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerListener",
			"(ILandroid/content/Loader$OnLoadCompleteListener;)V",
			arg0,
			arg1.object()
		);
	}
	void Loader::registerOnLoadCanceledListener(JObject arg0) const
	{
		callMethod<void>(
			"registerOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.object()
		);
	}
	void Loader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Loader::rollbackContentChanged() const
	{
		callMethod<void>(
			"rollbackContentChanged",
			"()V"
		);
	}
	void Loader::startLoading() const
	{
		callMethod<void>(
			"startLoading",
			"()V"
		);
	}
	void Loader::stopLoading() const
	{
		callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	jboolean Loader::takeContentChanged() const
	{
		return callMethod<jboolean>(
			"takeContentChanged",
			"()Z"
		);
	}
	JString Loader::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Loader::unregisterListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterListener",
			"(Landroid/content/Loader$OnLoadCompleteListener;)V",
			arg0.object()
		);
	}
	void Loader::unregisterOnLoadCanceledListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.object()
		);
	}
} // namespace android::content

