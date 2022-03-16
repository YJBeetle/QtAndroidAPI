#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class MediaController2;
}
namespace android::media
{
	class MediaController2_ControllerCallback;
}
namespace android::media
{
	class Session2Token;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaController2_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaController2_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController2_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaController2_Builder(android::content::Context arg0, android::media::Session2Token arg1);
		
		// Methods
		android::media::MediaController2 build() const;
		android::media::MediaController2_Builder setConnectionHints(android::os::Bundle arg0) const;
		android::media::MediaController2_Builder setControllerCallback(JObject arg0, android::media::MediaController2_ControllerCallback arg1) const;
	};
} // namespace android::media

