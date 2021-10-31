#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::os::strictmode
{
	class Violation : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Violation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Violation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

