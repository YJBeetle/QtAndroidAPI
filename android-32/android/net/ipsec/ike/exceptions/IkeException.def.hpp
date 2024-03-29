#pragma once

#include "../../../../../java/lang/Exception.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	class IkeException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		IkeException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::net::ipsec::ike::exceptions

