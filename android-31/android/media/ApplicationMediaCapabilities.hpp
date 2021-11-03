#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class ApplicationMediaCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationMediaCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationMediaCapabilities(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::ApplicationMediaCapabilities createFromXml(JObject arg0);
		jint describeContents();
		JObject getSupportedHdrTypes();
		JObject getSupportedVideoMimeTypes();
		JObject getUnsupportedHdrTypes();
		JObject getUnsupportedVideoMimeTypes();
		jboolean isFormatSpecified(jstring arg0);
		jboolean isHdrTypeSupported(jstring arg0);
		jboolean isVideoMimeTypeSupported(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

