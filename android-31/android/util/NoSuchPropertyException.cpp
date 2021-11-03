#include "../../JString.hpp"
#include "./NoSuchPropertyException.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	NoSuchPropertyException::NoSuchPropertyException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	NoSuchPropertyException::NoSuchPropertyException(JString arg0)
		: java::lang::RuntimeException(
			"android.util.NoSuchPropertyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::util

