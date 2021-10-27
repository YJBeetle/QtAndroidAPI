#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}

namespace javax::crypto
{
	class MacSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		MacSpi(QAndroidJniObject obj);
		// Constructors
		MacSpi();
		
		// Methods
		jobject clone();
	};
} // namespace javax::crypto

