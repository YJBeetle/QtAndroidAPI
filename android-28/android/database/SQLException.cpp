#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLException.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	SQLException::SQLException()
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"()V"
		) {}
	SQLException::SQLException(JString arg0)
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLException::SQLException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::database

