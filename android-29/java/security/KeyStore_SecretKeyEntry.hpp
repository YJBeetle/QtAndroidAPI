#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyStore_SecretKeyEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyStore_SecretKeyEntry(QAndroidJniObject obj);
		// Constructors
		KeyStore_SecretKeyEntry(__JniBaseClass &arg0);
		KeyStore_SecretKeyEntry(__JniBaseClass &arg0, __JniBaseClass &arg1);
		KeyStore_SecretKeyEntry() = default;
		
		// Methods
		QAndroidJniObject getAttributes();
		QAndroidJniObject getSecretKey();
		jstring toString();
	};
} // namespace java::security

