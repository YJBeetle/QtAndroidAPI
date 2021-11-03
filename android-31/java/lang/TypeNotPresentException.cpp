#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./TypeNotPresentException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	TypeNotPresentException::TypeNotPresentException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	TypeNotPresentException::TypeNotPresentException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.TypeNotPresentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
	JString TypeNotPresentException::typeName() const
	{
		return callObjectMethod(
			"typeName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

