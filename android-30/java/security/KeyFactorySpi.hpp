#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyFactorySpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyFactorySpi(QAndroidJniObject obj);
		
		// Constructors
		KeyFactorySpi();
		
		// Methods
	};
} // namespace java::security

