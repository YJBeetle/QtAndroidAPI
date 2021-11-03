#pragma once

#include "../../JObject.hpp"
#include "../lang/Enum.hpp"


namespace java::net
{
	class StandardProtocolFamily : public java::lang::Enum
	{
	public:
		// Fields
		static java::net::StandardProtocolFamily INET();
		static java::net::StandardProtocolFamily INET6();
		static java::net::StandardProtocolFamily UNIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardProtocolFamily(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		StandardProtocolFamily(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::net::StandardProtocolFamily valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::net

