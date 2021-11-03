#include "../../JByteArray.hpp"
#include "./Canvas.hpp"
#include "./Paint.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../JString.hpp"
#include "./Movie.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Movie::Movie(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::Movie Movie::decodeByteArray(JByteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeByteArray",
			"([BII)Landroid/graphics/Movie;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	android::graphics::Movie Movie::decodeFile(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeFile",
			"(Ljava/lang/String;)Landroid/graphics/Movie;",
			arg0.object<jstring>()
		);
	}
	android::graphics::Movie Movie::decodeStream(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Movie;",
			arg0.object()
		);
	}
	void Movie::draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Movie::draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;FFLandroid/graphics/Paint;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	jint Movie::duration()
	{
		return callMethod<jint>(
			"duration",
			"()I"
		);
	}
	jint Movie::height()
	{
		return callMethod<jint>(
			"height",
			"()I"
		);
	}
	jboolean Movie::isOpaque()
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	jboolean Movie::setTime(jint arg0)
	{
		return callMethod<jboolean>(
			"setTime",
			"(I)Z",
			arg0
		);
	}
	jint Movie::width()
	{
		return callMethod<jint>(
			"width",
			"()I"
		);
	}
} // namespace android::graphics

