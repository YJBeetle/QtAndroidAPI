#pragma once

#include "../../../JObject.hpp"

namespace android::security::identity
{
	class AccessControlProfile;
}
namespace android::security::identity
{
	class AccessControlProfileId;
}
namespace java::security::cert
{
	class X509Certificate;
}

namespace android::security::identity
{
	class AccessControlProfile_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessControlProfile_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlProfile_Builder(QJniObject obj);
		
		// Constructors
		AccessControlProfile_Builder(android::security::identity::AccessControlProfileId arg0);
		
		// Methods
		android::security::identity::AccessControlProfile build() const;
		android::security::identity::AccessControlProfile_Builder setReaderCertificate(java::security::cert::X509Certificate arg0) const;
		android::security::identity::AccessControlProfile_Builder setUserAuthenticationRequired(jboolean arg0) const;
		android::security::identity::AccessControlProfile_Builder setUserAuthenticationTimeout(jlong arg0) const;
	};
} // namespace android::security::identity

