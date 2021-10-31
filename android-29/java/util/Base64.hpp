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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Base64(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Base64(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getDecoder();
		static QAndroidJniObject getEncoder();
		static QAndroidJniObject getMimeDecoder();
		static QAndroidJniObject getMimeEncoder();
		static QAndroidJniObject getMimeEncoder(jint arg0, jbyteArray arg1);
		static QAndroidJniObject getUrlDecoder();
		static QAndroidJniObject getUrlEncoder();
	};
} // namespace java::util

