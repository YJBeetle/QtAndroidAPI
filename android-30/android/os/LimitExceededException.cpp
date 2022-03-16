#include "../../JString.hpp"
#include "./LimitExceededException.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	LimitExceededException::LimitExceededException()
		: java::lang::IllegalStateException(
			"android.os.LimitExceededException",
			"()V"
		) {}
	LimitExceededException::LimitExceededException(JString arg0)
		: java::lang::IllegalStateException(
			"android.os.LimitExceededException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

