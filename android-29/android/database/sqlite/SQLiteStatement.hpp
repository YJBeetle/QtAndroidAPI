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
	class ParcelFileDescriptor;
}

namespace android::database::sqlite
{
	class SQLiteStatement : public android::database::sqlite::SQLiteProgram
	{
	public:
		// Fields
		
		SQLiteStatement(QAndroidJniObject obj);
		// Constructors
		SQLiteStatement() = default;
		
		// Methods
		void execute();
		jlong executeInsert();
		jint executeUpdateDelete();
		QAndroidJniObject simpleQueryForBlobFileDescriptor();
		jlong simpleQueryForLong();
		jstring simpleQueryForString();
		jstring toString();
	};
} // namespace android::database::sqlite

