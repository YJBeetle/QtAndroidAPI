#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyFactorySpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyFactorySpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyFactorySpi(QJniObject obj);
		
		// Constructors
		KeyFactorySpi();
		
		// Methods
	};
} // namespace java::security

