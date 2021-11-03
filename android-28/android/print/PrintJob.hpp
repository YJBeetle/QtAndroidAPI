#pragma once

#include "../../JObject.hpp"

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
class JObject;

namespace android::print
{
	class PrintJob : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintJob(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintJob(QJniObject obj);
		
		// Constructors
		
		// Methods
		void cancel();
		jboolean equals(JObject arg0);
		android::print::PrintJobId getId();
		android::print::PrintJobInfo getInfo();
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

