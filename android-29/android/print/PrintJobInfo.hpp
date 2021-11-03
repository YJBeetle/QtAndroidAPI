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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintJobInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintJobInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getAdvancedIntOption(JString arg0);
		JString getAdvancedStringOption(JString arg0);
		android::print::PrintAttributes getAttributes();
		jint getCopies();
		jlong getCreationTime();
		android::print::PrintJobId getId();
		JString getLabel();
		JArray getPages();
		android::print::PrinterId getPrinterId();
		jint getState();
		jboolean hasAdvancedOption(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

