#pragma once

#include "../../JByteArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "./MatrixCursor_RowBuilder.def.hpp"
#include "../../JString.hpp"
#include "./MatrixCursor.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline MatrixCursor::MatrixCursor(JArray arg0)
		: android::database::AbstractCursor(
			"android.database.MatrixCursor",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		) {}
	inline MatrixCursor::MatrixCursor(JArray arg0, jint arg1)
		: android::database::AbstractCursor(
			"android.database.MatrixCursor",
			"([Ljava/lang/String;I)V",
			arg0.object<jarray>(),
			arg1
		) {}
	
	// Methods
	inline void MatrixCursor::addRow(JObjectArray arg0) const
	{
		callMethod<void>(
			"addRow",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void MatrixCursor::addRow(JObject arg0) const
	{
		callMethod<void>(
			"addRow",
			"(Ljava/lang/Iterable;)V",
			arg0.object()
		);
	}
	inline JByteArray MatrixCursor::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	inline JArray MatrixCursor::getColumnNames() const
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	inline jint MatrixCursor::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline jdouble MatrixCursor::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	inline jfloat MatrixCursor::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	inline jint MatrixCursor::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	inline jlong MatrixCursor::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	inline jshort MatrixCursor::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	inline JString MatrixCursor::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint MatrixCursor::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	inline jboolean MatrixCursor::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	inline android::database::MatrixCursor_RowBuilder MatrixCursor::newRow() const
	{
		return callObjectMethod(
			"newRow",
			"()Landroid/database/MatrixCursor$RowBuilder;"
		);
	}
} // namespace android::database

// Base class headers
#include "./AbstractCursor.hpp"

