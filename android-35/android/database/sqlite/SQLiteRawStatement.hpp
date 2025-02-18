#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./SQLiteRawStatement.def.hpp"

namespace android::database::sqlite
{
	// Fields
	inline jint SQLiteRawStatement::SQLITE_DATA_TYPE_BLOB()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteRawStatement",
			"SQLITE_DATA_TYPE_BLOB"
		);
	}
	inline jint SQLiteRawStatement::SQLITE_DATA_TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteRawStatement",
			"SQLITE_DATA_TYPE_FLOAT"
		);
	}
	inline jint SQLiteRawStatement::SQLITE_DATA_TYPE_INTEGER()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteRawStatement",
			"SQLITE_DATA_TYPE_INTEGER"
		);
	}
	inline jint SQLiteRawStatement::SQLITE_DATA_TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteRawStatement",
			"SQLITE_DATA_TYPE_NULL"
		);
	}
	inline jint SQLiteRawStatement::SQLITE_DATA_TYPE_TEXT()
	{
		return getStaticField<jint>(
			"android.database.sqlite.SQLiteRawStatement",
			"SQLITE_DATA_TYPE_TEXT"
		);
	}
	
	// Constructors
	
	// Methods
	inline void SQLiteRawStatement::bindBlob(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"bindBlob",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline void SQLiteRawStatement::bindBlob(jint arg0, JByteArray arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"bindBlob",
			"(I[BII)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2,
			arg3
		);
	}
	inline void SQLiteRawStatement::bindDouble(jint arg0, jdouble arg1) const
	{
		callMethod<void>(
			"bindDouble",
			"(ID)V",
			arg0,
			arg1
		);
	}
	inline void SQLiteRawStatement::bindInt(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"bindInt",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void SQLiteRawStatement::bindLong(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"bindLong",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void SQLiteRawStatement::bindNull(jint arg0) const
	{
		callMethod<void>(
			"bindNull",
			"(I)V",
			arg0
		);
	}
	inline void SQLiteRawStatement::bindText(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"bindText",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void SQLiteRawStatement::clearBindings() const
	{
		callMethod<void>(
			"clearBindings",
			"()V"
		);
	}
	inline void SQLiteRawStatement::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JByteArray SQLiteRawStatement::getColumnBlob(jint arg0) const
	{
		return callObjectMethod(
			"getColumnBlob",
			"(I)[B",
			arg0
		);
	}
	inline jdouble SQLiteRawStatement::getColumnDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getColumnDouble",
			"(I)D",
			arg0
		);
	}
	inline jint SQLiteRawStatement::getColumnInt(jint arg0) const
	{
		return callMethod<jint>(
			"getColumnInt",
			"(I)I",
			arg0
		);
	}
	inline jint SQLiteRawStatement::getColumnLength(jint arg0) const
	{
		return callMethod<jint>(
			"getColumnLength",
			"(I)I",
			arg0
		);
	}
	inline jlong SQLiteRawStatement::getColumnLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getColumnLong",
			"(I)J",
			arg0
		);
	}
	inline JString SQLiteRawStatement::getColumnName(jint arg0) const
	{
		return callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString SQLiteRawStatement::getColumnText(jint arg0) const
	{
		return callObjectMethod(
			"getColumnText",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint SQLiteRawStatement::getColumnType(jint arg0) const
	{
		return callMethod<jint>(
			"getColumnType",
			"(I)I",
			arg0
		);
	}
	inline jint SQLiteRawStatement::getParameterCount() const
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	inline jint SQLiteRawStatement::getParameterIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getParameterIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString SQLiteRawStatement::getParameterName(jint arg0) const
	{
		return callObjectMethod(
			"getParameterName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint SQLiteRawStatement::getResultColumnCount() const
	{
		return callMethod<jint>(
			"getResultColumnCount",
			"()I"
		);
	}
	inline jboolean SQLiteRawStatement::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	inline jint SQLiteRawStatement::readColumnBlob(jint arg0, JByteArray arg1, jint arg2, jint arg3, jint arg4) const
	{
		return callMethod<jint>(
			"readColumnBlob",
			"(I[BIII)I",
			arg0,
			arg1.object<jbyteArray>(),
			arg2,
			arg3,
			arg4
		);
	}
	inline void SQLiteRawStatement::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline jboolean SQLiteRawStatement::step() const
	{
		return callMethod<jboolean>(
			"step",
			"()Z"
		);
	}
	inline JString SQLiteRawStatement::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::database::sqlite

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database::sqlite;
#endif
