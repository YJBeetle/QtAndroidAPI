#pragma once

#ifndef ANDROID_CONTENT_ASYNCTASKLOADER
#define ANDROID_CONTENT_ASYNCTASKLOADER

#include "../../__JniBaseClass.hpp"
#include "Loader.hpp"

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
	class AsyncTaskLoader : public __jni_impl::android::content::Loader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void setUpdateThrottle(jlong arg0);
		void cancelLoadInBackground();
		void onCanceled(jobject arg0);
		jobject loadInBackground();
		jboolean isLoadInBackgroundCanceled();
		void dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
		void dump(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3);
	};
} // namespace __jni_impl::android::content

#include "Context.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void AsyncTaskLoader::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.AsyncTaskLoader",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AsyncTaskLoader::setUpdateThrottle(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setUpdateThrottle",
			"(J)V",
			arg0
		);
	}
	void AsyncTaskLoader::cancelLoadInBackground()
	{
		__thiz.callMethod<void>(
			"cancelLoadInBackground",
			"()V"
		);
	}
	void AsyncTaskLoader::onCanceled(jobject arg0)
	{
		__thiz.callMethod<void>(
			"onCanceled",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	jobject AsyncTaskLoader::loadInBackground()
	{
		return __thiz.callObjectMethod(
			"loadInBackground",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean AsyncTaskLoader::isLoadInBackgroundCanceled()
	{
		return __thiz.callMethod<jboolean>(
			"isLoadInBackgroundCanceled",
			"()Z"
		);
	}
	void AsyncTaskLoader::dump(jstring arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
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
	void AsyncTaskLoader::dump(const QString &arg0, __jni_impl::java::io::FileDescriptor arg1, __jni_impl::java::io::PrintWriter arg2, jarray arg3)
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
} // namespace __jni_impl::android::content

namespace android::content
{
	class AsyncTaskLoader : public __jni_impl::android::content::AsyncTaskLoader
	{
	public:
		AsyncTaskLoader(QAndroidJniObject obj) { __thiz = obj; }
		AsyncTaskLoader(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_ASYNCTASKLOADER

