#pragma once

#ifndef ANDROID_PRINTSERVICE_PRINTJOB
#define ANDROID_PRINTSERVICE_PRINTJOB

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintJobId;
}
namespace __jni_impl::android::printservice
{
	class PrintDocument;
}
namespace __jni_impl::android::print
{
	class PrintJobInfo;
}

namespace __jni_impl::android::printservice
{
	class PrintJob : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean start();
		QAndroidJniObject getId();
		jboolean fail(jstring arg0);
		jboolean block(jstring arg0);
		jboolean isQueued();
		jboolean cancel();
		jboolean isCancelled();
		QAndroidJniObject getTag();
		jboolean complete();
		jboolean isCompleted();
		jboolean isBlocked();
		jboolean setTag(jstring arg0);
		jboolean isStarted();
		QAndroidJniObject getDocument();
		QAndroidJniObject getInfo();
		jboolean isFailed();
		void setStatus(jint arg0);
		void setStatus(jstring arg0);
		QAndroidJniObject getAdvancedStringOption(jstring arg0);
		jboolean hasAdvancedOption(jstring arg0);
		jint getAdvancedIntOption(jstring arg0);
		void setProgress(jfloat arg0);
	};
} // namespace __jni_impl::android::printservice

#include "../print/PrintJobId.hpp"
#include "PrintDocument.hpp"
#include "../print/PrintJobInfo.hpp"

namespace __jni_impl::android::printservice
{
	// Fields
	
	// Constructors
	void PrintJob::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.printservice.PrintJob",
			"(V)V");
	}
	
	// Methods
	jboolean PrintJob::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint PrintJob::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean PrintJob::start()
	{
		return __thiz.callMethod<jboolean>(
			"start",
			"()Z");
	}
	QAndroidJniObject PrintJob::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;");
	}
	jboolean PrintJob::fail(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"fail",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean PrintJob::block(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"block",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean PrintJob::isQueued()
	{
		return __thiz.callMethod<jboolean>(
			"isQueued",
			"()Z");
	}
	jboolean PrintJob::cancel()
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"()Z");
	}
	jboolean PrintJob::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z");
	}
	QAndroidJniObject PrintJob::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;");
	}
	jboolean PrintJob::complete()
	{
		return __thiz.callMethod<jboolean>(
			"complete",
			"()Z");
	}
	jboolean PrintJob::isCompleted()
	{
		return __thiz.callMethod<jboolean>(
			"isCompleted",
			"()Z");
	}
	jboolean PrintJob::isBlocked()
	{
		return __thiz.callMethod<jboolean>(
			"isBlocked",
			"()Z");
	}
	jboolean PrintJob::setTag(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTag",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean PrintJob::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z");
	}
	QAndroidJniObject PrintJob::getDocument()
	{
		return __thiz.callObjectMethod(
			"getDocument",
			"()Landroid/printservice/PrintDocument;");
	}
	QAndroidJniObject PrintJob::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintJobInfo;");
	}
	jboolean PrintJob::isFailed()
	{
		return __thiz.callMethod<jboolean>(
			"isFailed",
			"()Z");
	}
	void PrintJob::setStatus(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStatus",
			"(I)V",
			arg0);
	}
	void PrintJob::setStatus(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	QAndroidJniObject PrintJob::getAdvancedStringOption(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	jboolean PrintJob::hasAdvancedOption(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jint PrintJob::getAdvancedIntOption(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0);
	}
	void PrintJob::setProgress(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setProgress",
			"(F)V",
			arg0);
	}
} // namespace __jni_impl::android::printservice

namespace android::printservice
{
	class PrintJob : public __jni_impl::android::printservice::PrintJob
	{
	public:
		PrintJob(QAndroidJniObject obj) { __thiz = obj; }
		PrintJob()
		{
			__constructor();
		}
	};
} // namespace android::printservice

#endif // ANDROID_PRINTSERVICE_PRINTJOB

