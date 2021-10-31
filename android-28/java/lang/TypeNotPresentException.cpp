#include "./TypeNotPresentException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	TypeNotPresentException::TypeNotPresentException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	TypeNotPresentException::TypeNotPresentException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.TypeNotPresentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jstring TypeNotPresentException::typeName()
	{
		return callObjectMethod(
			"typeName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

