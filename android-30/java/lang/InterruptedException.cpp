#include "../../JString.hpp"
#include "./InterruptedException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	InterruptedException::InterruptedException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	InterruptedException::InterruptedException()
		: java::lang::Exception(
			"java.lang.InterruptedException",
			"()V"
		) {}
	InterruptedException::InterruptedException(JString arg0)
		: java::lang::Exception(
			"java.lang.InterruptedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

