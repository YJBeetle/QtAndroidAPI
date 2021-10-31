#include "./SQLiteDatabase.hpp"
#include "../../os/CancellationSignal.hpp"
#include "../../../java/lang/StringBuilder.hpp"
#include "./SQLiteQueryBuilder.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteQueryBuilder::SQLiteQueryBuilder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SQLiteQueryBuilder::SQLiteQueryBuilder()
		: __JniBaseClass(
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
	jstring SQLiteQueryBuilder::buildUnionSubQuery(jstring arg0, jarray arg1, __JniBaseClass arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
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
	jstring SQLiteQueryBuilder::buildUnionSubQuery(jstring arg0, jarray arg1, __JniBaseClass arg2, jint arg3, jstring arg4, jstring arg5, jarray arg6, jstring arg7, jstring arg8)
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
	jstring SQLiteQueryBuilder::getTables()
	{
		return callObjectMethod(
			"getTables",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6)
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
	__JniBaseClass SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7)
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
	__JniBaseClass SQLiteQueryBuilder::query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7, android::os::CancellationSignal arg8)
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
	void SQLiteQueryBuilder::setCursorFactory(__JniBaseClass arg0)
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
	void SQLiteQueryBuilder::setProjectionMap(__JniBaseClass arg0)
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
	void SQLiteQueryBuilder::setTables(jstring arg0)
	{
		callMethod<void>(
			"setTables",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::database::sqlite

