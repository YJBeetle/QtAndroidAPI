#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class VolumeShaper_Configuration;
}

namespace __jni_impl::android::media
{
	class VolumeShaper_Configuration_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::media::VolumeShaper_Configuration arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject invertVolumes();
		QAndroidJniObject reflectTimes();
		QAndroidJniObject scaleToEndVolume(jfloat arg0);
		QAndroidJniObject scaleToStartVolume(jfloat arg0);
		QAndroidJniObject setCurve(jfloatArray arg0, jfloatArray arg1);
		QAndroidJniObject setDuration(jlong arg0);
		QAndroidJniObject setInterpolatorType(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "./VolumeShaper_Configuration.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void VolumeShaper_Configuration_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.VolumeShaper$Configuration$Builder",
			"()V"
		);
	}
	void VolumeShaper_Configuration_Builder::__constructor(__jni_impl::android::media::VolumeShaper_Configuration arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.VolumeShaper$Configuration$Builder",
			"(Landroid/media/VolumeShaper$Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject VolumeShaper_Configuration_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/VolumeShaper$Configuration;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::invertVolumes()
	{
		return __thiz.callObjectMethod(
			"invertVolumes",
			"()Landroid/media/VolumeShaper$Configuration$Builder;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::reflectTimes()
	{
		return __thiz.callObjectMethod(
			"reflectTimes",
			"()Landroid/media/VolumeShaper$Configuration$Builder;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::scaleToEndVolume(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"scaleToEndVolume",
			"(F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::scaleToStartVolume(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"scaleToStartVolume",
			"(F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::setCurve(jfloatArray arg0, jfloatArray arg1)
	{
		return __thiz.callObjectMethod(
			"setCurve",
			"([F[F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::setInterpolatorType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setInterpolatorType",
			"(I)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class VolumeShaper_Configuration_Builder : public __jni_impl::android::media::VolumeShaper_Configuration_Builder
	{
	public:
		VolumeShaper_Configuration_Builder(QAndroidJniObject obj) { __thiz = obj; }
		VolumeShaper_Configuration_Builder()
		{
			__constructor();
		}
		VolumeShaper_Configuration_Builder(__jni_impl::android::media::VolumeShaper_Configuration arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

