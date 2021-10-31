#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::net
{
	class Authenticator_RequestorType : public java::lang::Enum
	{
	public:
		// Fields
		static java::net::Authenticator_RequestorType PROXY();
		static java::net::Authenticator_RequestorType SERVER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Authenticator_RequestorType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Authenticator_RequestorType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::net::Authenticator_RequestorType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::net
