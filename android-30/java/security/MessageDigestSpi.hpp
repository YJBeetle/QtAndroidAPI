#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace java::security
{
	class MessageDigestSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageDigestSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MessageDigestSpi(QAndroidJniObject obj);
		
		// Constructors
		MessageDigestSpi();
		
		// Methods
		jobject clone();
	};
} // namespace java::security

