#pragma once

#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "./TvInputInfo.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./TvInputInfo_Builder.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvInputInfo_Builder::TvInputInfo_Builder(android::content::Context arg0, android::content::ComponentName arg1)
		: JObject(
			"android.media.tv.TvInputInfo$Builder",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::media::tv::TvInputInfo TvInputInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/tv/TvInputInfo;"
		);
	}
	inline android::media::tv::TvInputInfo_Builder TvInputInfo_Builder::setCanRecord(jboolean arg0) const
	{
		return callObjectMethod(
			"setCanRecord",
			"(Z)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
	inline android::media::tv::TvInputInfo_Builder TvInputInfo_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/tv/TvInputInfo$Builder;",
			arg0.object()
		);
	}
	inline android::media::tv::TvInputInfo_Builder TvInputInfo_Builder::setTunerCount(jint arg0) const
	{
		return callObjectMethod(
			"setTunerCount",
			"(I)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
} // namespace android::media::tv

// Base class headers

