#pragma once

#include "../../../__JniBaseClass.hpp"
#include "DynamicsProcessing_Stage.hpp"
#include "DynamicsProcessing_BandStage.hpp"

namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_MbcBand;
}

namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_Mbc : public __jni_impl::android::media::audiofx::DynamicsProcessing_BandStage
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg0);
		void __constructor(jboolean arg0, jboolean arg1, jint arg2);
		
		// Methods
		QAndroidJniObject getBand(jint arg0);
		void setBand(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg1);
		jstring toString();
	};
} // namespace __jni_impl::android::media::audiofx

#include "DynamicsProcessing_MbcBand.hpp"

namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_Mbc::__constructor(__jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Mbc",
			"(Landroid/media/audiofx/DynamicsProcessing$Mbc;)V",
			arg0.__jniObject().object()
		);
	}
	void DynamicsProcessing_Mbc::__constructor(jboolean arg0, jboolean arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$Mbc",
			"(ZZI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject DynamicsProcessing_Mbc::getBand(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBand",
			"(I)Landroid/media/audiofx/DynamicsProcessing$MbcBand;",
			arg0
		);
	}
	void DynamicsProcessing_Mbc::setBand(jint arg0, __jni_impl::android::media::audiofx::DynamicsProcessing_MbcBand arg1)
	{
		__thiz.callMethod<void>(
			"setBand",
			"(ILandroid/media/audiofx/DynamicsProcessing$MbcBand;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jstring DynamicsProcessing_Mbc::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_Mbc : public __jni_impl::android::media::audiofx::DynamicsProcessing_Mbc
	{
	public:
		DynamicsProcessing_Mbc(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_Mbc(__jni_impl::android::media::audiofx::DynamicsProcessing_Mbc arg0)
		{
			__constructor(
				arg0);
		}
		DynamicsProcessing_Mbc(jboolean arg0, jboolean arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::audiofx

