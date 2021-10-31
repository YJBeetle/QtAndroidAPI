#include "./ApplicationMediaCapabilities.hpp"
#include "./ApplicationMediaCapabilities_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	ApplicationMediaCapabilities_Builder::ApplicationMediaCapabilities_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ApplicationMediaCapabilities_Builder::ApplicationMediaCapabilities_Builder()
		: __JniBaseClass(
			"android.media.ApplicationMediaCapabilities$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::ApplicationMediaCapabilities_Builder ApplicationMediaCapabilities_Builder::addSupportedHdrType(jstring arg0)
	{
		return callObjectMethod(
			"addSupportedHdrType",
			"(Ljava/lang/String;)Landroid/media/ApplicationMediaCapabilities$Builder;",
			arg0
		);
	}
	android::media::ApplicationMediaCapabilities_Builder ApplicationMediaCapabilities_Builder::addSupportedVideoMimeType(jstring arg0)
	{
		return callObjectMethod(
			"addSupportedVideoMimeType",
			"(Ljava/lang/String;)Landroid/media/ApplicationMediaCapabilities$Builder;",
			arg0
		);
	}
	android::media::ApplicationMediaCapabilities_Builder ApplicationMediaCapabilities_Builder::addUnsupportedHdrType(jstring arg0)
	{
		return callObjectMethod(
			"addUnsupportedHdrType",
			"(Ljava/lang/String;)Landroid/media/ApplicationMediaCapabilities$Builder;",
			arg0
		);
	}
	android::media::ApplicationMediaCapabilities_Builder ApplicationMediaCapabilities_Builder::addUnsupportedVideoMimeType(jstring arg0)
	{
		return callObjectMethod(
			"addUnsupportedVideoMimeType",
			"(Ljava/lang/String;)Landroid/media/ApplicationMediaCapabilities$Builder;",
			arg0
		);
	}
	android::media::ApplicationMediaCapabilities ApplicationMediaCapabilities_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/ApplicationMediaCapabilities;"
		);
	}
} // namespace android::media

