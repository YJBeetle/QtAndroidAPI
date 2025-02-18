#pragma once

#include "../../JByteArray.hpp"
#include "./CharArrayBuffer.def.hpp"
#include "./CursorWindow.def.hpp"
#include "../../JString.hpp"
#include "./AbstractWindowedCursor.def.hpp"

namespace android::database
{
	// Fields
	
	// Constructors
	inline AbstractWindowedCursor::AbstractWindowedCursor()
		: android::database::AbstractCursor(
			"android.database.AbstractWindowedCursor",
			"()V"
		) {}
	
	// Methods
	inline void AbstractWindowedCursor::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1) const
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	inline JByteArray AbstractWindowedCursor::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	inline jdouble AbstractWindowedCursor::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	inline jfloat AbstractWindowedCursor::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	inline jint AbstractWindowedCursor::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	inline jlong AbstractWindowedCursor::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	inline jshort AbstractWindowedCursor::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	inline JString AbstractWindowedCursor::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint AbstractWindowedCursor::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	inline android::database::CursorWindow AbstractWindowedCursor::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	inline jboolean AbstractWindowedCursor::hasWindow() const
	{
		return callMethod<jboolean>(
			"hasWindow",
			"()Z"
		);
	}
	inline jboolean AbstractWindowedCursor::isBlob(jint arg0) const
	{
		return callMethod<jboolean>(
			"isBlob",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AbstractWindowedCursor::isFloat(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFloat",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AbstractWindowedCursor::isLong(jint arg0) const
	{
		return callMethod<jboolean>(
			"isLong",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AbstractWindowedCursor::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	inline jboolean AbstractWindowedCursor::isString(jint arg0) const
	{
		return callMethod<jboolean>(
			"isString",
			"(I)Z",
			arg0
		);
	}
	inline void AbstractWindowedCursor::setWindow(android::database::CursorWindow arg0) const
	{
		callMethod<void>(
			"setWindow",
			"(Landroid/database/CursorWindow;)V",
			arg0.object()
		);
	}
} // namespace android::database

// Base class headers
#include "./AbstractCursor.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::database;
#endif
