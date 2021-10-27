#pragma once

#include "../../__JniBaseClass.hpp"


namespace javax::crypto
{
	class SecretKeyFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		SecretKeyFactorySpi(QAndroidJniObject obj);
		// Constructors
		SecretKeyFactorySpi();
		
		// Methods
	};
} // namespace javax::crypto

