#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

namespace android::net
{
	class ParseException : public java::lang::RuntimeException
	{
	public:
		// Fields
		JString response();
		
		// QJniObject forward
		template<typename ...Ts> explicit ParseException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ParseException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

