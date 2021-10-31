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
	StaleDataException::StaleDataException(jstring arg0)
		: java::lang::RuntimeException(
			"android.database.StaleDataException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::database

