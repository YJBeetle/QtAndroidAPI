#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyStore_PasswordProtection : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyStore_PasswordProtection(QAndroidJniObject obj);
		// Constructors
		KeyStore_PasswordProtection(jcharArray &arg0);
		KeyStore_PasswordProtection(jcharArray &arg0, jstring &arg1, __JniBaseClass &arg2);
		KeyStore_PasswordProtection(jcharArray &arg0, const QString &arg1, __JniBaseClass &arg2);
		KeyStore_PasswordProtection() = default;
		
		// Methods
		void destroy();
		jcharArray getPassword();
		jstring getProtectionAlgorithm();
		QAndroidJniObject getProtectionParameters();
		jboolean isDestroyed();
	};
} // namespace java::security

