#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
namespace android::print
{
	class PrintAttributes;
}
namespace android::print
{
	class PrintJobId;
}
namespace android::print
{
	class PrinterId;
}
class JString;

namespace android::print
{
	class PrintJobInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATE_BLOCKED();
		static jint STATE_CANCELED();
		static jint STATE_COMPLETED();
		static jint STATE_CREATED();
		static jint STATE_FAILED();
		static jint STATE_QUEUED();
		static jint STATE_STARTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintJobInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintJobInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getAdvancedIntOption(JString arg0) const;
		JString getAdvancedStringOption(JString arg0) const;
		android::print::PrintAttributes getAttributes() const;
		jint getCopies() const;
		jlong getCreationTime() const;
		android::print::PrintJobId getId() const;
		JString getLabel() const;
		JArray getPages() const;
		android::print::PrinterId getPrinterId() const;
		jint getState() const;
		jboolean hasAdvancedOption(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::print

