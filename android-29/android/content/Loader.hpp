#pragma once

#ifndef ANDROID_CONTENT_LOADER
#define ANDROID_CONTENT_LOADER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::content
{
	class Loader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		jstring toString();
		QAndroidJniObject getContext();
		jint getId();
		void reset();
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void onContentChanged();
		jboolean isStarted();
		void registerListener(jint arg0, __jni_impl::__JniBaseClass arg1);
		void unregisterListener(__jni_impl::__JniBaseClass arg0);
		void stopLoading();
		void deliverResult(jobject arg0);
		void deliverCancellation();
		void registerOnLoadCanceledListener(__jni_impl::__JniBaseClass arg0);
		void unregisterOnLoadCanceledListener(__jni_impl::__JniBaseClass arg0);
		jboolean isAbandoned();
		jboolean isReset();
		void startLoading();
		jboolean cancelLoad();
		void forceLoad();
		void abandon();
		jboolean takeContentChanged();
		void commitContentChanged();
		void rollbackContentChanged();
		jstring dataToString(jobject arg0);
	};
} // namespace __jni_impl::android::content

#include "Context.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void Loader::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.Loader",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring Loader::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	void Loader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Loader::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
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
	void Loader::onContentChanged()
	{
		__thiz.callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	jboolean Loader::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void Loader::registerListener(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"registerListener",
			"(ILandroid/content/Loader$OnLoadCompleteListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Loader::unregisterListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterListener",
			"(Landroid/content/Loader$OnLoadCompleteListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Loader::stopLoading()
	{
		__thiz.callMethod<void>(
			"stopLoading",
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
	void Loader::deliverCancellation()
	{
		__thiz.callMethod<void>(
			"deliverCancellation",
			"()V"
		);
	}
	void Loader::registerOnLoadCanceledListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"registerOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Loader::unregisterOnLoadCanceledListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"unregisterOnLoadCanceledListener",
			"(Landroid/content/Loader$OnLoadCanceledListener;)V",
			arg0.__jniObject().object()
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
	void Loader::startLoading()
	{
		__thiz.callMethod<void>(
			"startLoading",
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
	void Loader::forceLoad()
	{
		__thiz.callMethod<void>(
			"forceLoad",
			"()V"
		);
	}
	void Loader::abandon()
	{
		__thiz.callMethod<void>(
			"abandon",
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
	void Loader::commitContentChanged()
	{
		__thiz.callMethod<void>(
			"commitContentChanged",
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
	jstring Loader::dataToString(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"dataToString",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class Loader : public __jni_impl::android::content::Loader
	{
	public:
		Loader(QAndroidJniObject obj) { __thiz = obj; }
		Loader(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_LOADER

