#pragma once

#include "./SQLiteProgram.hpp"

namespace android::os
{
	class ParcelFileDescriptor;
}
class JString;

namespace android::database::sqlite
{
	class SQLiteStatement : public android::database::sqlite::SQLiteProgram
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteStatement(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteProgram(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteStatement(QJniObject obj);
		
		// Constructors
		
		// Methods
		void execute();
		jlong executeInsert();
		jint executeUpdateDelete();
		android::os::ParcelFileDescriptor simpleQueryForBlobFileDescriptor();
		jlong simpleQueryForLong();
		JString simpleQueryForString();
		JString toString();
	};
} // namespace android::database::sqlite

