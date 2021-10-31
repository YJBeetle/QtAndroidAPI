#include "./IllegalAccessError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalAccessError::IllegalAccessError(QAndroidJniObject obj) : java::lang::IncompatibleClassChangeError(obj) {}
	
	// Constructors
	IllegalAccessError::IllegalAccessError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.IllegalAccessError",
			"()V"
		) {}
	IllegalAccessError::IllegalAccessError(jstring arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.IllegalAccessError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

