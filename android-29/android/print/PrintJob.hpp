#pragma once

#ifndef ANDROID_PRINT_PRINTJOB
#define ANDROID_PRINT_PRINTJOB

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintJobInfo;
}
namespace __jni_impl::android::print
{
	class PrintManager;
}
namespace __jni_impl::android::print
{
	class PrintJobId;
}

namespace __jni_impl::android::print
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
		QAndroidJniObject getId();
		jboolean isQueued();
		void cancel();
		jboolean isCancelled();
		jboolean isCompleted();
		void restart();
		jboolean isBlocked();
		jboolean isStarted();
		QAndroidJniObject getInfo();
		jboolean isFailed();
	};
} // namespace __jni_impl::android::print

#include "PrintJobInfo.hpp"
#include "PrintManager.hpp"
#include "PrintJobId.hpp"

namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrintJob::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintJob",
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
	QAndroidJniObject PrintJob::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;");
	}
	jboolean PrintJob::isQueued()
	{
		return __thiz.callMethod<jboolean>(
			"isQueued",
			"()Z");
	}
	void PrintJob::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	jboolean PrintJob::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z");
	}
	jboolean PrintJob::isCompleted()
	{
		return __thiz.callMethod<jboolean>(
			"isCompleted",
			"()Z");
	}
	void PrintJob::restart()
	{
		__thiz.callMethod<void>(
			"restart",
			"()V");
	}
	jboolean PrintJob::isBlocked()
	{
		return __thiz.callMethod<jboolean>(
			"isBlocked",
			"()Z");
	}
	jboolean PrintJob::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z");
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
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintJob : public __jni_impl::android::print::PrintJob
	{
	public:
		PrintJob(QAndroidJniObject obj) { __thiz = obj; }
		PrintJob()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTJOB

