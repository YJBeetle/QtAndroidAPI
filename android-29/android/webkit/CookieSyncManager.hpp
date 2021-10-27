#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::webkit
{
	class CookieSyncManager : public __JniBaseClass
	{
	public:
		// Fields
		
		CookieSyncManager(QAndroidJniObject obj);
		// Constructors
		CookieSyncManager() = default;
		
		// Methods
		static QAndroidJniObject createInstance(android::content::Context arg0);
		static QAndroidJniObject getInstance();
		void resetSync();
		void run();
		void startSync();
		void stopSync();
		void sync();
	};
} // namespace android::webkit

