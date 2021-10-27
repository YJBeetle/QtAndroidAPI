#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintJobId;
}
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
	class PrintJob : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void cancel();
		jboolean equals(jobject arg0);
		QAndroidJniObject getId();
		QAndroidJniObject getInfo();
		jint hashCode();
		jboolean isBlocked();
		jboolean isCancelled();
		jboolean isCompleted();
		jboolean isFailed();
		jboolean isQueued();
		jboolean isStarted();
		void restart();
	};
} // namespace __jni_impl::android::print

#include "PrintJobId.hpp"
#include "PrintJobInfo.hpp"
#include "PrintManager.hpp"

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
	void PrintJob::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jboolean PrintJob::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PrintJob::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	QAndroidJniObject PrintJob::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	jint PrintJob::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PrintJob::isBlocked()
	{
		return __thiz.callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	jboolean PrintJob::isCancelled()
	{
		return __thiz.callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean PrintJob::isCompleted()
	{
		return __thiz.callMethod<jboolean>(
			"isCompleted",
			"()Z"
		);
	}
	jboolean PrintJob::isFailed()
	{
		return __thiz.callMethod<jboolean>(
			"isFailed",
			"()Z"
		);
	}
	jboolean PrintJob::isQueued()
	{
		return __thiz.callMethod<jboolean>(
			"isQueued",
			"()Z"
		);
	}
	jboolean PrintJob::isStarted()
	{
		return __thiz.callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void PrintJob::restart()
	{
		__thiz.callMethod<void>(
			"restart",
			"()V"
		);
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

