#include "./InstantiationException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	InstantiationException::InstantiationException(QAndroidJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
	
	// Constructors
	InstantiationException::InstantiationException()
		: java::lang::ReflectiveOperationException(
			"java.lang.InstantiationException",
			"()V"
		) {}
	InstantiationException::InstantiationException(jstring arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.InstantiationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

