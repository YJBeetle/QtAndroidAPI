#include "./params/MultiResolutionStreamInfo.hpp"
#include "../../media/ImageReader.hpp"
#include "../../view/Surface.hpp"
#include "./MultiResolutionImageReader.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// QAndroidJniObject forward
	MultiResolutionImageReader::MultiResolutionImageReader(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MultiResolutionImageReader::MultiResolutionImageReader(JObject arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.camera2.MultiResolutionImageReader",
			"(Ljava/util/Collection;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	void MultiResolutionImageReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MultiResolutionImageReader::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	android::hardware::camera2::params::MultiResolutionStreamInfo MultiResolutionImageReader::getStreamInfoForImageReader(android::media::ImageReader arg0)
	{
		return callObjectMethod(
			"getStreamInfoForImageReader",
			"(Landroid/media/ImageReader;)Landroid/hardware/camera2/params/MultiResolutionStreamInfo;",
			arg0.object()
		);
	}
	android::view::Surface MultiResolutionImageReader::getSurface()
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	void MultiResolutionImageReader::setOnImageAvailableListener(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"setOnImageAvailableListener",
			"(Landroid/media/ImageReader$OnImageAvailableListener;Ljava/util/concurrent/Executor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::hardware::camera2

