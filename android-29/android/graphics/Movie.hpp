#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::android::graphics
{
	class Movie : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject decodeByteArray(jbyteArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject decodeFile(jstring arg0);
		static QAndroidJniObject decodeFile(const QString &arg0);
		static QAndroidJniObject decodeStream(__jni_impl::java::io::InputStream arg0);
		void draw(__jni_impl::android::graphics::Canvas arg0, jfloat arg1, jfloat arg2);
		void draw(__jni_impl::android::graphics::Canvas arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3);
		jint duration();
		jint height();
		jboolean isOpaque();
		jboolean setTime(jint arg0);
		jint width();
	};
} // namespace __jni_impl::android::graphics

#include "Canvas.hpp"
#include "Paint.hpp"
#include "../../java/io/InputStream.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Movie::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Movie",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Movie::decodeByteArray(jbyteArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeByteArray",
			"([BII)Landroid/graphics/Movie;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Movie::decodeFile(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeFile",
			"(Ljava/lang/String;)Landroid/graphics/Movie;",
			arg0
		);
	}
	QAndroidJniObject Movie::decodeFile(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeFile",
			"(Ljava/lang/String;)Landroid/graphics/Movie;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Movie::decodeStream(__jni_impl::java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Movie;",
			arg0.__jniObject().object()
		);
	}
	void Movie::draw(__jni_impl::android::graphics::Canvas arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Movie::draw(__jni_impl::android::graphics::Canvas arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Paint arg3)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;FFLandroid/graphics/Paint;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	jint Movie::duration()
	{
		return __thiz.callMethod<jint>(
			"duration",
			"()I"
		);
	}
	jint Movie::height()
	{
		return __thiz.callMethod<jint>(
			"height",
			"()I"
		);
	}
	jboolean Movie::isOpaque()
	{
		return __thiz.callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean Movie::setTime(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setTime",
			"(I)Z",
			arg0
		);
	}
	jint Movie::width()
	{
		return __thiz.callMethod<jint>(
			"width",
			"()I"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Movie : public __jni_impl::android::graphics::Movie
	{
	public:
		Movie(QAndroidJniObject obj) { __thiz = obj; }
		Movie()
		{
			__constructor();
		}
	};
} // namespace android::graphics

