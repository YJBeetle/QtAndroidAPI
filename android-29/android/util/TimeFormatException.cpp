#include "../../JString.hpp"
#include "./TimeFormatException.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	TimeFormatException::TimeFormatException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::util

