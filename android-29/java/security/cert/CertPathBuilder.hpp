#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class CertPathBuilderSpi;
}

namespace java::security::cert
{
	class CertPathBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		CertPathBuilder(QAndroidJniObject obj);
		// Constructors
		CertPathBuilder() = default;
		
		// Methods
		static jstring getDefaultType();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		QAndroidJniObject build(__JniBaseClass arg0);
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		QAndroidJniObject getRevocationChecker();
	};
} // namespace java::security::cert

