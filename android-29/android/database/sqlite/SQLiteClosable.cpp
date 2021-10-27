#include "./SQLiteClosable.hpp"

namespace android::database::sqlite
{
	// Fields
	
	SQLiteClosable::SQLiteClosable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SQLiteClosable::SQLiteClosable()
	{
		__thiz = QAndroidJniObject(
			"android.database.sqlite.SQLiteClosable",
			"()V"
		);
	}
	
	// Methods
	void SQLiteClosable::acquireReference()
	{
		__thiz.callMethod<void>(
			"acquireReference",
			"()V"
		);
	}
	void SQLiteClosable::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void SQLiteClosable::releaseReference()
	{
		__thiz.callMethod<void>(
			"releaseReference",
			"()V"
		);
	}
	void SQLiteClosable::releaseReferenceFromContainer()
	{
		__thiz.callMethod<void>(
			"releaseReferenceFromContainer",
			"()V"
		);
	}
} // namespace android::database::sqlite

