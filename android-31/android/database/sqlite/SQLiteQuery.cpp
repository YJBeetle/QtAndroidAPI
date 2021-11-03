#include "../../../JString.hpp"
#include "./SQLiteQuery.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteQuery::SQLiteQuery(QAndroidJniObject obj) : android::database::sqlite::SQLiteProgram(obj) {}
	
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

