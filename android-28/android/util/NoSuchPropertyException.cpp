#include "./NoSuchPropertyException.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	NoSuchPropertyException::NoSuchPropertyException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	NoSuchPropertyException::NoSuchPropertyException(jstring arg0)
		: java::lang::RuntimeException(
			"android.util.NoSuchPropertyException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util

