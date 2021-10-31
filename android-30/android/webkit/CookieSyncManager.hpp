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
		static android::webkit::CookieSyncManager createInstance(android::content::Context arg0);
		static android::webkit::CookieSyncManager getInstance();
		void resetSync();
		void run();
		void startSync();
		void stopSync();
		void sync();
	};
} // namespace android::webkit

