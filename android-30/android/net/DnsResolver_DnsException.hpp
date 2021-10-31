#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::net
{
	class DnsResolver_DnsException : public java::lang::Exception
	{
	public:
		// Fields
		jint code();
		
		// QJniObject forward
		template<typename ...Ts> explicit DnsResolver_DnsException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DnsResolver_DnsException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

