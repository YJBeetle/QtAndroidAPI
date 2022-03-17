#pragma once

#include "./Canvas.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "./Picture.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Picture::Picture()
		: JObject(
			"android.graphics.Picture",
			"()V"
		) {}
	inline Picture::Picture(android::graphics::Picture &arg0)
		: JObject(
			"android.graphics.Picture",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::graphics::Picture Picture::createFromStream(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Picture",
			"createFromStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Picture;",
			arg0.object()
		);
	}
	inline android::graphics::Canvas Picture::beginRecording(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"beginRecording",
			"(II)Landroid/graphics/Canvas;",
			arg0,
			arg1
		);
	}
	inline void Picture::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void Picture::endRecording() const
	{
		callMethod<void>(
			"endRecording",
			"()V"
		);
	}
	inline jint Picture::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint Picture::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean Picture::requiresHardwareAcceleration() const
	{
		return callMethod<jboolean>(
			"requiresHardwareAcceleration",
			"()Z"
		);
	}
	inline void Picture::writeToStream(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"writeToStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
