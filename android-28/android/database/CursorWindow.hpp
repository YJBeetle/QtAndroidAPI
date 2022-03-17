#pragma once

#include "../../JByteArray.hpp"
#include "./CharArrayBuffer.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./CursorWindow.def.hpp"

namespace android::database
{
	// Fields
	inline JObject CursorWindow::CREATOR()
	{
		return getStaticObjectField(
			"android.database.CursorWindow",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CursorWindow::CursorWindow(jboolean arg0)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Z)V",
			arg0
		) {}
	inline CursorWindow::CursorWindow(JString arg0)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline CursorWindow::CursorWindow(JString arg0, jlong arg1)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline android::database::CursorWindow CursorWindow::newFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.database.CursorWindow",
			"newFromParcel",
			"(Landroid/os/Parcel;)Landroid/database/CursorWindow;",
			arg0.object()
		);
	}
	inline jboolean CursorWindow::allocRow() const
	{
		return callMethod<jboolean>(
			"allocRow",
			"()Z"
		);
	}
	inline void CursorWindow::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void CursorWindow::copyStringToBuffer(jint arg0, jint arg1, android::database::CharArrayBuffer arg2) const
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(IILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jint CursorWindow::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void CursorWindow::freeLastRow() const
	{
		callMethod<void>(
			"freeLastRow",
			"()V"
		);
	}
	inline JByteArray CursorWindow::getBlob(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getBlob",
			"(II)[B",
			arg0,
			arg1
		);
	}
	inline jdouble CursorWindow::getDouble(jint arg0, jint arg1) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(II)D",
			arg0,
			arg1
		);
	}
	inline jfloat CursorWindow::getFloat(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline jint CursorWindow::getInt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jlong CursorWindow::getLong(jint arg0, jint arg1) const
	{
		return callMethod<jlong>(
			"getLong",
			"(II)J",
			arg0,
			arg1
		);
	}
	inline jint CursorWindow::getNumRows() const
	{
		return callMethod<jint>(
			"getNumRows",
			"()I"
		);
	}
	inline jshort CursorWindow::getShort(jint arg0, jint arg1) const
	{
		return callMethod<jshort>(
			"getShort",
			"(II)S",
			arg0,
			arg1
		);
	}
	inline jint CursorWindow::getStartPosition() const
	{
		return callMethod<jint>(
			"getStartPosition",
			"()I"
		);
	}
	inline JString CursorWindow::getString(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline jint CursorWindow::getType(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getType",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jboolean CursorWindow::isBlob(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isBlob",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean CursorWindow::isFloat(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isFloat",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean CursorWindow::isLong(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isLong",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean CursorWindow::isNull(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean CursorWindow::isString(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isString",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean CursorWindow::putBlob(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"putBlob",
			"([BII)Z",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean CursorWindow::putDouble(jdouble arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"putDouble",
			"(DII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean CursorWindow::putLong(jlong arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"putLong",
			"(JII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean CursorWindow::putNull(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"putNull",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean CursorWindow::putString(JString arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"putString",
			"(Ljava/lang/String;II)Z",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jboolean CursorWindow::setNumColumns(jint arg0) const
	{
		return callMethod<jboolean>(
			"setNumColumns",
			"(I)Z",
			arg0
		);
	}
	inline void CursorWindow::setStartPosition(jint arg0) const
	{
		callMethod<void>(
			"setStartPosition",
			"(I)V",
			arg0
		);
	}
	inline JString CursorWindow::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CursorWindow::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::database

// Base class headers
#include "./sqlite/SQLiteClosable.hpp"

