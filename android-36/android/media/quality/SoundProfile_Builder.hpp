#pragma once

#include "./SoundProfile.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./SoundProfile_Builder.def.hpp"

namespace android::media::quality
{
	// Fields
	
	// Constructors
	inline SoundProfile_Builder::SoundProfile_Builder(android::media::quality::SoundProfile arg0)
		: JObject(
			"android.media.quality.SoundProfile$Builder",
			"(Landroid/media/quality/SoundProfile;)V",
			arg0.object()
		) {}
	inline SoundProfile_Builder::SoundProfile_Builder(JString arg0)
		: JObject(
			"android.media.quality.SoundProfile$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::media::quality::SoundProfile SoundProfile_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/quality/SoundProfile;"
		);
	}
	inline android::media::quality::SoundProfile_Builder SoundProfile_Builder::setParameters(android::os::PersistableBundle arg0) const
	{
		return callObjectMethod(
			"setParameters",
			"(Landroid/os/PersistableBundle;)Landroid/media/quality/SoundProfile$Builder;",
			arg0.object()
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
