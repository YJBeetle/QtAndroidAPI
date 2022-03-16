#include "../../../JString.hpp"
#include "./SQLiteBindOrColumnIndexOutOfRangeException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBindOrColumnIndexOutOfRangeException",
			"()V"
		) {}
	SQLiteBindOrColumnIndexOutOfRangeException::SQLiteBindOrColumnIndexOutOfRangeException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBindOrColumnIndexOutOfRangeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

