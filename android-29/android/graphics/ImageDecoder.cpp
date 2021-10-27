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
#include "../../java/nio/ByteBuffer.hpp"
#include "./ImageDecoder.hpp"

namespace android::graphics
{
	// Fields
	jint ImageDecoder::ALLOCATOR_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_DEFAULT"
		);
	}
	jint ImageDecoder::ALLOCATOR_HARDWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_HARDWARE"
		);
	}
	jint ImageDecoder::ALLOCATOR_SHARED_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_SHARED_MEMORY"
		);
	}
	jint ImageDecoder::ALLOCATOR_SOFTWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_SOFTWARE"
		);
	}
	jint ImageDecoder::MEMORY_POLICY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"MEMORY_POLICY_DEFAULT"
		);
	}
	jint ImageDecoder::MEMORY_POLICY_LOW_RAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"MEMORY_POLICY_LOW_RAM"
		);
	}
	
	ImageDecoder::ImageDecoder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ImageDecoder::createSource(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/io/File;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(java::nio::ByteBuffer arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/nio/ByteBuffer;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/util/concurrent/Callable;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(android::content::res::AssetManager arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ImageDecoder::createSource(android::content::res::AssetManager arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(android::content::res::Resources arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/res/Resources;I)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ImageDecoder::decodeBitmap(android::graphics::ImageDecoder_Source arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeBitmap",
			"(Landroid/graphics/ImageDecoder$Source;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::decodeBitmap(android::graphics::ImageDecoder_Source arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeBitmap",
			"(Landroid/graphics/ImageDecoder$Source;Landroid/graphics/ImageDecoder$OnHeaderDecodedListener;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::decodeDrawable(android::graphics::ImageDecoder_Source arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeDrawable",
			"(Landroid/graphics/ImageDecoder$Source;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::decodeDrawable(android::graphics::ImageDecoder_Source arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeDrawable",
			"(Landroid/graphics/ImageDecoder$Source;Landroid/graphics/ImageDecoder$OnHeaderDecodedListener;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean ImageDecoder::isMimeTypeSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.ImageDecoder",
			"isMimeTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ImageDecoder::isMimeTypeSupported(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.ImageDecoder",
			"isMimeTypeSupported",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ImageDecoder::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint ImageDecoder::getAllocator()
	{
		return __thiz.callMethod<jint>(
			"getAllocator",
			"()I"
		);
	}
	QAndroidJniObject ImageDecoder::getCrop()
	{
		return __thiz.callObjectMethod(
			"getCrop",
			"()Landroid/graphics/Rect;"
		);
	}
	jint ImageDecoder::getMemorySizePolicy()
	{
		return __thiz.callMethod<jint>(
			"getMemorySizePolicy",
			"()I"
		);
	}
	QAndroidJniObject ImageDecoder::getOnPartialImageListener()
	{
		return __thiz.callObjectMethod(
			"getOnPartialImageListener",
			"()Landroid/graphics/ImageDecoder$OnPartialImageListener;"
		);
	}
	QAndroidJniObject ImageDecoder::getPostProcessor()
	{
		return __thiz.callObjectMethod(
			"getPostProcessor",
			"()Landroid/graphics/PostProcessor;"
		);
	}
	jboolean ImageDecoder::isDecodeAsAlphaMaskEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isDecodeAsAlphaMaskEnabled",
			"()Z"
		);
	}
	jboolean ImageDecoder::isMutableRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isMutableRequired",
			"()Z"
		);
	}
	jboolean ImageDecoder::isUnpremultipliedRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUnpremultipliedRequired",
			"()Z"
		);
	}
	void ImageDecoder::setAllocator(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAllocator",
			"(I)V",
			arg0
		);
	}
	void ImageDecoder::setCrop(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setCrop",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageDecoder::setDecodeAsAlphaMaskEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDecodeAsAlphaMaskEnabled",
			"(Z)V",
			arg0
		);
	}
	void ImageDecoder::setMemorySizePolicy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMemorySizePolicy",
			"(I)V",
			arg0
		);
	}
	void ImageDecoder::setMutableRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMutableRequired",
			"(Z)V",
			arg0
		);
	}
	void ImageDecoder::setOnPartialImageListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPartialImageListener",
			"(Landroid/graphics/ImageDecoder$OnPartialImageListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageDecoder::setPostProcessor(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPostProcessor",
			"(Landroid/graphics/PostProcessor;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageDecoder::setTargetColorSpace(android::graphics::ColorSpace arg0)
	{
		__thiz.callMethod<void>(
			"setTargetColorSpace",
			"(Landroid/graphics/ColorSpace;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageDecoder::setTargetSampleSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTargetSampleSize",
			"(I)V",
			arg0
		);
	}
	void ImageDecoder::setTargetSize(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTargetSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ImageDecoder::setUnpremultipliedRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUnpremultipliedRequired",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics

