#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::app
{
	class StatusBarManager : public __JniBaseClass
	{
	public:
		// Fields
		
		StatusBarManager(QAndroidJniObject obj);
		// Constructors
		StatusBarManager() = default;
		
		// Methods
	};
} // namespace android::app

