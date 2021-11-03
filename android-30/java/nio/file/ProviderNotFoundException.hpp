#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::nio::file
{
	class ProviderNotFoundException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProviderNotFoundException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ProviderNotFoundException(QAndroidJniObject obj);
		
		// Constructors
		ProviderNotFoundException();
		ProviderNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace java::nio::file

