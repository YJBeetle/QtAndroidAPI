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
		void appendWhere(JString arg0) const;
		void appendWhereEscapeString(JString arg0) const;
		void appendWhereStandalone(JString arg0) const;
		JString buildQuery(JArray arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5) const;
		JString buildQuery(JArray arg0, JString arg1, JArray arg2, JString arg3, JString arg4, JString arg5, JString arg6) const;
		JString buildUnionQuery(JArray arg0, JString arg1, JString arg2) const;
		JString buildUnionSubQuery(JString arg0, JArray arg1, JObject arg2, jint arg3, JString arg4, JString arg5, JString arg6, JString arg7) const;
		JString buildUnionSubQuery(JString arg0, JArray arg1, JObject arg2, jint arg3, JString arg4, JString arg5, JArray arg6, JString arg7, JString arg8) const;
		jint _delete(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2) const;
		JObject getCursorFactory() const;
		JObject getProjectionGreylist() const;
		JObject getProjectionMap() const;
		JString getTables() const;
		jlong insert(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1) const;
		jboolean isDistinct() const;
		jboolean isStrict() const;
		jboolean isStrictColumns() const;
		jboolean isStrictGrammar() const;
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6) const;
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7) const;
		JObject query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7, android::os::CancellationSignal arg8) const;
		void setCursorFactory(JObject arg0) const;
		void setDistinct(jboolean arg0) const;
		void setProjectionGreylist(JObject arg0) const;
		void setProjectionMap(JObject arg0) const;
		void setStrict(jboolean arg0) const;
		void setStrictColumns(jboolean arg0) const;
		void setStrictGrammar(jboolean arg0) const;
		void setTables(JString arg0) const;
		jint update(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const;
	};
} // namespace android::database::sqlite

