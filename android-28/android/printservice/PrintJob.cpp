#include "../print/PrintJobId.hpp"
#include "../print/PrintJobInfo.hpp"
#include "./PrintDocument.hpp"
#include "./PrintJob.hpp"

namespace android::printservice
{
	// Fields
	
	// QAndroidJniObject forward
	PrintJob::PrintJob(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean PrintJob::block(jstring arg0)
	{
		return callMethod<jboolean>(
			"block",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PrintJob::cancel()
	{
		return callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	jboolean PrintJob::complete()
	{
		return callMethod<jboolean>(
			"complete",
			"()Z"
		);
	}
	jboolean PrintJob::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean PrintJob::fail(jstring arg0)
	{
		return callMethod<jboolean>(
			"fail",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint PrintJob::getAdvancedIntOption(jstring arg0)
	{
		return callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring PrintJob::getAdvancedStringOption(jstring arg0)
	{
		return callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::printservice::PrintDocument PrintJob::getDocument()
	{
		return callObjectMethod(
			"getDocument",
			"()Landroid/printservice/PrintDocument;"
		);
	}
	android::print::PrintJobId PrintJob::getId()
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	android::print::PrintJobInfo PrintJob::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	jstring PrintJob::getTag()
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PrintJob::hasAdvancedOption(jstring arg0)
	{
		return callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint PrintJob::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PrintJob::isBlocked()
	{
		return callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	jboolean PrintJob::isCancelled()
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean PrintJob::isCompleted()
	{
		return callMethod<jboolean>(
			"isCompleted",
			"()Z"
		);
	}
	jboolean PrintJob::isFailed()
	{
		return callMethod<jboolean>(
			"isFailed",
			"()Z"
		);
	}
	jboolean PrintJob::isQueued()
	{
		return callMethod<jboolean>(
			"isQueued",
			"()Z"
		);
	}
	jboolean PrintJob::isStarted()
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void PrintJob::setProgress(jfloat arg0)
	{
		callMethod<void>(
			"setProgress",
			"(F)V",
			arg0
		);
	}
	void PrintJob::setStatus(jint arg0)
	{
		callMethod<void>(
			"setStatus",
			"(I)V",
			arg0
		);
	}
	void PrintJob::setStatus(jstring arg0)
	{
		callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jboolean PrintJob::setTag(jstring arg0)
	{
		return callMethod<jboolean>(
			"setTag",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PrintJob::start()
	{
		return callMethod<jboolean>(
			"start",
			"()Z"
		);
	}
} // namespace android::printservice

