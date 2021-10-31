#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./ExceptionInInitializerError.hpp"

namespace java::lang
{
	// Fields
	
	ExceptionInInitializerError::ExceptionInInitializerError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExceptionInInitializerError::ExceptionInInitializerError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ExceptionInInitializerError",
			"()V"
		);
	}
	ExceptionInInitializerError::ExceptionInInitializerError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ExceptionInInitializerError::ExceptionInInitializerError(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
	jthrowable ExceptionInInitializerError::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace java::lang

