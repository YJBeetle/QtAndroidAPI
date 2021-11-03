#include "./SQLiteClosable.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteClosable::SQLiteClosable(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SQLiteClosable::SQLiteClosable()
		: JObject(
			"android.database.sqlite.SQLiteClosable",
			"()V"
		) {}
	
	// Methods
	void SQLiteClosable::acquireReference()
	{
		callMethod<void>(
			"acquireReference",
			"()V"
		);
	}
	void SQLiteClosable::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SQLiteClosable::releaseReference()
	{
		callMethod<void>(
			"releaseReference",
			"()V"
		);
	}
	void SQLiteClosable::releaseReferenceFromContainer()
	{
		callMethod<void>(
			"releaseReferenceFromContainer",
			"()V"
		);
	}
} // namespace android::database::sqlite

