#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::file
{
	class ProviderMismatchException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProviderMismatchException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		ProviderMismatchException(QJniObject obj);
		
		// Constructors
		ProviderMismatchException();
		ProviderMismatchException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

