#pragma once

#include "../../../JObject.hpp"

namespace android::security::identity
{
	class AccessControlProfileId : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessControlProfileId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlProfileId(QAndroidJniObject obj);
		
		// Constructors
		AccessControlProfileId(jint arg0);
		
		// Methods
		jint getId();
	};
} // namespace android::security::identity

