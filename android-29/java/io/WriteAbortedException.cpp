#include "../lang/Exception.hpp"
#include "./WriteAbortedException.hpp"

namespace java::io
{
	// Fields
	QAndroidJniObject WriteAbortedException::detail()
	{
		return __thiz.getObjectField(
			"detail",
			"Ljava/lang/Exception;"
		);
	}
	
	WriteAbortedException::WriteAbortedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WriteAbortedException::WriteAbortedException(jstring arg0, java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.WriteAbortedException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jthrowable WriteAbortedException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring WriteAbortedException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::io

