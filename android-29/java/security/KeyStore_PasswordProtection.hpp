#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyStore_PasswordProtection : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStore_PasswordProtection(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_PasswordProtection(QAndroidJniObject obj);
		
		// Constructors
		KeyStore_PasswordProtection(jcharArray arg0);
		KeyStore_PasswordProtection(jcharArray arg0, jstring arg1, __JniBaseClass arg2);
		
		// Methods
		void destroy();
		jcharArray getPassword();
		jstring getProtectionAlgorithm();
		QAndroidJniObject getProtectionParameters();
		jboolean isDestroyed();
	};
} // namespace java::security

