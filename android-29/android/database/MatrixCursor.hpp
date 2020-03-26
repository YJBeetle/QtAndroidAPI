#pragma once

#ifndef ANDROID_DATABASE_MATRIXCURSOR
#define ANDROID_DATABASE_MATRIXCURSOR

#include "../../__JniBaseClass.hpp"
#include "AbstractCursor.hpp"

namespace __jni_impl::android::database
{
	class MatrixCursor_RowBuilder;
}

namespace __jni_impl::android::database
{
	class MatrixCursor : public __jni_impl::android::database::AbstractCursor
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jarray arg0, jint arg1);
		void __constructor(jarray arg0);
		
		// Methods
		jshort getShort(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jfloat getFloat(jint arg0);
		jdouble getDouble(jint arg0);
		jint getType(jint arg0);
		jboolean isNull(jint arg0);
		jint getCount();
		jstring getString(jint arg0);
		QAndroidJniObject newRow();
		void addRow(jobjectArray arg0);
		void addRow(__jni_impl::__JniBaseClass arg0);
		jarray getColumnNames();
		jbyteArray getBlob(jint arg0);
	};
} // namespace __jni_impl::android::database

#include "MatrixCursor_RowBuilder.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void MatrixCursor::__constructor(jarray arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.MatrixCursor",
			"([Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void MatrixCursor::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.MatrixCursor",
			"([Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	jshort MatrixCursor::getShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jint MatrixCursor::getInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong MatrixCursor::getLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jfloat MatrixCursor::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jdouble MatrixCursor::getDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jint MatrixCursor::getType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean MatrixCursor::isNull(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jint MatrixCursor::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jstring MatrixCursor::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject MatrixCursor::newRow()
	{
		return __thiz.callObjectMethod(
			"newRow",
			"()Landroid/database/MatrixCursor$RowBuilder;"
		);
	}
	void MatrixCursor::addRow(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"addRow",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void MatrixCursor::addRow(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addRow",
			"(Ljava/lang/Iterable;)V",
			arg0.__jniObject().object()
		);
	}
	jarray MatrixCursor::getColumnNames()
	{
		return __thiz.callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jbyteArray MatrixCursor::getBlob(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class MatrixCursor : public __jni_impl::android::database::MatrixCursor
	{
	public:
		MatrixCursor(QAndroidJniObject obj) { __thiz = obj; }
		MatrixCursor(jarray arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MatrixCursor(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_MATRIXCURSOR

