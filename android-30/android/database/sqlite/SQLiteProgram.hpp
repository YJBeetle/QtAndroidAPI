#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./SQLiteClosable.hpp"


namespace android::database::sqlite
{
	class SQLiteProgram : public android::database::sqlite::SQLiteClosable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteProgram(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteClosable(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteProgram(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void bindAllArgsAsStrings(jarray arg0);
		void bindBlob(jint arg0, jbyteArray arg1);
		void bindDouble(jint arg0, jdouble arg1);
		void bindLong(jint arg0, jlong arg1);
		void bindNull(jint arg0);
		void bindString(jint arg0, jstring arg1);
		void clearBindings();
		jint getUniqueId();
	};
} // namespace android::database::sqlite

