#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../java/lang/Exception.hpp"


namespace android::net::ipsec::ike::exceptions
{
	class IkeException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		IkeException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike::exceptions

