#include "./VolumeShaper_Configuration.hpp"
#include "./VolumeShaper_Operation.hpp"
#include "./VolumeShaper.hpp"

namespace android::media
{
	// Fields
	
	VolumeShaper::VolumeShaper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void VolumeShaper::apply(android::media::VolumeShaper_Operation arg0)
	{
		__thiz.callMethod<void>(
			"apply",
			"(Landroid/media/VolumeShaper$Operation;)V",
			arg0.__jniObject().object()
		);
	}
	void VolumeShaper::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jfloat VolumeShaper::getVolume()
	{
		return __thiz.callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	void VolumeShaper::replace(android::media::VolumeShaper_Configuration arg0, android::media::VolumeShaper_Operation arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"replace",
			"(Landroid/media/VolumeShaper$Configuration;Landroid/media/VolumeShaper$Operation;Z)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace android::media

