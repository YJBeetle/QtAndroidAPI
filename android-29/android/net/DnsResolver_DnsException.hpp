#pragma once

#include "../../java/lang/Exception.hpp"

class JThrowable;

namespace android::net
{
	class DnsResolver_DnsException : public java::lang::Exception
	{
	public:
		// Fields
		jint code();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DnsResolver_DnsException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DnsResolver_DnsException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

