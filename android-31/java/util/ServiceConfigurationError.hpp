#pragma once

#include "../../JObject.hpp"
#include "../lang/Error.hpp"


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
		ServiceConfigurationError(jstring arg0);
		ServiceConfigurationError(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util

