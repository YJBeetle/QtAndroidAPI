#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "./TvInputInfo.hpp"
#include "../../os/Bundle.hpp"
#include "./TvInputInfo_Builder.hpp"

namespace android::media::tv
{
	// Fields
	
	// QJniObject forward
	TvInputInfo_Builder::TvInputInfo_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvInputInfo_Builder::TvInputInfo_Builder(android::content::Context arg0, android::content::ComponentName arg1)
		: JObject(
			"android.media.tv.TvInputInfo$Builder",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	android::media::tv::TvInputInfo TvInputInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/tv/TvInputInfo;"
		);
	}
	android::media::tv::TvInputInfo_Builder TvInputInfo_Builder::setCanPauseRecording(jboolean arg0)
	{
		return callObjectMethod(
			"setCanPauseRecording",
			"(Z)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvInputInfo_Builder TvInputInfo_Builder::setCanRecord(jboolean arg0)
	{
		return callObjectMethod(
			"setCanRecord",
			"(Z)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
	android::media::tv::TvInputInfo_Builder TvInputInfo_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/tv/TvInputInfo$Builder;",
			arg0.object()
		);
	}
	android::media::tv::TvInputInfo_Builder TvInputInfo_Builder::setTunerCount(jint arg0)
	{
		return callObjectMethod(
			"setTunerCount",
			"(I)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
} // namespace android::media::tv

