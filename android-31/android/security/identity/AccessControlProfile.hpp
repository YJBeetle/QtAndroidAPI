#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::security::identity
{
	class AccessControlProfile : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessControlProfile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessControlProfile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::security::identity

