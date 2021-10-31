#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class Provider;
}
namespace javax::crypto
{
	class SecretKeyFactorySpi;
}

namespace javax::crypto
{
	class SecretKeyFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecretKeyFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SecretKeyFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::SecretKeyFactory getInstance(jstring arg0);
		static javax::crypto::SecretKeyFactory getInstance(jstring arg0, jstring arg1);
		static javax::crypto::SecretKeyFactory getInstance(jstring arg0, java::security::Provider arg1);
		__JniBaseClass generateSecret(__JniBaseClass arg0);
		jstring getAlgorithm();
		__JniBaseClass getKeySpec(__JniBaseClass arg0, jclass arg1);
		java::security::Provider getProvider();
		__JniBaseClass translateKey(__JniBaseClass arg0);
	};
} // namespace javax::crypto

