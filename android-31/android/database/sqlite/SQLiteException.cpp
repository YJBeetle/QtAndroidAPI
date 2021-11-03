#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SQLiteException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteException::SQLiteException(QJniObject obj) : android::database::SQLException(obj) {}
	
	// Constructors
	SQLiteException::SQLiteException()
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"()V"
		) {}
	SQLiteException::SQLiteException(JString arg0)
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLiteException::SQLiteException(JString arg0, JThrowable arg1)
		: android::database::SQLException(
			"android.database.sqlite.SQLiteException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

