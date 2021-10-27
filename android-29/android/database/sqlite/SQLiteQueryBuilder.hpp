#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::database::sqlite
{
	class SQLiteDatabase;
}
namespace android::os
{
	class CancellationSignal;
}
namespace java::lang
{
	class StringBuilder;
}

namespace android::database::sqlite
{
	class SQLiteQueryBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		SQLiteQueryBuilder(QAndroidJniObject obj);
		// Constructors
		SQLiteQueryBuilder();
		
		// Methods
		static void appendColumns(java::lang::StringBuilder arg0, jarray arg1);
		static jstring buildQueryString(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		static jstring buildQueryString(jboolean arg0, const QString &arg1, jarray arg2, const QString &arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7);
		void appendWhere(jstring arg0);
		void appendWhere(const QString &arg0);
		void appendWhereEscapeString(jstring arg0);
		void appendWhereEscapeString(const QString &arg0);
		void appendWhereStandalone(jstring arg0);
		void appendWhereStandalone(const QString &arg0);
		jstring buildQuery(jarray arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5);
		jstring buildQuery(jarray arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5);
		jstring buildQuery(jarray arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6);
		jstring buildQuery(jarray arg0, const QString &arg1, jarray arg2, const QString &arg3, const QString &arg4, const QString &arg5, const QString &arg6);
		jstring buildUnionQuery(jarray arg0, jstring arg1, jstring arg2);
		jstring buildUnionQuery(jarray arg0, const QString &arg1, const QString &arg2);
		jstring buildUnionSubQuery(jstring arg0, jarray arg1, __JniBaseClass arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		jstring buildUnionSubQuery(const QString &arg0, jarray arg1, __JniBaseClass arg2, jint arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7);
		jstring buildUnionSubQuery(jstring arg0, jarray arg1, __JniBaseClass arg2, jint arg3, jstring arg4, jstring arg5, jarray arg6, jstring arg7, jstring arg8);
		jstring buildUnionSubQuery(const QString &arg0, jarray arg1, __JniBaseClass arg2, jint arg3, const QString &arg4, const QString &arg5, jarray arg6, const QString &arg7, const QString &arg8);
		jint _delete(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		jint _delete(android::database::sqlite::SQLiteDatabase arg0, const QString &arg1, jarray arg2);
		QAndroidJniObject getCursorFactory();
		QAndroidJniObject getProjectionMap();
		jstring getTables();
		jboolean isDistinct();
		jboolean isStrict();
		QAndroidJniObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6);
		QAndroidJniObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6);
		QAndroidJniObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		QAndroidJniObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7);
		QAndroidJniObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7, android::os::CancellationSignal arg8);
		QAndroidJniObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, const QString &arg5, const QString &arg6, const QString &arg7, android::os::CancellationSignal arg8);
		void setCursorFactory(__JniBaseClass arg0);
		void setDistinct(jboolean arg0);
		void setProjectionMap(__JniBaseClass arg0);
		void setStrict(jboolean arg0);
		void setTables(jstring arg0);
		void setTables(const QString &arg0);
		jint update(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1, const QString &arg2, jarray arg3);
	};
} // namespace android::database::sqlite

