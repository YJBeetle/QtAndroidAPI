#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


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
		Proxy_Type(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::net::Proxy_Type valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::net

