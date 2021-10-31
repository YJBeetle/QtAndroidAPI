#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::contentcapture
{
	class ContentCaptureSessionId : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentCaptureSessionId(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureSessionId(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

