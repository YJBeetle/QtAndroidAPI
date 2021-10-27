#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"

namespace __jni_impl::android::graphics
{
	class ImageDecoder_Source;
}

namespace __jni_impl::android::graphics
{
	class ImageDecoder_DecodeException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		static jint SOURCE_EXCEPTION();
		static jint SOURCE_INCOMPLETE();
		static jint SOURCE_MALFORMED_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getError();
		QAndroidJniObject getSource();
	};
} // namespace __jni_impl::android::graphics

#include "./ImageDecoder_Source.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jint ImageDecoder_DecodeException::SOURCE_EXCEPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_EXCEPTION"
		);
	}
	jint ImageDecoder_DecodeException::SOURCE_INCOMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_INCOMPLETE"
		);
	}
	jint ImageDecoder_DecodeException::SOURCE_MALFORMED_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_MALFORMED_DATA"
		);
	}
	
	// Constructors
	void ImageDecoder_DecodeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ImageDecoder$DecodeException",
			"(V)V");
	}
	
	// Methods
	jint ImageDecoder_DecodeException::getError()
	{
		return __thiz.callMethod<jint>(
			"getError",
			"()I"
		);
	}
	QAndroidJniObject ImageDecoder_DecodeException::getSource()
	{
		return __thiz.callObjectMethod(
			"getSource",
			"()Landroid/graphics/ImageDecoder$Source;"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ImageDecoder_DecodeException : public __jni_impl::android::graphics::ImageDecoder_DecodeException
	{
	public:
		ImageDecoder_DecodeException(QAndroidJniObject obj) { __thiz = obj; }
		ImageDecoder_DecodeException()
		{
			__constructor();
		}
	};
} // namespace android::graphics

