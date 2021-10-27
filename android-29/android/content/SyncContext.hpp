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
		
		SyncContext(QAndroidJniObject obj);
		// Constructors
		SyncContext() = default;
		
		// Methods
		QAndroidJniObject getSyncContextBinder();
		void onFinished(android::content::SyncResult arg0);
	};
} // namespace android::content

