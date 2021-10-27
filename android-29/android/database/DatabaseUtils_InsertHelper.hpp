#pragma once

#include "../../__JniBaseClass.hpp"

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
	class DatabaseUtils_InsertHelper : public __JniBaseClass
	{
	public:
		// Fields
		
		DatabaseUtils_InsertHelper(QAndroidJniObject obj);
		// Constructors
		DatabaseUtils_InsertHelper(android::database::sqlite::SQLiteDatabase &arg0, jstring &arg1);
		DatabaseUtils_InsertHelper(android::database::sqlite::SQLiteDatabase &arg0, const QString &arg1);
		DatabaseUtils_InsertHelper() = default;
		
		// Methods
		void bind(jint arg0, jbyteArray arg1);
		void bind(jint arg0, jboolean arg1);
		void bind(jint arg0, jdouble arg1);
		void bind(jint arg0, jfloat arg1);
		void bind(jint arg0, jint arg1);
		void bind(jint arg0, jstring arg1);
		void bind(jint arg0, const QString &arg1);
		void bind(jint arg0, jlong arg1);
		void bindNull(jint arg0);
		void close();
		jlong execute();
		jint getColumnIndex(jstring arg0);
		jint getColumnIndex(const QString &arg0);
		jlong insert(android::content::ContentValues arg0);
		void prepareForInsert();
		void prepareForReplace();
		jlong replace(android::content::ContentValues arg0);
	};
} // namespace android::database

