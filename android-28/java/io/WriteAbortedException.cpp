#include "../lang/Exception.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
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
	WriteAbortedException::WriteAbortedException(JString arg0, java::lang::Exception arg1)
		: java::io::ObjectStreamException(
			"java.io.WriteAbortedException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	JThrowable WriteAbortedException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	JString WriteAbortedException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::io

