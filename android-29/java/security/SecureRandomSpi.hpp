#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class SecureRandomSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureRandomSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SecureRandomSpi(QJniObject obj);
		
		// Constructors
		SecureRandomSpi();
		
		// Methods
		jstring toString();
	};
} // namespace java::security

