#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::contentcapture
{
	class ContentCaptureContext_Builder;
}

namespace android::view::contentcapture
{
	class ContentCaptureContext : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentCaptureContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::contentcapture::ContentCaptureContext forLocusId(jstring arg0);
		jint describeContents();
		android::os::Bundle getExtras();
		android::content::LocusId getLocusId();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

