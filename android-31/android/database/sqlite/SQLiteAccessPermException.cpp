#include "../../../JString.hpp"
#include "./SQLiteAccessPermException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	SQLiteAccessPermException::SQLiteAccessPermException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteAccessPermException",
			"()V"
		) {}
	SQLiteAccessPermException::SQLiteAccessPermException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteAccessPermException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

