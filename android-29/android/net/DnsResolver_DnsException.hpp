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
		
		DnsResolver_DnsException(QAndroidJniObject obj);
		// Constructors
		DnsResolver_DnsException() = default;
		
		// Methods
	};
} // namespace android::net

