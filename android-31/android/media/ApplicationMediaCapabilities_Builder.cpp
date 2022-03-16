#include "./ApplicationMediaCapabilities.hpp"
#include "../../JString.hpp"
#include "./ApplicationMediaCapabilities_Builder.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	ApplicationMediaCapabilities_Builder::ApplicationMediaCapabilities_Builder()
		: JObject(
			"android.media.ApplicationMediaCapabilities$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::ApplicationMediaCapabilities_Builder ApplicationMediaCapabilities_Builder::addSupportedHdrType(JString arg0) const
	{
		return callObjectMethod(
			"addSupportedHdrType",
			"(Ljava/lang/String;)Landroid/media/ApplicationMediaCapabilities$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::ApplicationMediaCapabilities_Builder ApplicationMediaCapabilities_Builder::addSupportedVideoMimeType(JString arg0) const
	{
		return callObjectMethod(
			"addSupportedVideoMimeType",
			"(Ljava/lang/String;)Landroid/media/ApplicationMediaCapabilities$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::ApplicationMediaCapabilities_Builder ApplicationMediaCapabilities_Builder::addUnsupportedHdrType(JString arg0) const
	{
		return callObjectMethod(
			"addUnsupportedHdrType",
			"(Ljava/lang/String;)Landroid/media/ApplicationMediaCapabilities$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::ApplicationMediaCapabilities_Builder ApplicationMediaCapabilities_Builder::addUnsupportedVideoMimeType(JString arg0) const
	{
		return callObjectMethod(
			"addUnsupportedVideoMimeType",
			"(Ljava/lang/String;)Landroid/media/ApplicationMediaCapabilities$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::ApplicationMediaCapabilities ApplicationMediaCapabilities_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/ApplicationMediaCapabilities;"
		);
	}
} // namespace android::media

