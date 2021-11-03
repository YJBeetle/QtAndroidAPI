#include "../../JString.hpp"
#include "./InstantiationException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	InstantiationException::InstantiationException(QJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
	
	// Constructors
	InstantiationException::InstantiationException()
		: java::lang::ReflectiveOperationException(
			"java.lang.InstantiationException",
			"()V"
		) {}
	InstantiationException::InstantiationException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.InstantiationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

