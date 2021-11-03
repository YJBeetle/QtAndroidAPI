#include "../../../JArray.hpp"
#include "../../content/ContentValues.hpp"
#include "./SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuilder.hpp"
#include "./SQLiteQueryBuilder.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QAndroidJniObject forward
	SQLiteQueryBuilder::SQLiteQueryBuilder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SQLiteQueryBuilder::SQLiteQueryBuilder()
		: JObject(
			"android.database.sqlite.SQLiteQueryBuilder",
			"()V"
		) {}
	
	// Methods
	void SQLiteQueryBuilder::appendColumns(java::lang::StringBuilder arg0, JArray arg1)
	{
		callStaticMethod<void>(
			"android.database.sqlite.SQLiteQueryBuilder",
			"appendColumns",
			"(Ljava/lang/StringBuilder;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JString SQLiteQueryBuilder::buildQueryString(jboolean arg0, JString arg1, JArray arg2, JString arg3, JString arg4, JString arg5, JString arg6, JString arg7)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteQueryBuilder",
			"buildQueryString",
			"(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>(),
			arg7.object<jstring>()
		);
	}
	void SQLiteQueryBuilder::appendWhere(JString arg0) const
	{
		callMethod<void>(
			"appendWhere",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void SQLiteQueryBuilder::appendWhereEscapeString(JString arg0) const
	{
		callMethod<void>(
			"appendWhereEscapeString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void SQLiteQueryBuilder::appendWhereStandalone(JString arg0) const
	{
		callMethod<void>(
			"appendWhereStandalone",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	JString SQLiteQueryBuilder::buildQuery(JArray arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5) const
	{
		return callObjectMethod(
			"buildQuery",
			"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>()
		);
	}
	JString SQLiteQueryBuilder::buildQuery(JArray arg0, JString arg1, JArray arg2, JString arg3, JString arg4, JString arg5, JString arg6) const
	{
		return callObjectMethod(
			"buildQuery",
			"([Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>()
		);
	}
	JString SQLiteQueryBuilder::buildUnionQuery(JArray arg0, JString arg1, JString arg2) const
	{
		return callObjectMethod(
			"buildUnionQuery",
			"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jarray>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	JString SQLiteQueryBuilder::buildUnionSubQuery(JString arg0, JArray arg1, JObject arg2, jint arg3, JString arg4, JString arg5, JString arg6, JString arg7) const
	{
		return callObjectMethod(
			"buildUnionSubQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3,
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>(),
			arg7.object<jstring>()
		);
	}
	JString SQLiteQueryBuilder::buildUnionSubQuery(JString arg0, JArray arg1, JObject arg2, jint arg3, JString arg4, JString arg5, JArray arg6, JString arg7, JString arg8) const
	{
		return callObjectMethod(
			"buildUnionSubQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3,
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jarray>(),
			arg7.object<jstring>(),
			arg8.object<jstring>()
		);
	}
	jint SQLiteQueryBuilder::_delete(android::database::sqlite::SQLiteDatabase arg0, JString arg1, JArray arg2) const
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	JObject SQLiteQueryBuilder::getCursorFactory() const
	{
		return callObjectMethod(
			"getCursorFactory",
			"()Landroid/database/sqlite/SQLiteDatabase$CursorFactory;"
		);
	}
	JObject SQLiteQueryBuilder::getProjectionMap() const
	{
		return callObjectMethod(
			"getProjectionMap",
			"()Ljava/util/Map;"
		);
	}
	JString SQLiteQueryBuilder::getTables() const
	{
		return callObjectMethod(
			"getTables",
			"()Ljava/lang/String;"
		);
	}
	jboolean SQLiteQueryBuilder::isDistinct() const
	{
		return callMethod<jboolean>(
			"isDistinct",
			"()Z"
		);
	}
	jboolean SQLiteQueryBuilder::isStrict() const
	{
		return callMethod<jboolean>(
			"isStrict",
			"()Z"
		);
	}
	JObject SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6) const
	{
		return callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>()
		);
	}
	JObject SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7) const
	{
		return callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>(),
			arg7.object<jstring>()
		);
	}
	JObject SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, JArray arg1, JString arg2, JArray arg3, JString arg4, JString arg5, JString arg6, JString arg7, android::os::CancellationSignal arg8) const
	{
		return callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6.object<jstring>(),
			arg7.object<jstring>(),
			arg8.object()
		);
	}
	void SQLiteQueryBuilder::setCursorFactory(JObject arg0) const
	{
		callMethod<void>(
			"setCursorFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)V",
			arg0.object()
		);
	}
	void SQLiteQueryBuilder::setDistinct(jboolean arg0) const
	{
		callMethod<void>(
			"setDistinct",
			"(Z)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setProjectionMap(JObject arg0) const
	{
		callMethod<void>(
			"setProjectionMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void SQLiteQueryBuilder::setStrict(jboolean arg0) const
	{
		callMethod<void>(
			"setStrict",
			"(Z)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setTables(JString arg0) const
	{
		callMethod<void>(
			"setTables",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jint SQLiteQueryBuilder::update(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1, JString arg2, JArray arg3) const
	{
		return callMethod<jint>(
			"update",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
} // namespace android::database::sqlite

