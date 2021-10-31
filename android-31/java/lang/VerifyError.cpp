#include "./VerifyError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	VerifyError::VerifyError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
	
	// Constructors
	VerifyError::VerifyError()
		: java::lang::LinkageError(
			"java.lang.VerifyError",
			"()V"
		) {}
	VerifyError::VerifyError(jstring arg0)
		: java::lang::LinkageError(
			"java.lang.VerifyError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

