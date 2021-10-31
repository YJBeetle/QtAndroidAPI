#include "./CharArrayBuffer.hpp"
#include "../os/Parcel.hpp"
#include "./CursorWindow.hpp"

namespace android::database
{
	// Fields
	QAndroidJniObject CursorWindow::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.database.CursorWindow",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	CursorWindow::CursorWindow(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CursorWindow::CursorWindow(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorWindow",
			"(Z)V",
			arg0
		);
	}
	CursorWindow::CursorWindow(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorWindow",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CursorWindow::CursorWindow(jstring arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorWindow",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject CursorWindow::newFromParcel(android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.CursorWindow",
			"newFromParcel",
			"(Landroid/os/Parcel;)Landroid/database/CursorWindow;",
			arg0.__jniObject().object()
		);
	}
	jboolean CursorWindow::allocRow()
	{
		return __thiz.callMethod<jboolean>(
			"allocRow",
			"()Z"
		);
	}
	void CursorWindow::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void CursorWindow::copyStringToBuffer(jint arg0, jint arg1, android::database::CharArrayBuffer arg2)
	{
		__thiz.callMethod<void>(
			"copyStringToBuffer",
			"(IILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint CursorWindow::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CursorWindow::freeLastRow()
	{
		__thiz.callMethod<void>(
			"freeLastRow",
			"()V"
		);
	}
	jbyteArray CursorWindow::getBlob(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getBlob",
			"(II)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jdouble CursorWindow::getDouble(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(II)D",
			arg0,
			arg1
		);
	}
	jfloat CursorWindow::getFloat(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(II)F",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getInt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jlong CursorWindow::getLong(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(II)J",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getNumRows()
	{
		return __thiz.callMethod<jint>(
			"getNumRows",
			"()I"
		);
	}
	jshort CursorWindow::getShort(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(II)S",
			arg0,
			arg1
		);
	}
	jint CursorWindow::getStartPosition()
	{
		return __thiz.callMethod<jint>(
			"getStartPosition",
			"()I"
		);
	}
	jstring CursorWindow::getString(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint CursorWindow::getType(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(II)I",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isBlob(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isBlob",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isFloat(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isFloat",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isLong(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isLong",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isNull(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::isString(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isString",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::putBlob(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"putBlob",
			"([BII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putDouble(jdouble arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"putDouble",
			"(DII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putLong(jlong arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"putLong",
			"(JII)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::putNull(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"putNull",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean CursorWindow::putString(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"putString",
			"(Ljava/lang/String;II)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CursorWindow::setNumColumns(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setNumColumns",
			"(I)Z",
			arg0
		);
	}
	void CursorWindow::setStartPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStartPosition",
			"(I)V",
			arg0
		);
	}
	jstring CursorWindow::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CursorWindow::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::database

