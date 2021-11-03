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
namespace android::printservice
{
	class PrintDocument;
}
class JString;
class JObject;
class JString;

namespace android::printservice
{
	class PrintJob : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintJob(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintJob(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean block(JString arg0);
		jboolean cancel();
		jboolean complete();
		jboolean equals(JObject arg0);
		jboolean fail(JString arg0);
		jint getAdvancedIntOption(JString arg0);
		JString getAdvancedStringOption(JString arg0);
		android::printservice::PrintDocument getDocument();
		android::print::PrintJobId getId();
		android::print::PrintJobInfo getInfo();
		JString getTag();
		jboolean hasAdvancedOption(JString arg0);
		jint hashCode();
		jboolean isBlocked();
		jboolean isCancelled();
		jboolean isCompleted();
		jboolean isFailed();
		jboolean isQueued();
		jboolean isStarted();
		void setProgress(jfloat arg0);
		void setStatus(jint arg0);
		void setStatus(JString arg0);
		jboolean setTag(JString arg0);
		jboolean start();
	};
} // namespace android::printservice

