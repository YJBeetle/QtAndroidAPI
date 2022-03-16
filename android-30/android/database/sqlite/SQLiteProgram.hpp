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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteProgram(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteClosable(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteProgram(QAndroidJniObject obj) : android::database::sqlite::SQLiteClosable(obj) {}
		
		// Constructors
		
		// Methods
		void bindAllArgsAsStrings(JArray arg0) const;
		void bindBlob(jint arg0, JByteArray arg1) const;
		void bindDouble(jint arg0, jdouble arg1) const;
		void bindLong(jint arg0, jlong arg1) const;
		void bindNull(jint arg0) const;
		void bindString(jint arg0, JString arg1) const;
		void clearBindings() const;
		jint getUniqueId() const;
	};
} // namespace android::database::sqlite

