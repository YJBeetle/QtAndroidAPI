#include "../../JString.hpp"
#include "./Surface_OutOfResourcesException.hpp"

namespace android::view
{
	// Fields
	
	// QAndroidJniObject forward
	Surface_OutOfResourcesException::Surface_OutOfResourcesException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	Surface_OutOfResourcesException::Surface_OutOfResourcesException()
		: java::lang::RuntimeException(
			"android.view.Surface$OutOfResourcesException",
			"()V"
		) {}
	Surface_OutOfResourcesException::Surface_OutOfResourcesException(JString arg0)
		: java::lang::RuntimeException(
			"android.view.Surface$OutOfResourcesException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view

