#pragma once

#include "../lang/Error.hpp"

class JString;
class JThrowable;

namespace java::util
{
	class ServiceConfigurationError : public java::lang::Error
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServiceConfigurationError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		ServiceConfigurationError(QJniObject obj);
		
		// Constructors
		ServiceConfigurationError(JString arg0);
		ServiceConfigurationError(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util

