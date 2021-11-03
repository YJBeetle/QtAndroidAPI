#pragma once

#include "./KeyException.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class KeyManagementException : public java::security::KeyException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyManagementException(const char *className, const char *sig, Ts...agv) : java::security::KeyException(className, sig, std::forward<Ts>(agv)...) {}
		KeyManagementException(QAndroidJniObject obj);
		
		// Constructors
		KeyManagementException();
		KeyManagementException(JString arg0);
		KeyManagementException(JThrowable arg0);
		KeyManagementException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security

