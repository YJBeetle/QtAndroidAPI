#pragma once

#include "../../__JniBaseClass.hpp"
#include "AbstractCursor.hpp"

namespace __jni_impl::android::database
{
	class CharArrayBuffer;
}
namespace __jni_impl::android::database
{
	class CursorWindow;
}

namespace __jni_impl::android::database
{
	class AbstractWindowedCursor : public __jni_impl::android::database::AbstractCursor
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void copyStringToBuffer(jint arg0, __jni_impl::android::database::CharArrayBuffer arg1);
		jbyteArray getBlob(jint arg0);
		jdouble getDouble(jint arg0);
		jfloat getFloat(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jshort getShort(jint arg0);
		jstring getString(jint arg0);
		jint getType(jint arg0);
		QAndroidJniObject getWindow();
		jboolean hasWindow();
		jboolean isBlob(jint arg0);
		jboolean isFloat(jint arg0);
		jboolean isLong(jint arg0);
		jboolean isNull(jint arg0);
		jboolean isString(jint arg0);
		void setWindow(__jni_impl::android::database::CursorWindow arg0);
	};
} // namespace __jni_impl::android::database

#include "CharArrayBuffer.hpp"
#include "CursorWindow.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void AbstractWindowedCursor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.database.AbstractWindowedCursor",
			"()V"
		);
	}
	
	// Methods
	void AbstractWindowedCursor::copyStringToBuffer(jint arg0, __jni_impl::android::database::CharArrayBuffer arg1)
	{
		__thiz.callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jbyteArray AbstractWindowedCursor::getBlob(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jdouble AbstractWindowedCursor::getDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat AbstractWindowedCursor::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint AbstractWindowedCursor::getInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong AbstractWindowedCursor::getLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort AbstractWindowedCursor::getShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jstring AbstractWindowedCursor::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint AbstractWindowedCursor::getType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject AbstractWindowedCursor::getWindow()
	{
		return __thiz.callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	jboolean AbstractWindowedCursor::hasWindow()
	{
		return __thiz.callMethod<jboolean>(
			"hasWindow",
			"()Z"
		);
	}
	jboolean AbstractWindowedCursor::isBlob(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBlob",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractWindowedCursor::isFloat(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isFloat",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractWindowedCursor::isLong(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLong",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractWindowedCursor::isNull(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractWindowedCursor::isString(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isString",
			"(I)Z",
			arg0
		);
	}
	void AbstractWindowedCursor::setWindow(__jni_impl::android::database::CursorWindow arg0)
	{
		__thiz.callMethod<void>(
			"setWindow",
			"(Landroid/database/CursorWindow;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class AbstractWindowedCursor : public __jni_impl::android::database::AbstractWindowedCursor
	{
	public:
		AbstractWindowedCursor(QAndroidJniObject obj) { __thiz = obj; }
		AbstractWindowedCursor()
		{
			__constructor();
		}
	};
} // namespace android::database

