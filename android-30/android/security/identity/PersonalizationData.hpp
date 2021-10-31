#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::security::identity
{
	class PersonalizationData : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PersonalizationData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PersonalizationData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::security::identity

