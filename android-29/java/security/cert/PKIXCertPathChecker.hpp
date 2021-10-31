#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security::cert
{
	class Certificate;
}

namespace java::security::cert
{
	class PKIXCertPathChecker : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKIXCertPathChecker(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PKIXCertPathChecker(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void check(java::security::cert::Certificate arg0);
		void check(java::security::cert::Certificate arg0, __JniBaseClass arg1);
		jobject clone();
		QAndroidJniObject getSupportedExtensions();
		void init(jboolean arg0);
		jboolean isForwardCheckingSupported();
	};
} // namespace java::security::cert

