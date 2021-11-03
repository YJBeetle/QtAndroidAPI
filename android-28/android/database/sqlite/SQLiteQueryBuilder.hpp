#pragma once

#include "../../../JObject.hpp"

class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteQueryBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteQueryBuilder(QAndroidJniObject obj);
		
		// Constructors
		SQLiteQueryBuilder();
		
		// Methods
		static void appendColumns(java::lang::StringBuilder arg0, JArray arg1);
		static JString buildQueryString(jboolean arg0, JString arg1, JArray arg2, JString arg3, JString arg4, JString arg5, JString arg6, JString arg7);
		void appendWhere(JString arg0);
		void appendWhereEscapeString(JString arg0);
		JString buildQuery(JArray arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5);
		JString buildQuery(JArray arg0, JString arg1, JArray arg2, JString arg3, JString arg4, JString arg5, JString arg6);
		JString buildUnionQuery(JArray arg0, JString arg1, JString arg2);
		JString buildUnionSubQuery(JString arg0, JArray arg1, JObject arg2, jint arg3, JString arg4, JString arg5, JString arg6, JString arg7);
		JString buildUnionSubQuery(JString arg0, JArray arg1, JObject arg2, jint arg3, JString arg4, JString arg5, JArray arg6, JString arg7, JString arg8);
		JString getTables();
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6);
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7);
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7, android::os::CancellationSignal arg8);
		void setCursorFactory(JObject arg0);
		void setDistinct(jboolean arg0);
		void setProjectionMap(JObject arg0);
		void setStrict(jboolean arg0);
		void setTables(JString arg0);
	};
} // namespace android::database::sqlite

