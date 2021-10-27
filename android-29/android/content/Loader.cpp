#include "./Context.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./Loader.hpp"

namespace android::content
{
	// Fields
	
	Loader::Loader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Loader::Loader(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Loader",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Loader::abandon()
	{
		__thiz.callMethod<void>(
			"abandon",
			"()V"
		);
	}
	jboolean Loader::cancelLoad()
	{
		return __thiz.callMethod<jboolean>(
			"cancelLoad",
			"()Z"
		);
	}
	void Loader::commitContentChanged()
	{
		__thiz.callMethod<void>(
			"commitContentChanged",
			"()V"
		);
	}
	jstring Loader::dataToString(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"dataToString",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void Loader::deliverCancellation()
	{
		__thiz.callMethod<void>(
			"deliverCancellation",
			"()V"
		);
	}
	void Loader::deliverResult(jobject arg0)
	{
		__thiz.callMethod<void>(
			"deliverResult",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Loader::dump(jstring arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
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
	void Loader::dump(const QString &arg0, java::io::FileDescriptor arg1, java::io::PrintWriter arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/lang/String;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Loader::forceLoad()
	{
		__thiz.callMethod<void>(
			"forceLoad",
			"()V"
		);
	}
	QAndroidJniObject Loader::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint Loader::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jboolean Loader::isAbandoned()
	{
		return __thiz.callMethod<jboolean>(
			"isAbandoned",
			"()Z"
		);
	}
	jboolean Loader::isReset()
	{
		return __thiz.callMethod<jboolean>(
			"isReset",
			"()Z"
		);
	}
	jboolean Loader::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void Loader::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	void Loader::registerListener(jint arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"registerListener",
			"(ILandroid/content/Loader$OnLoadCompleteListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Loader::registerOnLoadCanceledListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Loader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Loader::rollbackContentChanged()
	{
		__thiz.callMethod<void>(
			"rollbackContentChanged",
			"()V"
		);
	}
	void Loader::startLoading()
	{
		__thiz.callMethod<void>(
			"startLoading",
			"()V"
		);
	}
	void Loader::stopLoading()
	{
		__thiz.callMethod<void>(
			"stopLoading",
			"()V"
		);
	}
	jboolean Loader::takeContentChanged()
	{
		return __thiz.callMethod<jboolean>(
			"takeContentChanged",
			"()Z"
		);
	}
	jstring Loader::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Loader::unregisterListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterListener",
			"(Landroid/content/Loader$OnLoadCompleteListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Loader::unregisterOnLoadCanceledListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::content

