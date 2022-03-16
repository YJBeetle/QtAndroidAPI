#include "../../JByteArray.hpp"
#include "../content/ContentResolver.hpp"
#include "../content/res/AssetManager.hpp"
#include "../content/res/Resources.hpp"
#include "./Bitmap.hpp"
#include "./ColorSpace.hpp"
#include "./ImageDecoder_Source.hpp"
#include "./Rect.hpp"
#include "./drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../../java/io/File.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./ImageDecoder.hpp"

namespace android::graphics
{
	// Fields
	jint ImageDecoder::ALLOCATOR_DEFAULT()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_DEFAULT"
		);
	}
	jint ImageDecoder::ALLOCATOR_HARDWARE()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_HARDWARE"
		);
	}
	jint ImageDecoder::ALLOCATOR_SHARED_MEMORY()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_SHARED_MEMORY"
		);
	}
	jint ImageDecoder::ALLOCATOR_SOFTWARE()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_SOFTWARE"
		);
	}
	jint ImageDecoder::MEMORY_POLICY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"MEMORY_POLICY_DEFAULT"
		);
	}
	jint ImageDecoder::MEMORY_POLICY_LOW_RAM()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"MEMORY_POLICY_LOW_RAM"
		);
	}
	
	// Constructors
	
	// Methods
	android::graphics::ImageDecoder_Source ImageDecoder::createSource(JByteArray arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"([B)Landroid/graphics/ImageDecoder$Source;",
			arg0.object<jbyteArray>()
		);
	}
	android::graphics::ImageDecoder_Source ImageDecoder::createSource(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/io/File;)Landroid/graphics/ImageDecoder$Source;",
			arg0.object()
		);
	}
	android::graphics::ImageDecoder_Source ImageDecoder::createSource(java::nio::ByteBuffer arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/nio/ByteBuffer;)Landroid/graphics/ImageDecoder$Source;",
			arg0.object()
		);
	}
	android::graphics::ImageDecoder_Source ImageDecoder::createSource(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/util/concurrent/Callable;)Landroid/graphics/ImageDecoder$Source;",
			arg0.object()
		);
	}
	android::graphics::ImageDecoder_Source ImageDecoder::createSource(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/graphics/ImageDecoder$Source;",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::ImageDecoder_Source ImageDecoder::createSource(android::content::res::AssetManager arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/ImageDecoder$Source;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	android::graphics::ImageDecoder_Source ImageDecoder::createSource(android::content::res::Resources arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/res/Resources;I)Landroid/graphics/ImageDecoder$Source;",
			arg0.object(),
			arg1
		);
	}
	android::graphics::ImageDecoder_Source ImageDecoder::createSource(JByteArray arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"([BII)Landroid/graphics/ImageDecoder$Source;",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	android::graphics::Bitmap ImageDecoder::decodeBitmap(android::graphics::ImageDecoder_Source arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeBitmap",
			"(Landroid/graphics/ImageDecoder$Source;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	android::graphics::Bitmap ImageDecoder::decodeBitmap(android::graphics::ImageDecoder_Source arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeBitmap",
			"(Landroid/graphics/ImageDecoder$Source;Landroid/graphics/ImageDecoder$OnHeaderDecodedListener;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object()
		);
	}
	android::graphics::drawable::Drawable ImageDecoder::decodeDrawable(android::graphics::ImageDecoder_Source arg0)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeDrawable",
			"(Landroid/graphics/ImageDecoder$Source;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable ImageDecoder::decodeDrawable(android::graphics::ImageDecoder_Source arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeDrawable",
			"(Landroid/graphics/ImageDecoder$Source;Landroid/graphics/ImageDecoder$OnHeaderDecodedListener;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ImageDecoder::isMimeTypeSupported(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.ImageDecoder",
			"isMimeTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void ImageDecoder::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint ImageDecoder::getAllocator() const
	{
		return callMethod<jint>(
			"getAllocator",
			"()I"
		);
	}
	android::graphics::Rect ImageDecoder::getCrop() const
	{
		return callObjectMethod(
			"getCrop",
			"()Landroid/graphics/Rect;"
		);
	}
	jint ImageDecoder::getMemorySizePolicy() const
	{
		return callMethod<jint>(
			"getMemorySizePolicy",
			"()I"
		);
	}
	JObject ImageDecoder::getOnPartialImageListener() const
	{
		return callObjectMethod(
			"getOnPartialImageListener",
			"()Landroid/graphics/ImageDecoder$OnPartialImageListener;"
		);
	}
	JObject ImageDecoder::getPostProcessor() const
	{
		return callObjectMethod(
			"getPostProcessor",
			"()Landroid/graphics/PostProcessor;"
		);
	}
	jboolean ImageDecoder::isDecodeAsAlphaMaskEnabled() const
	{
		return callMethod<jboolean>(
			"isDecodeAsAlphaMaskEnabled",
			"()Z"
		);
	}
	jboolean ImageDecoder::isMutableRequired() const
	{
		return callMethod<jboolean>(
			"isMutableRequired",
			"()Z"
		);
	}
	jboolean ImageDecoder::isUnpremultipliedRequired() const
	{
		return callMethod<jboolean>(
			"isUnpremultipliedRequired",
			"()Z"
		);
	}
	void ImageDecoder::setAllocator(jint arg0) const
	{
		callMethod<void>(
			"setAllocator",
			"(I)V",
			arg0
		);
	}
	void ImageDecoder::setCrop(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setCrop",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void ImageDecoder::setDecodeAsAlphaMaskEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setDecodeAsAlphaMaskEnabled",
			"(Z)V",
			arg0
		);
	}
	void ImageDecoder::setMemorySizePolicy(jint arg0) const
	{
		callMethod<void>(
			"setMemorySizePolicy",
			"(I)V",
			arg0
		);
	}
	void ImageDecoder::setMutableRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setMutableRequired",
			"(Z)V",
			arg0
		);
	}
	void ImageDecoder::setOnPartialImageListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnPartialImageListener",
			"(Landroid/graphics/ImageDecoder$OnPartialImageListener;)V",
			arg0.object()
		);
	}
	void ImageDecoder::setPostProcessor(JObject arg0) const
	{
		callMethod<void>(
			"setPostProcessor",
			"(Landroid/graphics/PostProcessor;)V",
			arg0.object()
		);
	}
	void ImageDecoder::setTargetColorSpace(android::graphics::ColorSpace arg0) const
	{
		callMethod<void>(
			"setTargetColorSpace",
			"(Landroid/graphics/ColorSpace;)V",
			arg0.object()
		);
	}
	void ImageDecoder::setTargetSampleSize(jint arg0) const
	{
		callMethod<void>(
			"setTargetSampleSize",
			"(I)V",
			arg0
		);
	}
	void ImageDecoder::setTargetSize(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setTargetSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ImageDecoder::setUnpremultipliedRequired(jboolean arg0) const
	{
		callMethod<void>(
			"setUnpremultipliedRequired",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics

