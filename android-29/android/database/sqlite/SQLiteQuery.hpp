#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./SQLiteClosable.hpp"
#include "./SQLiteProgram.hpp"

namespace android::database::sqlite
{
	class SQLiteDatabase;
}
namespace android::os
{
	class CancellationSignal;
}

namespace android::database::sqlite
{
	class SQLiteQuery : public android::database::sqlite::SQLiteProgram
	{
	public:
		// Fields
		
		SQLiteQuery(QAndroidJniObject obj);
		// Constructors
		SQLiteQuery() = default;
		
		// Methods
		jstring toString();
	};
} // namespace android::database::sqlite

