#include "./SQLException.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	SQLException::SQLException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	SQLException::SQLException()
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"()V"
		) {}
	SQLException::SQLException(jstring arg0)
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SQLException::SQLException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"android.database.SQLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::database

