#pragma once

#include "./PictureProfile.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./PictureProfile_Builder.def.hpp"

namespace android::media::quality
{
	// Fields
	
	// Constructors
	inline PictureProfile_Builder::PictureProfile_Builder(android::media::quality::PictureProfile arg0)
		: JObject(
			"android.media.quality.PictureProfile$Builder",
			"(Landroid/media/quality/PictureProfile;)V",
			arg0.object()
		) {}
	inline PictureProfile_Builder::PictureProfile_Builder(JString arg0)
		: JObject(
			"android.media.quality.PictureProfile$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::media::quality::PictureProfile PictureProfile_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/quality/PictureProfile;"
		);
	}
	inline android::media::quality::PictureProfile_Builder PictureProfile_Builder::setParameters(android::os::PersistableBundle arg0) const
	{
		return callObjectMethod(
			"setParameters",
			"(Landroid/os/PersistableBundle;)Landroid/media/quality/PictureProfile$Builder;",
			arg0.object()
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
