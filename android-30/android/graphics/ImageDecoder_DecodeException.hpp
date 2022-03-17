#pragma once

#include "./ImageDecoder_Source.def.hpp"
#include "./ImageDecoder_DecodeException.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint ImageDecoder_DecodeException::SOURCE_EXCEPTION()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_EXCEPTION"
		);
	}
	inline jint ImageDecoder_DecodeException::SOURCE_INCOMPLETE()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_INCOMPLETE"
		);
	}
	inline jint ImageDecoder_DecodeException::SOURCE_MALFORMED_DATA()
	{
		return getStaticField<jint>(
			"android.graphics.ImageDecoder$DecodeException",
			"SOURCE_MALFORMED_DATA"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ImageDecoder_DecodeException::getError() const
	{
		return callMethod<jint>(
			"getError",
			"()I"
		);
	}
	inline android::graphics::ImageDecoder_Source ImageDecoder_DecodeException::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Landroid/graphics/ImageDecoder$Source;"
		);
	}
} // namespace android::graphics

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
