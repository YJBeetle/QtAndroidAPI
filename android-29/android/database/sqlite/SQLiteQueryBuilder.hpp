#pragma once

#include "../../../JObject.hpp"

class JArray;
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
class JString;
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace android::database::sqlite
{
	class SQLiteQueryBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteQueryBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteQueryBuilder(QJniObject obj);
		
		// Constructors
		SQLiteQueryBuilder();
		
		// Methods
		static void appendColumns(java::lang::StringBuilder arg0, JArray arg1);
		static JString buildQueryString(jboolean arg0, JString arg1, JArray arg2, JString arg3, JString arg4, JString arg5, JString arg6, JString arg7);
		void appendWhere(JString arg0);
		void appendWhereEscapeString(JString arg0);
		void appendWhereStandalone(JString arg0);
		JString buildQuery(JArray arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5);
		JString buildQuery(JArray arg0, JString arg1, JArray arg2, JString arg3, JString arg4, JString arg5, JString arg6);
		JString buildUnionQuery(JArray arg0, JString arg1, JString arg2);
		JString buildUnionSubQuery(JString arg0, JArray arg1, JObject arg2, jint arg3, JString arg4, JString arg5, JString arg6, JString arg7);
		JString buildUnionSubQuery(JString arg0, JArray arg1, JObject arg2, jint arg3, JString arg4, JString arg5, JArray arg6, JString arg7, JString arg8);
		jint _delete(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2);
		JObject getCursorFactory();
		JObject getProjectionMap();
		JString getTables();
		jboolean isDistinct();
		jboolean isStrict();
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6);
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7);
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7, android::os::CancellationSignal arg8);
		void setCursorFactory(JObject arg0);
		void setDistinct(jboolean arg0);
		void setProjectionMap(JObject arg0);
		void setStrict(jboolean arg0);
		void setTables(JString arg0);
		jint update(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1, JString arg2, JArray arg3);
	};
} // namespace android::database::sqlite

