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
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationMediaCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationMediaCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::ApplicationMediaCapabilities createFromXml(JObject arg0);
		jint describeContents() const;
		JObject getSupportedHdrTypes() const;
		JObject getSupportedVideoMimeTypes() const;
		JObject getUnsupportedHdrTypes() const;
		JObject getUnsupportedVideoMimeTypes() const;
		jboolean isFormatSpecified(JString arg0) const;
		jboolean isHdrTypeSupported(JString arg0) const;
		jboolean isVideoMimeTypeSupported(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

