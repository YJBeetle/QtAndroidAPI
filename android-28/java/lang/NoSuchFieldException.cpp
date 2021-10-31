#include "./NoSuchFieldException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	NoSuchFieldException::NoSuchFieldException(QJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
	
	// Constructors
	NoSuchFieldException::NoSuchFieldException()
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchFieldException",
			"()V"
		) {}
	NoSuchFieldException::NoSuchFieldException(jstring arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchFieldException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

