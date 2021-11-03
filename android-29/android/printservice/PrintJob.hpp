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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintJob(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintJob(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean block(JString arg0) const;
		jboolean cancel() const;
		jboolean complete() const;
		jboolean equals(JObject arg0) const;
		jboolean fail(JString arg0) const;
		jint getAdvancedIntOption(JString arg0) const;
		JString getAdvancedStringOption(JString arg0) const;
		android::printservice::PrintDocument getDocument() const;
		android::print::PrintJobId getId() const;
		android::print::PrintJobInfo getInfo() const;
		JString getTag() const;
		jboolean hasAdvancedOption(JString arg0) const;
		jint hashCode() const;
		jboolean isBlocked() const;
		jboolean isCancelled() const;
		jboolean isCompleted() const;
		jboolean isFailed() const;
		jboolean isQueued() const;
		jboolean isStarted() const;
		void setProgress(jfloat arg0) const;
		void setStatus(jint arg0) const;
		void setStatus(JString arg0) const;
		jboolean setTag(JString arg0) const;
		jboolean start() const;
	};
} // namespace android::printservice

