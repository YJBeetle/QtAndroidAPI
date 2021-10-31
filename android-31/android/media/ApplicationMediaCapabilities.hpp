#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class ApplicationMediaCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationMediaCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationMediaCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::ApplicationMediaCapabilities createFromXml(__JniBaseClass arg0);
		jint describeContents();
		__JniBaseClass getSupportedHdrTypes();
		__JniBaseClass getSupportedVideoMimeTypes();
		__JniBaseClass getUnsupportedHdrTypes();
		__JniBaseClass getUnsupportedVideoMimeTypes();
		jboolean isFormatSpecified(jstring arg0);
		jboolean isHdrTypeSupported(jstring arg0);
		jboolean isVideoMimeTypeSupported(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

