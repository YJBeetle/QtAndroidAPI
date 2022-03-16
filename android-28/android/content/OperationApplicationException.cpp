#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./OperationApplicationException.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	OperationApplicationException::OperationApplicationException()
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"()V"
		) {}
	OperationApplicationException::OperationApplicationException(jint arg0)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(I)V",
			arg0
		) {}
	OperationApplicationException::OperationApplicationException(JString arg0)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	OperationApplicationException::OperationApplicationException(JThrowable arg0)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	OperationApplicationException::OperationApplicationException(JString arg0, jint arg1)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	OperationApplicationException::OperationApplicationException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
	jint OperationApplicationException::getNumSuccessfulYieldPoints() const
	{
		return callMethod<jint>(
			"getNumSuccessfulYieldPoints",
			"()I"
		);
	}
} // namespace android::content

