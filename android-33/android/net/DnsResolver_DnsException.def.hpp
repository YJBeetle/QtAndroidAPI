#pragma once

#include "../../java/lang/Exception.def.hpp"

class JThrowable;

namespace android::net
{
	class DnsResolver_DnsException : public java::lang::Exception
	{
	public:
		// Fields
		jint code();
		
		// QJniObject forward
		template<typename ...Ts> explicit DnsResolver_DnsException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DnsResolver_DnsException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		DnsResolver_DnsException(jint arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::net

