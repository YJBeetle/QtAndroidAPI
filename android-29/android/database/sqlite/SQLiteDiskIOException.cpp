#include "../../../JString.hpp"
#include "./SQLiteDiskIOException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteDiskIOException::SQLiteDiskIOException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteDiskIOException::SQLiteDiskIOException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDiskIOException",
			"()V"
		) {}
	SQLiteDiskIOException::SQLiteDiskIOException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteDiskIOException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

