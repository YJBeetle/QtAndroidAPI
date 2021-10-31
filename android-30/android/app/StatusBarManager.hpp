#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::app
{
	class StatusBarManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StatusBarManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StatusBarManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::app

