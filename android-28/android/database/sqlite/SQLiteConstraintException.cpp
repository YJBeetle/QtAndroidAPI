#include "../../../JString.hpp"
#include "./SQLiteConstraintException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	SQLiteConstraintException::SQLiteConstraintException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteConstraintException",
			"()V"
		) {}
	SQLiteConstraintException::SQLiteConstraintException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteConstraintException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

