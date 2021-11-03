#pragma once

#include "../../lang/IllegalArgumentException.hpp"

class JString;

namespace java::nio::file
{
	class ProviderMismatchException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProviderMismatchException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		ProviderMismatchException(QAndroidJniObject obj);
		
		// Constructors
		ProviderMismatchException();
		ProviderMismatchException(JString arg0);
		
		// Methods
	};
} // namespace java::nio::file

