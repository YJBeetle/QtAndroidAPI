#pragma once

#include "../lang/Enum.hpp"

class JArray;
class JString;

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
		static java::net::StandardProtocolFamily valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::net

