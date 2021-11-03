#include "./SQLiteClosable.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteClosable::SQLiteClosable(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SQLiteClosable::SQLiteClosable()
		: JObject(
			"android.database.sqlite.SQLiteClosable",
			"()V"
		) {}
	
	// Methods
	void SQLiteClosable::acquireReference() const
	{
		callMethod<void>(
			"acquireReference",
			"()V"
		);
	}
	void SQLiteClosable::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SQLiteClosable::releaseReference() const
	{
		callMethod<void>(
			"releaseReference",
			"()V"
		);
	}
	void SQLiteClosable::releaseReferenceFromContainer() const
	{
		callMethod<void>(
			"releaseReferenceFromContainer",
			"()V"
		);
	}
} // namespace android::database::sqlite

