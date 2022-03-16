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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteStatement(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteProgram(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteStatement(QAndroidJniObject obj) : android::database::sqlite::SQLiteProgram(obj) {}
		
		// Constructors
		
		// Methods
		void execute() const;
		jlong executeInsert() const;
		jint executeUpdateDelete() const;
		android::os::ParcelFileDescriptor simpleQueryForBlobFileDescriptor() const;
		jlong simpleQueryForLong() const;
		JString simpleQueryForString() const;
		JString toString() const;
	};
} // namespace android::database::sqlite

