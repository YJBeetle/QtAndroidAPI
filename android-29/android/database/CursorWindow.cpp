#include "./CharArrayBuffer.hpp"
#include "../os/Parcel.hpp"
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
	
	// QJniObject forward
	CursorWindow::CursorWindow(QJniObject obj) : android::database::sqlite::SQLiteClosable(obj) {}
	
	// Constructors
	CursorWindow::CursorWindow(jboolean arg0)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Z)V",
			arg0
		) {}
	CursorWindow::CursorWindow(jstring arg0)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	CursorWindow::CursorWindow(jstring arg0, jlong arg1)
		: android::database::sqlite::SQLiteClosable(
			"android.database.CursorWindow",
			"(Ljava/lang/String;J)V",
			arg0,
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
	jboolean CursorWindow::allocRow()
	{
		return callMethod<jboolean>(
			"allocRow",
			"()Z"
		);
	}
	void CursorWindow::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void CursorWindow::copyStringToBuffer(jint arg0, jint arg1, android::database::CharArrayBuffer arg2)
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(IILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jint CursorWindow::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CursorWindow::freeLastRow()
	{
		callMethod<void>(
			"freeLastRow",
			"()V"
		);
	}
	jbyteArray CursorWindow::getBlob(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getBlob",
			"(II)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jdouble CursorWindow::getDouble(jint arg0, jint arg1)
	{
		return callMethod<jdouble>(
			"getDouble",
			"(II)D",
			arg0,
			arg1
		);
	}
	jfloat CursorWindow::getFloat(jint arg0, jint arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(II)F",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getInt(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong CursorWindow::getLong(jint arg0, jint arg1)
	{
		return callMethod<jlong>(
			"getLong",
			"(II)J",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getNumRows()
	{
		return callMethod<jint>(
			"getNumRows",
			"()I"
		);
	}
	jshort CursorWindow::getShort(jint arg0, jint arg1)
	{
		return callMethod<jshort>(
			"getShort",
			"(II)S",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getStartPosition()
	{
		return callMethod<jint>(
			"getStartPosition",
			"()I"
		);
	}
	jstring CursorWindow::getString(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint CursorWindow::getType(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getType",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isBlob(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"isBlob",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isFloat(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"isFloat",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isLong(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"isLong",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isNull(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"isNull",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isString(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"isString",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::putBlob(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"putBlob",
			"([BII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putDouble(jdouble arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"putDouble",
			"(DII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putLong(jlong arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"putLong",
			"(JII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putNull(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"putNull",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::putString(jstring arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"putString",
			"(Ljava/lang/String;II)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::setNumColumns(jint arg0)
	{
		return callMethod<jboolean>(
			"setNumColumns",
			"(I)Z",
			arg0
		);
	}
	void CursorWindow::setStartPosition(jint arg0)
	{
		callMethod<void>(
			"setStartPosition",
			"(I)V",
			arg0
		);
	}
	jstring CursorWindow::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CursorWindow::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::database

