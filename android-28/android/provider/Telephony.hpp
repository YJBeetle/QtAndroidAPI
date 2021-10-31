#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Telephony : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

