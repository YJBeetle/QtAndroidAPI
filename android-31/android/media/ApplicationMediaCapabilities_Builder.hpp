#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class ApplicationMediaCapabilities;
}

namespace android::media
{
	class ApplicationMediaCapabilities_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationMediaCapabilities_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationMediaCapabilities_Builder(QJniObject obj);
		
		// Constructors
		ApplicationMediaCapabilities_Builder();
		
		// Methods
		android::media::ApplicationMediaCapabilities_Builder addSupportedHdrType(jstring arg0);
		android::media::ApplicationMediaCapabilities_Builder addSupportedVideoMimeType(jstring arg0);
		android::media::ApplicationMediaCapabilities_Builder addUnsupportedHdrType(jstring arg0);
		android::media::ApplicationMediaCapabilities_Builder addUnsupportedVideoMimeType(jstring arg0);
		android::media::ApplicationMediaCapabilities build();
	};
} // namespace android::media

