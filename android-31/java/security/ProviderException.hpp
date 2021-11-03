#pragma once

#include "../lang/RuntimeException.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class ProviderException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProviderException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ProviderException(QJniObject obj);
		
		// Constructors
		ProviderException();
		ProviderException(JString arg0);
		ProviderException(JThrowable arg0);
		ProviderException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

