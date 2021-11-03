#include "../../JByteArray.hpp"
#include "./CharArrayBuffer.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./CursorWindow.hpp"

namespace android::database
{
	// Fields
	JObject CursorWindow::CREATOR()
	{
		return getStaticObjectField(
			"android.database.CursorWindow",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CursorWindow::CursorWindow(QAndroidJniObject obj) : android::database::sqlite::SQLiteClosable(obj) {}
	
	// Constructors
	CursorWindow::CursorWindow(jboolean arg0)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Z)V",
			arg0
		) {}
	CursorWindow::CursorWindow(JString arg0)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CursorWindow::CursorWindow(JString arg0, jlong arg1)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	android::database::CursorWindow CursorWindow::newFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.database.CursorWindow",
			"newFromParcel",
			"(Landroid/os/Parcel;)Landroid/database/CursorWindow;",
			arg0.object()
		);
	}
	jboolean CursorWindow::allocRow() const
	{
		return callMethod<jboolean>(
			"allocRow",
			"()Z"
		);
	}
	void CursorWindow::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void CursorWindow::copyStringToBuffer(jint arg0, jint arg1, android::database::CharArrayBuffer arg2) const
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(IILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint CursorWindow::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CursorWindow::freeLastRow() const
	{
		callMethod<void>(
			"freeLastRow",
			"()V"
		);
	}
	JByteArray CursorWindow::getBlob(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getBlob",
			"(II)[B",
			arg0,
			arg1
		);
	}
	jdouble CursorWindow::getDouble(jint arg0, jint arg1) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(II)D",
			arg0,
			arg1
		);
	}
	jfloat CursorWindow::getFloat(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(II)F",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getInt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong CursorWindow::getLong(jint arg0, jint arg1) const
	{
		return callMethod<jlong>(
			"getLong",
			"(II)J",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getNumRows() const
	{
		return callMethod<jint>(
			"getNumRows",
			"()I"
		);
	}
	jshort CursorWindow::getShort(jint arg0, jint arg1) const
	{
		return callMethod<jshort>(
			"getShort",
			"(II)S",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getStartPosition() const
	{
		return callMethod<jint>(
			"getStartPosition",
			"()I"
		);
	}
	JString CursorWindow::getString(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getType(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getType",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isBlob(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isBlob",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isFloat(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isFloat",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isLong(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isLong",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isNull(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isString(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isString",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::putBlob(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"putBlob",
			"([BII)Z",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putDouble(jdouble arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"putDouble",
			"(DII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putLong(jlong arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"putLong",
			"(JII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putNull(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"putNull",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::putString(JString arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"putString",
			"(Ljava/lang/String;II)Z",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::setNumColumns(jint arg0) const
	{
		return callMethod<jboolean>(
			"setNumColumns",
			"(I)Z",
			arg0
		);
	}
	void CursorWindow::setStartPosition(jint arg0) const
	{
		callMethod<void>(
			"setStartPosition",
			"(I)V",
			arg0
		);
	}
	JString CursorWindow::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CursorWindow::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::database

