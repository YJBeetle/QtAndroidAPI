#include "../../../JString.hpp"
#include "./SQLiteDoneException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	SQLiteDoneException::SQLiteDoneException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDoneException",
			"()V"
		) {}
	SQLiteDoneException::SQLiteDoneException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDoneException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

