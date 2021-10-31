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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteStatement(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteProgram(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteStatement(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void execute();
		jlong executeInsert();
		jint executeUpdateDelete();
		android::os::ParcelFileDescriptor simpleQueryForBlobFileDescriptor();
		jlong simpleQueryForLong();
		jstring simpleQueryForString();
		jstring toString();
	};
} // namespace android::database::sqlite

