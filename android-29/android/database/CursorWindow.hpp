#pragma once

#ifndef ANDROID_DATABASE_CURSORWINDOW
#define ANDROID_DATABASE_CURSORWINDOW

#include "../../__JniBaseClass.hpp"
#include "sqlite/SQLiteClosable.hpp"

namespace __jni_impl::android::database
{
	class CharArrayBuffer;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::database
{
	class CursorWindow : public __jni_impl::android::database::sqlite::SQLiteClosable
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jboolean arg0);
		void __constructor(jstring arg0, jlong arg1);
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject toString();
		jshort getShort(jint arg0, jint arg1);
		jint getInt(jint arg0, jint arg1);
		jlong getLong(jint arg0, jint arg1);
		jboolean putLong(jlong arg0, jint arg1, jint arg2);
		jfloat getFloat(jint arg0, jint arg1);
		jdouble getDouble(jint arg0, jint arg1);
		jboolean putDouble(jdouble arg0, jint arg1, jint arg2);
		void clear();
		jint getType(jint arg0, jint arg1);
		jboolean isNull(jint arg0, jint arg1);
		QAndroidJniObject getString(jint arg0, jint arg1);
		jboolean isFloat(jint arg0, jint arg1);
		jboolean putNull(jint arg0, jint arg1);
		QAndroidJniObject getBlob(jint arg0, jint arg1);
		void copyStringToBuffer(jint arg0, jint arg1, __jni_impl::android::database::CharArrayBuffer arg2);
		jint getStartPosition();
		void setStartPosition(jint arg0);
		jint getNumRows();
		jboolean setNumColumns(jint arg0);
		jboolean allocRow();
		void freeLastRow();
		jboolean isBlob(jint arg0, jint arg1);
		jboolean isLong(jint arg0, jint arg1);
		jboolean isString(jint arg0, jint arg1);
		jboolean putBlob(jbyteArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject newFromParcel(__jni_impl::android::os::Parcel arg0);
		jboolean putString(jstring arg0, jint arg1, jint arg2);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::database

#include "CharArrayBuffer.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::database
{
	// Fields
	QAndroidJniObject CursorWindow::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.database.CursorWindow",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CursorWindow::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorWindow",
			"(Z)V",
			arg0);
	}
	void CursorWindow::__constructor(jstring arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorWindow",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1);
	}
	void CursorWindow::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorWindow",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject CursorWindow::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jshort CursorWindow::getShort(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(II)S",
			arg0,
			arg1);
	}
	jint CursorWindow::getInt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(II)I",
			arg0,
			arg1);
	}
	jlong CursorWindow::getLong(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(II)J",
			arg0,
			arg1);
	}
	jboolean CursorWindow::putLong(jlong arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"putLong",
			"(JII)Z",
			arg0,
			arg1,
			arg2);
	}
	jfloat CursorWindow::getFloat(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(II)F",
			arg0,
			arg1);
	}
	jdouble CursorWindow::getDouble(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(II)D",
			arg0,
			arg1);
	}
	jboolean CursorWindow::putDouble(jdouble arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"putDouble",
			"(DII)Z",
			arg0,
			arg1,
			arg2);
	}
	void CursorWindow::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V");
	}
	jint CursorWindow::getType(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(II)I",
			arg0,
			arg1);
	}
	jboolean CursorWindow::isNull(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(II)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject CursorWindow::getString(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1);
	}
	jboolean CursorWindow::isFloat(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isFloat",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean CursorWindow::putNull(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"putNull",
			"(II)Z",
			arg0,
			arg1);
	}
	QAndroidJniObject CursorWindow::getBlob(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getBlob",
			"(II)[B",
			arg0,
			arg1);
	}
	void CursorWindow::copyStringToBuffer(jint arg0, jint arg1, __jni_impl::android::database::CharArrayBuffer arg2)
	{
		__thiz.callMethod<void>(
			"copyStringToBuffer",
			"(IILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	jint CursorWindow::getStartPosition()
	{
		return __thiz.callMethod<jint>(
			"getStartPosition",
			"()I");
	}
	void CursorWindow::setStartPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStartPosition",
			"(I)V",
			arg0);
	}
	jint CursorWindow::getNumRows()
	{
		return __thiz.callMethod<jint>(
			"getNumRows",
			"()I");
	}
	jboolean CursorWindow::setNumColumns(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setNumColumns",
			"(I)Z",
			arg0);
	}
	jboolean CursorWindow::allocRow()
	{
		return __thiz.callMethod<jboolean>(
			"allocRow",
			"()Z");
	}
	void CursorWindow::freeLastRow()
	{
		__thiz.callMethod<void>(
			"freeLastRow",
			"()V");
	}
	jboolean CursorWindow::isBlob(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isBlob",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean CursorWindow::isLong(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isLong",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean CursorWindow::isString(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isString",
			"(II)Z",
			arg0,
			arg1);
	}
	jboolean CursorWindow::putBlob(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"putBlob",
			"([BII)Z",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject CursorWindow::newFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.database.CursorWindow",
			"newFromParcel",
			"(Landroid/os/Parcel;)Landroid/database/CursorWindow;",
			arg0.__jniObject().object());
	}
	jboolean CursorWindow::putString(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"putString",
			"(Ljava/lang/String;II)Z",
			arg0,
			arg1,
			arg2);
	}
	jint CursorWindow::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CursorWindow::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class CursorWindow : public __jni_impl::android::database::CursorWindow
	{
	public:
		CursorWindow(QAndroidJniObject obj) { __thiz = obj; }
		CursorWindow(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		CursorWindow(jstring arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CursorWindow(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_CURSORWINDOW

