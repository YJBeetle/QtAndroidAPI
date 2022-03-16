#pragma once

#include "../../../JObject.hpp"

class JObject;
namespace java::security::cert
{
	class Certificate;
}

namespace java::security::cert
{
	class PKIXCertPathChecker : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKIXCertPathChecker(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PKIXCertPathChecker(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void check(java::security::cert::Certificate arg0) const;
		void check(java::security::cert::Certificate arg0, JObject arg1) const;
		JObject clone() const;
		JObject getSupportedExtensions() const;
		void init(jboolean arg0) const;
		jboolean isForwardCheckingSupported() const;
	};
} // namespace java::security::cert

