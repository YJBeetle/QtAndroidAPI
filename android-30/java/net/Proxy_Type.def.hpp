#pragma once

#include "../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::net
{
	class Proxy_Type : public java::lang::Enum
	{
	public:
		// Fields
		static java::net::Proxy_Type DIRECT();
		static java::net::Proxy_Type HTTP();
		static java::net::Proxy_Type SOCKS();
		
		// QJniObject forward
		template<typename ...Ts> explicit Proxy_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Proxy_Type(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::net::Proxy_Type valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::net

