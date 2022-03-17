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
class JObject;

namespace android::print
{
	class PrintJob : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintJob(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintJob(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void cancel() const;
		jboolean equals(JObject arg0) const;
		android::print::PrintJobId getId() const;
		android::print::PrintJobInfo getInfo() const;
		jint hashCode() const;
		jboolean isBlocked() const;
		jboolean isCancelled() const;
		jboolean isCompleted() const;
		jboolean isFailed() const;
		jboolean isQueued() const;
		jboolean isStarted() const;
		void restart() const;
	};
} // namespace android::print

