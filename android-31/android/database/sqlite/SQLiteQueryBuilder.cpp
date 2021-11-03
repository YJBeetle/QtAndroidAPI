#include "../../content/ContentValues.hpp"
#include "./SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"
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
	void SQLiteQueryBuilder::appendColumns(java::lang::StringBuilder arg0, jarray arg1)
	{
		callStaticMethod<void>(
			"android.database.sqlite.SQLiteQueryBuilder",
			"appendColumns",
			"(Ljava/lang/StringBuilder;[Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jstring SQLiteQueryBuilder::buildQueryString(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
	{
		return callStaticObjectMethod(
			"android.database.sqlite.SQLiteQueryBuilder",
			"buildQueryString",
			"(ZLjava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		).object<jstring>();
	}
	void SQLiteQueryBuilder::appendWhere(jstring arg0)
	{
		callMethod<void>(
			"appendWhere",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::appendWhereEscapeString(jstring arg0)
	{
		callMethod<void>(
			"appendWhereEscapeString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::appendWhereStandalone(jstring arg0)
	{
		callMethod<void>(
			"appendWhereStandalone",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring SQLiteQueryBuilder::buildQuery(jarray arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5)
	{
		return callObjectMethod(
			"buildQuery",
			"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildQuery(jarray arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6)
	{
		return callObjectMethod(
			"buildQuery",
			"([Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionQuery(jarray arg0, jstring arg1, jstring arg2)
	{
		return callObjectMethod(
			"buildUnionQuery",
			"([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionSubQuery(jstring arg0, jarray arg1, JObject arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
	{
		return callObjectMethod(
			"buildUnionSubQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		).object<jstring>();
	}
	jstring SQLiteQueryBuilder::buildUnionSubQuery(jstring arg0, jarray arg1, JObject arg2, jint arg3, jstring arg4, jstring arg5, jarray arg6, jstring arg7, jstring arg8)
	{
		return callObjectMethod(
			"buildUnionSubQuery",
			"(Ljava/lang/String;[Ljava/lang/String;Ljava/util/Set;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
		).object<jstring>();
	}
	jint SQLiteQueryBuilder::_delete(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2)
	{
		return callMethod<jint>(
			"delete",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1,
			arg2
		);
	}
	JObject SQLiteQueryBuilder::getCursorFactory()
	{
		return callObjectMethod(
			"getCursorFactory",
			"()Landroid/database/sqlite/SQLiteDatabase$CursorFactory;"
		);
	}
	JObject SQLiteQueryBuilder::getProjectionGreylist()
	{
		return callObjectMethod(
			"getProjectionGreylist",
			"()Ljava/util/Collection;"
		);
	}
	JObject SQLiteQueryBuilder::getProjectionMap()
	{
		return callObjectMethod(
			"getProjectionMap",
			"()Ljava/util/Map;"
		);
	}
	jstring SQLiteQueryBuilder::getTables()
	{
		return callObjectMethod(
			"getTables",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong SQLiteQueryBuilder::insert(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1)
	{
		return callMethod<jlong>(
			"insert",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/content/ContentValues;)J",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean SQLiteQueryBuilder::isDistinct()
	{
		return callMethod<jboolean>(
			"isDistinct",
			"()Z"
		);
	}
	jboolean SQLiteQueryBuilder::isStrict()
	{
		return callMethod<jboolean>(
			"isStrict",
			"()Z"
		);
	}
	jboolean SQLiteQueryBuilder::isStrictColumns()
	{
		return callMethod<jboolean>(
			"isStrictColumns",
			"()Z"
		);
	}
	jboolean SQLiteQueryBuilder::isStrictGrammar()
	{
		return callMethod<jboolean>(
			"isStrictGrammar",
			"()Z"
		);
	}
	JObject SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6)
	{
		return callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	JObject SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
	{
		return callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	JObject SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7, android::os::CancellationSignal arg8)
	{
		return callObjectMethod(
			"query",
			"(Landroid/database/sqlite/SQLiteDatabase;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		);
	}
	void SQLiteQueryBuilder::setCursorFactory(JObject arg0)
	{
		callMethod<void>(
			"setCursorFactory",
			"(Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)V",
			arg0.object()
		);
	}
	void SQLiteQueryBuilder::setDistinct(jboolean arg0)
	{
		callMethod<void>(
			"setDistinct",
			"(Z)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setProjectionGreylist(JObject arg0)
	{
		callMethod<void>(
			"setProjectionGreylist",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void SQLiteQueryBuilder::setProjectionMap(JObject arg0)
	{
		callMethod<void>(
			"setProjectionMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void SQLiteQueryBuilder::setStrict(jboolean arg0)
	{
		callMethod<void>(
			"setStrict",
			"(Z)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setStrictColumns(jboolean arg0)
	{
		callMethod<void>(
			"setStrictColumns",
			"(Z)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setStrictGrammar(jboolean arg0)
	{
		callMethod<void>(
			"setStrictGrammar",
			"(Z)V",
			arg0
		);
	}
	void SQLiteQueryBuilder::setTables(jstring arg0)
	{
		callMethod<void>(
			"setTables",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jint SQLiteQueryBuilder::update(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return callMethod<jint>(
			"update",
			"(Landroid/database/sqlite/SQLiteDatabase;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::database::sqlite

