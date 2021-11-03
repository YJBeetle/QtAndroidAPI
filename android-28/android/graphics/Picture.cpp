#include "./Canvas.hpp"
#include "../../java/io/InputStream.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./Picture.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	Picture::Picture(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Picture::Picture()
		: JObject(
			"android.graphics.Picture",
			"()V"
		) {}
	Picture::Picture(android::graphics::Picture &arg0)
		: JObject(
			"android.graphics.Picture",
			"(Landroid/graphics/Picture;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::Picture Picture::createFromStream(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.Picture",
			"createFromStream",
			"(Ljava/io/InputStream;)Landroid/graphics/Picture;",
			arg0.object()
		);
	}
	android::graphics::Canvas Picture::beginRecording(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"beginRecording",
			"(II)Landroid/graphics/Canvas;",
			arg0,
			arg1
		);
	}
	void Picture::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void Picture::endRecording() const
	{
		callMethod<void>(
			"endRecording",
			"()V"
		);
	}
	jint Picture::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Picture::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Picture::requiresHardwareAcceleration() const
	{
		return callMethod<jboolean>(
			"requiresHardwareAcceleration",
			"()Z"
		);
	}
	void Picture::writeToStream(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"writeToStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

