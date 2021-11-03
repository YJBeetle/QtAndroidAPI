#include "../../JString.hpp"
#include "./IncompatibleClassChangeError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IncompatibleClassChangeError::IncompatibleClassChangeError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	IncompatibleClassChangeError::IncompatibleClassChangeError()
		: java::lang::LinkageError(
			"java.lang.IncompatibleClassChangeError",
			"()V"
		) {}
	IncompatibleClassChangeError::IncompatibleClassChangeError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.IncompatibleClassChangeError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

