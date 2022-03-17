#pragma once

#include "../../JByteArray.hpp"
#include "./Canvas.def.hpp"
#include "./Paint.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "./Movie.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Movie Movie::decodeByteArray(JByteArray arg0, jint arg1, jint arg2)
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
	inline android::graphics::Movie Movie::decodeFile(JString arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeFile",
			"(Ljava/lang/String;)Landroid/graphics/Movie;",
			arg0.object<jstring>()
		);
	}
	inline android::graphics::Movie Movie::decodeStream(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Movie",
			"decodeStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Movie;",
			arg0.object()
		);
	}
	inline void Movie::draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void Movie::draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const
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
	inline jint Movie::duration() const
	{
		return callMethod<jint>(
			"duration",
			"()I"
		);
	}
	inline jint Movie::height() const
	{
		return callMethod<jint>(
			"height",
			"()I"
		);
	}
	inline jboolean Movie::isOpaque() const
	{
		return callMethod<jboolean>(
			"isOpaque",
			"()Z"
		);
	}
	inline jboolean Movie::setTime(jint arg0) const
	{
		return callMethod<jboolean>(
			"setTime",
			"(I)Z",
			arg0
		);
	}
	inline jint Movie::width() const
	{
		return callMethod<jint>(
			"width",
			"()I"
		);
	}
} // namespace android::graphics

// Base class headers

