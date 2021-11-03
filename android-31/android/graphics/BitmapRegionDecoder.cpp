#include "./Bitmap.hpp"
#include "./BitmapFactory_Options.hpp"
#include "./Rect.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "./BitmapRegionDecoder.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	BitmapRegionDecoder::BitmapRegionDecoder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(android::os::ParcelFileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Landroid/os/ParcelFileDescriptor;)Landroid/graphics/BitmapRegionDecoder;",
			arg0.object()
		);
	}
	android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(java::io::InputStream arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/io/InputStream;)Landroid/graphics/BitmapRegionDecoder;",
			arg0.object()
		);
	}
	android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/lang/String;)Landroid/graphics/BitmapRegionDecoder;",
			arg0
		);
	}
	android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(java::io::FileDescriptor arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/io/FileDescriptor;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(java::io::InputStream arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/io/InputStream;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(jstring arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/lang/String;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0,
			arg1
		);
	}
	android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"([BII)Landroid/graphics/BitmapRegionDecoder;",
			arg0,
			arg1,
			arg2
		);
	}
	android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(jbyteArray arg0, jint arg1, jint arg2, jboolean arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"([BIIZ)Landroid/graphics/BitmapRegionDecoder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::graphics::Bitmap BitmapRegionDecoder::decodeRegion(android::graphics::Rect arg0, android::graphics::BitmapFactory_Options arg1)
	{
		return callObjectMethod(
			"decodeRegion",
			"(Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object()
		);
	}
	jint BitmapRegionDecoder::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint BitmapRegionDecoder::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean BitmapRegionDecoder::isRecycled()
	{
		return callMethod<jboolean>(
			"isRecycled",
			"()Z"
		);
	}
	void BitmapRegionDecoder::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::graphics

