#include "./UnsatisfiedLinkError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	UnsatisfiedLinkError::UnsatisfiedLinkError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	UnsatisfiedLinkError::UnsatisfiedLinkError()
		: java::lang::LinkageError(
			"java.lang.UnsatisfiedLinkError",
			"()V"
		) {}
	UnsatisfiedLinkError::UnsatisfiedLinkError(jstring arg0)
		: java::lang::LinkageError(
			"java.lang.UnsatisfiedLinkError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

