#include "./SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"
#include "./SQLiteQuery.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteQuery::SQLiteQuery(QJniObject obj) : android::database::sqlite::SQLiteProgram(obj) {}
	
	// Constructors
	
	// Methods
	jstring SQLiteQuery::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::database::sqlite

