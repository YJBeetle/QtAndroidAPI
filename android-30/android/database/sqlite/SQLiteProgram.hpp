#pragma once

#include "./SQLiteClosable.hpp"

class JByteArray;
class JArray;
class JString;

namespace android::database::sqlite
{
	class SQLiteProgram : public android::database::sqlite::SQLiteClosable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteProgram(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteClosable(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteProgram(QJniObject obj);
		
		// Constructors
		
		// Methods
		void bindAllArgsAsStrings(JArray arg0);
		void bindBlob(jint arg0, JByteArray arg1);
		void bindDouble(jint arg0, jdouble arg1);
		void bindLong(jint arg0, jlong arg1);
		void bindNull(jint arg0);
		void bindString(jint arg0, JString arg1);
		void clearBindings();
		jint getUniqueId();
	};
} // namespace android::database::sqlite

