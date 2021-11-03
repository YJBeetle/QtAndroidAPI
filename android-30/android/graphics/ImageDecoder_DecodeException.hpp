#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ImageDecoder_DecodeException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ImageDecoder_DecodeException(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getError() const;
		android::graphics::ImageDecoder_Source getSource() const;
	};
} // namespace android::graphics

