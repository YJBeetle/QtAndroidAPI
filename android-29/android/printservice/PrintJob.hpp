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
namespace android::printservice
{
	class PrintDocument;
}

namespace android::printservice
{
	class PrintJob : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintJob(QAndroidJniObject obj);
		// Constructors
		PrintJob() = default;
		
		// Methods
		jboolean block(jstring arg0);
		jboolean block(const QString &arg0);
		jboolean cancel();
		jboolean complete();
		jboolean equals(jobject arg0);
		jboolean fail(jstring arg0);
		jboolean fail(const QString &arg0);
		jint getAdvancedIntOption(jstring arg0);
		jint getAdvancedIntOption(const QString &arg0);
		jstring getAdvancedStringOption(jstring arg0);
		jstring getAdvancedStringOption(const QString &arg0);
		QAndroidJniObject getDocument();
		QAndroidJniObject getId();
		QAndroidJniObject getInfo();
		jstring getTag();
		jboolean hasAdvancedOption(jstring arg0);
		jboolean hasAdvancedOption(const QString &arg0);
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
		void setStatus(const QString &arg0);
		jboolean setTag(jstring arg0);
		jboolean setTag(const QString &arg0);
		jboolean start();
	};
} // namespace android::printservice

