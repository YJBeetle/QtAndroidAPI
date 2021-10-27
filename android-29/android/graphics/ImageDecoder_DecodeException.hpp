#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"

namespace android::graphics
{
	class ImageDecoder_Source;
}

namespace android::graphics
{
	class ImageDecoder_DecodeException : public java::io::IOException
	{
	public:
		// Fields
		static jint SOURCE_EXCEPTION();
		static jint SOURCE_INCOMPLETE();
		static jint SOURCE_MALFORMED_DATA();
		
		ImageDecoder_DecodeException(QAndroidJniObject obj);
		// Constructors
		ImageDecoder_DecodeException() = default;
		
		// Methods
		jint getError();
		QAndroidJniObject getSource();
	};
} // namespace android::graphics

