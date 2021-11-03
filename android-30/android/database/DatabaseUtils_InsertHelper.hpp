#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::content
{
	class ContentValues;
}
namespace android::database::sqlite
{
	class SQLiteDatabase;
}
class JString;

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
		DatabaseUtils_InsertHelper(android::database::sqlite::SQLiteDatabase arg0, JString arg1);
		
		// Methods
		void bind(jint arg0, JByteArray arg1) const;
		void bind(jint arg0, jboolean arg1) const;
		void bind(jint arg0, jdouble arg1) const;
		void bind(jint arg0, jfloat arg1) const;
		void bind(jint arg0, jint arg1) const;
		void bind(jint arg0, JString arg1) const;
		void bind(jint arg0, jlong arg1) const;
		void bindNull(jint arg0) const;
		void close() const;
		jlong execute() const;
		jint getColumnIndex(JString arg0) const;
		jlong insert(android::content::ContentValues arg0) const;
		void prepareForInsert() const;
		void prepareForReplace() const;
		jlong replace(android::content::ContentValues arg0) const;
	};
} // namespace android::database

