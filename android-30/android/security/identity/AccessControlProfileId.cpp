#include "./AccessControlProfileId.hpp"

namespace android::security::identity
{
	// Fields
	
	// QAndroidJniObject forward
	AccessControlProfileId::AccessControlProfileId(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessControlProfileId::AccessControlProfileId(jint arg0)
		: JObject(
			"android.security.identity.AccessControlProfileId",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint AccessControlProfileId::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
} // namespace android::security::identity

