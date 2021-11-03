#include "./AccessControlProfile.hpp"
#include "./PersonalizationData.hpp"
#include "./PersonalizationData_Builder.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	PersonalizationData_Builder::PersonalizationData_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PersonalizationData_Builder::PersonalizationData_Builder()
		: JObject(
			"android.security.identity.PersonalizationData$Builder",
			"()V"
		) {}
	
	// Methods
	android::security::identity::PersonalizationData_Builder PersonalizationData_Builder::addAccessControlProfile(android::security::identity::AccessControlProfile arg0)
	{
		return callObjectMethod(
			"addAccessControlProfile",
			"(Landroid/security/identity/AccessControlProfile;)Landroid/security/identity/PersonalizationData$Builder;",
			arg0.object()
		);
	}
	android::security::identity::PersonalizationData PersonalizationData_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/identity/PersonalizationData;"
		);
	}
	android::security::identity::PersonalizationData_Builder PersonalizationData_Builder::putEntry(jstring arg0, jstring arg1, JObject arg2, jbyteArray arg3)
	{
		return callObjectMethod(
			"putEntry",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;[B)Landroid/security/identity/PersonalizationData$Builder;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
} // namespace android::security::identity

