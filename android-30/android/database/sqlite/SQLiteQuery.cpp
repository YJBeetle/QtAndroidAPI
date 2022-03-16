#include "../../../JString.hpp"
#include "./SQLiteQuery.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	
	// Methods
	JString SQLiteQuery::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

