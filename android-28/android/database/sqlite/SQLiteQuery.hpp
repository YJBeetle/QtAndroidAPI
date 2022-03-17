#pragma once

#include "./SQLiteDatabase.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "../../../JString.hpp"
#include "./SQLiteQuery.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString SQLiteQuery::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

// Base class headers
#include "./SQLiteClosable.hpp"
#include "./SQLiteProgram.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database::sqlite;
#endif
