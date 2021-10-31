#include "./SQLiteClosable.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteClosable::SQLiteClosable(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SQLiteClosable::SQLiteClosable()
		: __JniBaseClass(
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

