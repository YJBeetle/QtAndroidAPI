#include "../lang/Exception.hpp"
#include "./WriteAbortedException.hpp"

namespace java::io
{
	// Fields
	java::lang::Exception WriteAbortedException::detail()
	{
		return getObjectField(
			"detail",
			"Ljava/lang/Exception;"
		);
	}
	
	// QJniObject forward
	WriteAbortedException::WriteAbortedException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	WriteAbortedException::WriteAbortedException(jstring arg0, java::lang::Exception arg1)
		: java::io::ObjectStreamException(
			"java.io.WriteAbortedException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jthrowable WriteAbortedException::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring WriteAbortedException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::io

