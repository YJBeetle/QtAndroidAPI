#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class ApplicationMediaCapabilities;
}
class JString;

namespace android::media
{
	class ApplicationMediaCapabilities_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApplicationMediaCapabilities_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationMediaCapabilities_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ApplicationMediaCapabilities_Builder();
		
		// Methods
		android::media::ApplicationMediaCapabilities_Builder addSupportedHdrType(JString arg0) const;
		android::media::ApplicationMediaCapabilities_Builder addSupportedVideoMimeType(JString arg0) const;
		android::media::ApplicationMediaCapabilities_Builder addUnsupportedHdrType(JString arg0) const;
		android::media::ApplicationMediaCapabilities_Builder addUnsupportedVideoMimeType(JString arg0) const;
		android::media::ApplicationMediaCapabilities build() const;
	};
} // namespace android::media

