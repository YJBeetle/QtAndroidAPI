#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ExceptionInInitializerError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	ExceptionInInitializerError::ExceptionInInitializerError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	ExceptionInInitializerError::ExceptionInInitializerError()
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"()V"
		) {}
	ExceptionInInitializerError::ExceptionInInitializerError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ExceptionInInitializerError::ExceptionInInitializerError(JThrowable arg0)
		: java::lang::LinkageError(
			"java.lang.ExceptionInInitializerError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
	JThrowable ExceptionInInitializerError::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace java::lang

