#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyStore;
}
namespace java::security
{
	class Provider;
}
namespace javax::net::ssl
{
	class TrustManagerFactorySpi;
}

namespace javax::net::ssl
{
	class TrustManagerFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		TrustManagerFactory(QAndroidJniObject obj);
		// Constructors
		TrustManagerFactory() = default;
		
		// Methods
		static jstring getDefaultAlgorithm();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		jarray getTrustManagers();
		void init(java::security::KeyStore arg0);
		void init(__JniBaseClass arg0);
	};
} // namespace javax::net::ssl

