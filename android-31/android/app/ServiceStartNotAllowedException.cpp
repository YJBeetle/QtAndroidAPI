#include "./ServiceStartNotAllowedException.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	ServiceStartNotAllowedException::ServiceStartNotAllowedException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::app

