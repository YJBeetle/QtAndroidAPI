#pragma once

#include "./KeyException.def.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class KeyManagementException : public java::security::KeyException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyManagementException(const char *className, const char *sig, Ts...agv) : java::security::KeyException(className, sig, std::forward<Ts>(agv)...) {}
		KeyManagementException(QJniObject obj) : java::security::KeyException(obj) {}
		
		// Constructors
		KeyManagementException();
		KeyManagementException(JString arg0);
		KeyManagementException(JThrowable arg0);
		KeyManagementException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

