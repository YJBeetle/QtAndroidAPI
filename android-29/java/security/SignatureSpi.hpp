#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class SecureRandom;
}

namespace java::security
{
	class SignatureSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		SignatureSpi(QAndroidJniObject obj);
		// Constructors
		SignatureSpi();
		
		// Methods
		jobject clone();
	};
} // namespace java::security

