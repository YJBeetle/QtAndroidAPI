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
		
		MessageDigestSpi(QAndroidJniObject obj);
		// Constructors
		MessageDigestSpi();
		
		// Methods
		jobject clone();
	};
} // namespace java::security

