#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class CertPath;
}
namespace java::security::cert
{
	class CertPathValidatorSpi;
}

namespace java::security::cert
{
	class CertPathValidator : public __JniBaseClass
	{
	public:
		// Fields
		
		CertPathValidator(QAndroidJniObject obj);
		// Constructors
		CertPathValidator() = default;
		
		// Methods
		static jstring getDefaultType();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		QAndroidJniObject getRevocationChecker();
		QAndroidJniObject validate(java::security::cert::CertPath arg0, __JniBaseClass arg1);
	};
} // namespace java::security::cert

