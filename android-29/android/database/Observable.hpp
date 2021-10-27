#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class ArrayList;
}

namespace android::database
{
	class Observable : public __JniBaseClass
	{
	public:
		// Fields
		
		Observable(QAndroidJniObject obj);
		// Constructors
		Observable();
		
		// Methods
		void registerObserver(jobject arg0);
		void unregisterAll();
		void unregisterObserver(jobject arg0);
	};
} // namespace android::database

