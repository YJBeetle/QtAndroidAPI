#pragma once

#include "../../lang/RuntimeException.hpp"

class JString;

namespace java::nio::file
{
	class ProviderNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProviderNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ProviderNotFoundException(QJniObject obj);
		
		// Constructors
		ProviderNotFoundException();
		ProviderNotFoundException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

