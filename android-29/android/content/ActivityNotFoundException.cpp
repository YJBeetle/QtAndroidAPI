#include "./ActivityNotFoundException.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ActivityNotFoundException::ActivityNotFoundException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ActivityNotFoundException::ActivityNotFoundException()
		: java::lang::RuntimeException(
			"android.content.ActivityNotFoundException",
			"()V"
		) {}
	ActivityNotFoundException::ActivityNotFoundException(jstring arg0)
		: java::lang::RuntimeException(
			"android.content.ActivityNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::content

