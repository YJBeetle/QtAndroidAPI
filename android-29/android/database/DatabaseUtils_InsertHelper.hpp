#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::database::sqlite
{
	class SQLiteDatabase;
}

namespace android::database
{
	class DatabaseUtils_InsertHelper : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatabaseUtils_InsertHelper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DatabaseUtils_InsertHelper(QAndroidJniObject obj);
		
		// Constructors
		DatabaseUtils_InsertHelper(android::database::sqlite::SQLiteDatabase arg0, jstring arg1);
		
		// Methods
		void bind(jint arg0, jbyteArray arg1);
		void bind(jint arg0, jboolean arg1);
		void bind(jint arg0, jdouble arg1);
		void bind(jint arg0, jfloat arg1);
		void bind(jint arg0, jint arg1);
		void bind(jint arg0, jstring arg1);
		void bind(jint arg0, jlong arg1);
		void bindNull(jint arg0);
		void close();
		jlong execute();
		jint getColumnIndex(jstring arg0);
		jlong insert(android::content::ContentValues arg0);
		void prepareForInsert();
		void prepareForReplace();
		jlong replace(android::content::ContentValues arg0);
	};
} // namespace android::database

