#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ContentObserver.def.hpp"
#include "./DataSetObserver.def.hpp"
#include "../../JString.hpp"
#include "./MergeCursor.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline MergeCursor::MergeCursor(JArray arg0)
		: android::database::AbstractCursor(
			"android.database.MergeCursor",
			"([Landroid/database/Cursor;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	inline void MergeCursor::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void MergeCursor::deactivate() const
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	inline JByteArray MergeCursor::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	inline JArray MergeCursor::getColumnNames() const
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	inline jint MergeCursor::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline jdouble MergeCursor::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	inline jfloat MergeCursor::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	inline jint MergeCursor::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	inline jlong MergeCursor::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	inline jshort MergeCursor::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	inline JString MergeCursor::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint MergeCursor::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	inline jboolean MergeCursor::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	inline jboolean MergeCursor::onMove(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void MergeCursor::registerContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	inline void MergeCursor::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	inline jboolean MergeCursor::requery() const
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	inline void MergeCursor::unregisterContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	inline void MergeCursor::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::database

// Base class headers
#include "./AbstractCursor.hpp"

