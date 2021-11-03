#include "../print/PrintJobId.hpp"
#include "../print/PrintJobInfo.hpp"
#include "./PrintDocument.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintJob.hpp"

namespace android::printservice
{
	// Fields
	
	// QAndroidJniObject forward
	PrintJob::PrintJob(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean PrintJob::block(JString arg0) const
	{
		return callMethod<jboolean>(
			"block",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean PrintJob::cancel() const
	{
		return callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	jboolean PrintJob::complete() const
	{
		return callMethod<jboolean>(
			"complete",
			"()Z"
		);
	}
	jboolean PrintJob::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean PrintJob::fail(JString arg0) const
	{
		return callMethod<jboolean>(
			"fail",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jint PrintJob::getAdvancedIntOption(JString arg0) const
	{
		return callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JString PrintJob::getAdvancedStringOption(JString arg0) const
	{
		return callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	android::printservice::PrintDocument PrintJob::getDocument() const
	{
		return callObjectMethod(
			"getDocument",
			"()Landroid/printservice/PrintDocument;"
		);
	}
	android::print::PrintJobId PrintJob::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	android::print::PrintJobInfo PrintJob::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	JString PrintJob::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	jboolean PrintJob::hasAdvancedOption(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jint PrintJob::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean PrintJob::isBlocked() const
	{
		return callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	jboolean PrintJob::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean PrintJob::isCompleted() const
	{
		return callMethod<jboolean>(
			"isCompleted",
			"()Z"
		);
	}
	jboolean PrintJob::isFailed() const
	{
		return callMethod<jboolean>(
			"isFailed",
			"()Z"
		);
	}
	jboolean PrintJob::isQueued() const
	{
		return callMethod<jboolean>(
			"isQueued",
			"()Z"
		);
	}
	jboolean PrintJob::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	void PrintJob::setProgress(jfloat arg0) const
	{
		callMethod<void>(
			"setProgress",
			"(F)V",
			arg0
		);
	}
	void PrintJob::setStatus(jint arg0) const
	{
		callMethod<void>(
			"setStatus",
			"(I)V",
			arg0
		);
	}
	void PrintJob::setStatus(JString arg0) const
	{
		callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	jboolean PrintJob::setTag(JString arg0) const
	{
		return callMethod<jboolean>(
			"setTag",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean PrintJob::start() const
	{
		return callMethod<jboolean>(
			"start",
			"()Z"
		);
	}
} // namespace android::printservice

