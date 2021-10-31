#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "./TvInputInfo.hpp"
#include "../../os/Bundle.hpp"
#include "./TvInputInfo_Builder.hpp"

namespace android::media::tv
{
	// Fields
	
	// QAndroidJniObject forward
	TvInputInfo_Builder::TvInputInfo_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TvInputInfo_Builder::TvInputInfo_Builder(android::content::Context arg0, android::content::ComponentName arg1)
		: __JniBaseClass(
			"android.media.tv.TvInputInfo$Builder",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject TvInputInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/tv/TvInputInfo;"
		);
	}
	QAndroidJniObject TvInputInfo_Builder::setCanRecord(jboolean arg0)
	{
		return callObjectMethod(
			"setCanRecord",
			"(Z)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvInputInfo_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/tv/TvInputInfo$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject TvInputInfo_Builder::setTunerCount(jint arg0)
	{
		return callObjectMethod(
			"setTunerCount",
			"(I)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
} // namespace android::media::tv

