#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class Base64_Decoder;
}
namespace java::util
{
	class Base64_Encoder;
}

namespace java::util
{
	class Base64 : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Base64(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Base64(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::Base64_Decoder getDecoder();
		static java::util::Base64_Encoder getEncoder();
		static java::util::Base64_Decoder getMimeDecoder();
		static java::util::Base64_Encoder getMimeEncoder();
		static java::util::Base64_Encoder getMimeEncoder(jint arg0, jbyteArray arg1);
		static java::util::Base64_Decoder getUrlDecoder();
		static java::util::Base64_Encoder getUrlEncoder();
	};
} // namespace java::util

