#include "../../java/lang/Exception.hpp"
#include "../../JString.hpp"
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
	BadParcelableException::BadParcelableException(JString arg0)
		: android::util::AndroidRuntimeException(
			"android.os.BadParcelableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::os

