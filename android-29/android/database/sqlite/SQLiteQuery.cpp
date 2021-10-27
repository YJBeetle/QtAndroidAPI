#include "./SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"
#include "./SQLiteQuery.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteQuery::SQLiteQuery(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring SQLiteQuery::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::database::sqlite

