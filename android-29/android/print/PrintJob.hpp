#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::print
{
	class PrintJobId;
}
namespace android::print
{
	class PrintJobInfo;
}
namespace android::print
{
	class PrintManager;
}

namespace android::print
{
	class PrintJob : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintJob(QAndroidJniObject obj);
		// Constructors
		PrintJob() = default;
		
		// Methods
		void cancel();
		jboolean equals(jobject arg0);
		QAndroidJniObject getId();
		QAndroidJniObject getInfo();
		jint hashCode();
		jboolean isBlocked();
		jboolean isCancelled();
		jboolean isCompleted();
		jboolean isFailed();
		jboolean isQueued();
		jboolean isStarted();
		void restart();
	};
} // namespace android::print

