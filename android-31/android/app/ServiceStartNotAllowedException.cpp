#include "./ServiceStartNotAllowedException.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	ServiceStartNotAllowedException::ServiceStartNotAllowedException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::app

