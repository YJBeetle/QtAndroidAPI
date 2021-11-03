#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media
{
	class ApplicationMediaCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationMediaCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationMediaCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::ApplicationMediaCapabilities createFromXml(JObject arg0);
		jint describeContents();
		JObject getSupportedHdrTypes();
		JObject getSupportedVideoMimeTypes();
		JObject getUnsupportedHdrTypes();
		JObject getUnsupportedVideoMimeTypes();
		jboolean isFormatSpecified(JString arg0);
		jboolean isHdrTypeSupported(JString arg0);
		jboolean isVideoMimeTypeSupported(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

