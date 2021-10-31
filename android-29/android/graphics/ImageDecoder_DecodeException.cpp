#include "./ImageDecoder_Source.hpp"
#include "./ImageDecoder_DecodeException.hpp"

namespace android::graphics
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
	
	// QAndroidJniObject forward
	ImageDecoder_DecodeException::ImageDecoder_DecodeException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	
	// Methods
	jint ImageDecoder_DecodeException::getError()
	{
		return callMethod<jint>(
			"getError",
			"()I"
		);
	}
	QAndroidJniObject ImageDecoder_DecodeException::getSource()
	{
		return callObjectMethod(
			"getSource",
			"()Landroid/graphics/ImageDecoder$Source;"
		);
	}
} // namespace android::graphics

