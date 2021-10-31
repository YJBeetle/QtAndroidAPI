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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CookieSyncManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CookieSyncManager(QAndroidJniObject obj);
		
		// Constructors
		
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

