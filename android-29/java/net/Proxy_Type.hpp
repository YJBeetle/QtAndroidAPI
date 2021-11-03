#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Proxy_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Proxy_Type(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::net::Proxy_Type valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::net

