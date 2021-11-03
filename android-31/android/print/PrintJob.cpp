#include "./PrintJobId.hpp"
#include "./PrintJobInfo.hpp"
#include "../../JObject.hpp"
#include "./PrintJob.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrintJob::PrintJob(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PrintJob::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
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
	void PrintJob::restart() const
	{
		callMethod<void>(
			"restart",
			"()V"
		);
	}
} // namespace android::print

