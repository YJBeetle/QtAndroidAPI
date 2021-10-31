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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CertPathBuilder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultType();
		static java::security::cert::CertPathBuilder getInstance(jstring arg0);
		static java::security::cert::CertPathBuilder getInstance(jstring arg0, jstring arg1);
		static java::security::cert::CertPathBuilder getInstance(jstring arg0, java::security::Provider arg1);
		__JniBaseClass build(__JniBaseClass arg0);
		jstring getAlgorithm();
		java::security::Provider getProvider();
		__JniBaseClass getRevocationChecker();
	};
} // namespace java::security::cert

