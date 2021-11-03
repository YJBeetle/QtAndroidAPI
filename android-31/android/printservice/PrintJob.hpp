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
		jboolean block(jstring arg0);
		jboolean cancel();
		jboolean complete();
		jboolean equals(jobject arg0);
		jboolean fail(jstring arg0);
		jint getAdvancedIntOption(jstring arg0);
		jstring getAdvancedStringOption(jstring arg0);
		android::printservice::PrintDocument getDocument();
		android::print::PrintJobId getId();
		android::print::PrintJobInfo getInfo();
		jstring getTag();
		jboolean hasAdvancedOption(jstring arg0);
		jint hashCode();
		jboolean isBlocked();
		jboolean isCancelled();
		jboolean isCompleted();
		jboolean isFailed();
		jboolean isQueued();
		jboolean isStarted();
		void setProgress(jfloat arg0);
		void setStatus(jint arg0);
		void setStatus(jstring arg0);
		jboolean setTag(jstring arg0);
		jboolean start();
	};
} // namespace android::printservice

