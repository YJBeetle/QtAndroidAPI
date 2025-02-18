#pragma once

#include "./SQLiteClosable.def.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// Constructors
	inline SQLiteClosable::SQLiteClosable()
		: JObject(
			"android.database.sqlite.SQLiteClosable",
			"()V"
		) {}
	
	// Methods
	inline void SQLiteClosable::acquireReference() const
	{
		callMethod<void>(
			"acquireReference",
			"()V"
		);
	}
	inline void SQLiteClosable::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void SQLiteClosable::releaseReference() const
	{
		callMethod<void>(
			"releaseReference",
			"()V"
		);
	}
	inline void SQLiteClosable::releaseReferenceFromContainer() const
	{
		callMethod<void>(
			"releaseReferenceFromContainer",
			"()V"
		);
	}
} // namespace android::database::sqlite

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database::sqlite;
#endif
