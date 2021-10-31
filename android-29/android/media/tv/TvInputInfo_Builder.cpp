#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "./TvInputInfo.hpp"
#include "../../os/Bundle.hpp"
#include "./TvInputInfo_Builder.hpp"

namespace android::media::tv
{
	// Fields
	
	TvInputInfo_Builder::TvInputInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvInputInfo_Builder::TvInputInfo_Builder(android::content::Context arg0, android::content::ComponentName arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputInfo$Builder",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TvInputInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/tv/TvInputInfo;"
		);
	}
	QAndroidJniObject TvInputInfo_Builder::setCanRecord(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setCanRecord",
			"(Z)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject TvInputInfo_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/tv/TvInputInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TvInputInfo_Builder::setTunerCount(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTunerCount",
			"(I)Landroid/media/tv/TvInputInfo$Builder;",
			arg0
		);
	}
} // namespace android::media::tv

