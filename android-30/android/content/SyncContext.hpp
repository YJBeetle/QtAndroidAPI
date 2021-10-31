#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class SyncResult;
}

namespace android::content
{
	class SyncContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getSyncContextBinder();
		void onFinished(android::content::SyncResult arg0);
	};
} // namespace android::content

