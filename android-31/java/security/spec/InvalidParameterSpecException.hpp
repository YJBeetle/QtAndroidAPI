#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::spec
{
	class InvalidParameterSpecException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidParameterSpecException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidParameterSpecException(QJniObject obj);
		
		// Constructors
		InvalidParameterSpecException();
		InvalidParameterSpecException(jstring arg0);
		
		// Methods
	};
} // namespace java::security::spec

