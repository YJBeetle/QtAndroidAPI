#include "../../java/lang/Exception.hpp"
#include "./BadParcelableException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	BadParcelableException::BadParcelableException(QJniObject obj) : android::util::AndroidRuntimeException(obj) {}
	
	// Constructors
	BadParcelableException::BadParcelableException(java::lang::Exception arg0)
		: android::util::AndroidRuntimeException(
			"android.os.BadParcelableException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	BadParcelableException::BadParcelableException(jstring arg0)
		: android::util::AndroidRuntimeException(
			"android.os.BadParcelableException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::os

