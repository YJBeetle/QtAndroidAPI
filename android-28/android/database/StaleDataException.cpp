#include "../../JString.hpp"
#include "./StaleDataException.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	StaleDataException::StaleDataException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	StaleDataException::StaleDataException()
		: java::lang::RuntimeException(
			"android.database.StaleDataException",
			"()V"
		) {}
	StaleDataException::StaleDataException(JString arg0)
		: java::lang::RuntimeException(
			"android.database.StaleDataException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database

