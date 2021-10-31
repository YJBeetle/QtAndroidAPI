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
		
		SecretKeyFactory(QAndroidJniObject obj);
		// Constructors
		SecretKeyFactory() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		QAndroidJniObject generateSecret(__JniBaseClass arg0);
		jstring getAlgorithm();
		QAndroidJniObject getKeySpec(__JniBaseClass arg0, jclass arg1);
		QAndroidJniObject getProvider();
		QAndroidJniObject translateKey(__JniBaseClass arg0);
	};
} // namespace javax::crypto

