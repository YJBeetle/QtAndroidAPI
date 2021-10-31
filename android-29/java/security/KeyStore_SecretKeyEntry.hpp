#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::security
{
	class KeyStore_SecretKeyEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_SecretKeyEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_SecretKeyEntry(QJniObject obj);
		
		// Constructors
		KeyStore_SecretKeyEntry(__JniBaseClass arg0);
		KeyStore_SecretKeyEntry(__JniBaseClass arg0, __JniBaseClass arg1);
		
		// Methods
		__JniBaseClass getAttributes();
		__JniBaseClass getSecretKey();
		jstring toString();
	};
} // namespace java::security

