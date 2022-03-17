#pragma once

#include "../../JByteArray.hpp"
#include "./Bitmap.def.hpp"
#include "./BitmapFactory_Options.def.hpp"
#include "./Rect.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "./BitmapRegionDecoder.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(java::io::FileDescriptor arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/io/FileDescriptor;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0.object(),
			arg1
		);
	}
	inline android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(java::io::InputStream arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/io/InputStream;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0.object(),
			arg1
		);
	}
	inline android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(JString arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/lang/String;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::graphics::BitmapRegionDecoder BitmapRegionDecoder::newInstance(JByteArray arg0, jint arg1, jint arg2, jboolean arg3)
	{
		return callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"([BIIZ)Landroid/graphics/BitmapRegionDecoder;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline android::graphics::Bitmap BitmapRegionDecoder::decodeRegion(android::graphics::Rect arg0, android::graphics::BitmapFactory_Options arg1) const
	{
		return callObjectMethod(
			"decodeRegion",
			"(Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint BitmapRegionDecoder::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint BitmapRegionDecoder::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jboolean BitmapRegionDecoder::isRecycled() const
	{
		return callMethod<jboolean>(
			"isRecycled",
			"()Z"
		);
	}
	inline void BitmapRegionDecoder::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::graphics

// Base class headers

