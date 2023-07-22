#pragma once

#include "../../java/io/IOException.def.hpp"

namespace android::media
{
	class MediaParser_ParsingException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaParser_ParsingException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser_ParsingException(QAndroidJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

