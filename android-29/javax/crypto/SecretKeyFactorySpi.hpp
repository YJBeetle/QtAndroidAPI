#pragma once

#include "../../__JniBaseClass.hpp"


namespace javax::crypto
{
	class SecretKeyFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecretKeyFactorySpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SecretKeyFactorySpi(QAndroidJniObject obj);
		
		// Constructors
		SecretKeyFactorySpi();
		
		// Methods
	};
} // namespace javax::crypto

