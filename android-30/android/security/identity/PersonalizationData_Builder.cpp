#include "../../../JByteArray.hpp"
#include "./AccessControlProfile.hpp"
#include "./PersonalizationData.hpp"
#include "../../../JString.hpp"
#include "./PersonalizationData_Builder.hpp"

namespace android::security::identity
{
	// Fields
	
	// QJniObject forward
	PersonalizationData_Builder::PersonalizationData_Builder(QJniObject obj) : JObject(obj) {}
	
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
	android::security::identity::PersonalizationData_Builder PersonalizationData_Builder::putEntry(JString arg0, JString arg1, JObject arg2, JByteArray arg3)
	{
		return callObjectMethod(
			"putEntry",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Collection;[B)Landroid/security/identity/PersonalizationData$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jbyteArray>()
		);
	}
} // namespace android::security::identity

