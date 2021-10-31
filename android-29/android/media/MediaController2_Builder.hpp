#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MediaController2_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaController2_Builder(QAndroidJniObject obj);
		// Constructors
		MediaController2_Builder(android::content::Context arg0, android::media::Session2Token arg1);
		MediaController2_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setConnectionHints(android::os::Bundle arg0);
		QAndroidJniObject setControllerCallback(__JniBaseClass arg0, android::media::MediaController2_ControllerCallback arg1);
	};
} // namespace android::media

