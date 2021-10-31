#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::security::identity
{
	class AccessControlProfileId : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessControlProfileId(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlProfileId(QAndroidJniObject obj);
		
		// Constructors
		AccessControlProfileId(jint arg0);
		
		// Methods
		jint getId();
	};
} // namespace android::security::identity

