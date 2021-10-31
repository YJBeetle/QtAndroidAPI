#include "./VolumeShaper_Configuration.hpp"
#include "./VolumeShaper_Configuration_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	VolumeShaper_Configuration_Builder::VolumeShaper_Configuration_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VolumeShaper_Configuration_Builder::VolumeShaper_Configuration_Builder()
		: __JniBaseClass(
			"android.media.VolumeShaper$Configuration$Builder",
			"()V"
		) {}
	VolumeShaper_Configuration_Builder::VolumeShaper_Configuration_Builder(android::media::VolumeShaper_Configuration arg0)
		: __JniBaseClass(
			"android.media.VolumeShaper$Configuration$Builder",
			"(Landroid/media/VolumeShaper$Configuration;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject VolumeShaper_Configuration_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/VolumeShaper$Configuration;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::invertVolumes()
	{
		return callObjectMethod(
			"invertVolumes",
			"()Landroid/media/VolumeShaper$Configuration$Builder;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::reflectTimes()
	{
		return callObjectMethod(
			"reflectTimes",
			"()Landroid/media/VolumeShaper$Configuration$Builder;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::scaleToEndVolume(jfloat arg0)
	{
		return callObjectMethod(
			"scaleToEndVolume",
			"(F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::scaleToStartVolume(jfloat arg0)
	{
		return callObjectMethod(
			"scaleToStartVolume",
			"(F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::setCurve(jfloatArray arg0, jfloatArray arg1)
	{
		return callObjectMethod(
			"setCurve",
			"([F[F)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
	QAndroidJniObject VolumeShaper_Configuration_Builder::setInterpolatorType(jint arg0)
	{
		return callObjectMethod(
			"setInterpolatorType",
			"(I)Landroid/media/VolumeShaper$Configuration$Builder;",
			arg0
		);
	}
} // namespace android::media

