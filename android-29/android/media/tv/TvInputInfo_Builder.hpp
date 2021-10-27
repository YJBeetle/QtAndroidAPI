#pragma once

#ifndef ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER
#define ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::media::tv
{
	class TvInputInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media::tv
{
	class TvInputInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setCanRecord(jboolean arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setTunerCount(jint arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "TvInputInfo.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvInputInfo_Builder::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1)
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
	QAndroidJniObject TvInputInfo_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
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
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvInputInfo_Builder : public __jni_impl::android::media::tv::TvInputInfo_Builder
	{
	public:
		TvInputInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		TvInputInfo_Builder(__jni_impl::android::content::Context arg0, __jni_impl::android::content::ComponentName arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER

