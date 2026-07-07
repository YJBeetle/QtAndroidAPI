#pragma once

#include "../../lang/IllegalArgumentException.def.hpp"

class JString;

namespace java::nio::file
{
	class ProviderMismatchException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProviderMismatchException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		ProviderMismatchException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		ProviderMismatchException();
		ProviderMismatchException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

