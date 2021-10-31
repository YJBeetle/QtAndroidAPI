#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyFactorySpi;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class KeyFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyFactory(QAndroidJniObject obj);
		// Constructors
		KeyFactory() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		QAndroidJniObject generatePrivate(__JniBaseClass arg0);
		QAndroidJniObject generatePublic(__JniBaseClass arg0);
		jstring getAlgorithm();
		QAndroidJniObject getKeySpec(__JniBaseClass arg0, jclass arg1);
		QAndroidJniObject getProvider();
		QAndroidJniObject translateKey(__JniBaseClass arg0);
	};
} // namespace java::security

