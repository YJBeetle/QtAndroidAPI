#include "./Canvas.hpp"
#include "./Paint.hpp"
#include "../../java/io/InputStream.hpp"
#include "./Movie.hpp"

namespace android::graphics
{
	// Fields
	
	Movie::Movie(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	QAndroidJniObject Movie::decodeStream(java::io::InputStream arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Movie;",
			arg0.__jniObject().object()
		);
	}
	void Movie::draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Movie::draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
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
} // namespace android::graphics

