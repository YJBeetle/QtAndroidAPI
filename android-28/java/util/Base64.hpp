#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
	class Base64 : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Base64(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Base64(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::Base64_Decoder getDecoder();
		static java::util::Base64_Encoder getEncoder();
		static java::util::Base64_Decoder getMimeDecoder();
		static java::util::Base64_Encoder getMimeEncoder();
		static java::util::Base64_Encoder getMimeEncoder(jint arg0, JByteArray arg1);
		static java::util::Base64_Decoder getUrlDecoder();
		static java::util::Base64_Encoder getUrlEncoder();
	};
} // namespace java::util

