#include "./SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../../JString.hpp"
#include "./SQLiteQuery.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteQuery::SQLiteQuery(QJniObject obj) : android::database::sqlite::SQLiteProgram(obj) {}
	
	// Constructors
	
	// Methods
	JString SQLiteQuery::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

