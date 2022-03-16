#include "../../JString.hpp"
#include "./ParcelFormatException.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	ParcelFormatException::ParcelFormatException()
		: java::lang::RuntimeException(
			"android.os.ParcelFormatException",
			"()V"
		) {}
	ParcelFormatException::ParcelFormatException(JString arg0)
		: java::lang::RuntimeException(
			"android.os.ParcelFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

