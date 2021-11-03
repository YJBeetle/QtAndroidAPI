#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"
#include "./IkeNonProtocolException.hpp"


namespace android::net::ipsec::ike::exceptions
{
	class IkeInternalException : public android::net::ipsec::ike::exceptions::IkeNonProtocolException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IkeInternalException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(className, sig, std::forward<Ts>(agv)...) {}
		IkeInternalException(QAndroidJniObject obj);
		
		// Constructors
		IkeInternalException(jthrowable arg0);
		IkeInternalException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::net::ipsec::ike::exceptions

