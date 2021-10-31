#include "./OperationApplicationException.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	OperationApplicationException::OperationApplicationException(QJniObject obj) : java::lang::Exception(obj) {}
	
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
	OperationApplicationException::OperationApplicationException(jstring arg0)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	OperationApplicationException::OperationApplicationException(jthrowable arg0)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	OperationApplicationException::OperationApplicationException(jstring arg0, jint arg1)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	OperationApplicationException::OperationApplicationException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint OperationApplicationException::getNumSuccessfulYieldPoints()
	{
		return callMethod<jint>(
			"getNumSuccessfulYieldPoints",
			"()I"
		);
	}
} // namespace android::content

