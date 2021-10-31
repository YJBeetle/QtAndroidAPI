#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class AccessControlProfile_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessControlProfile_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlProfile_Builder(QJniObject obj);
		
		// Constructors
		AccessControlProfile_Builder(android::security::identity::AccessControlProfileId arg0);
		
		// Methods
		android::security::identity::AccessControlProfile build();
		android::security::identity::AccessControlProfile_Builder setReaderCertificate(java::security::cert::X509Certificate arg0);
		android::security::identity::AccessControlProfile_Builder setUserAuthenticationRequired(jboolean arg0);
		android::security::identity::AccessControlProfile_Builder setUserAuthenticationTimeout(jlong arg0);
	};
} // namespace android::security::identity

