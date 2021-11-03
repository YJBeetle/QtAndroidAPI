#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::media::tv
{
	class TvInputInfo;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::tv
{
	class TvInputInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvInputInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInputInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		TvInputInfo_Builder(android::content::Context arg0, android::content::ComponentName arg1);
		
		// Methods
		android::media::tv::TvInputInfo build();
		android::media::tv::TvInputInfo_Builder setCanPauseRecording(jboolean arg0);
		android::media::tv::TvInputInfo_Builder setCanRecord(jboolean arg0);
		android::media::tv::TvInputInfo_Builder setExtras(android::os::Bundle arg0);
		android::media::tv::TvInputInfo_Builder setTunerCount(jint arg0);
	};
} // namespace android::media::tv

