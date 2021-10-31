#include "../../../util/Range.hpp"
#include "../../../util/Size.hpp"
#include "../../../view/Surface.hpp"
#include "./StreamConfigurationMap.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	StreamConfigurationMap::StreamConfigurationMap(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean StreamConfigurationMap::isOutputSupportedFor(jclass arg0)
	{
		return callStaticMethod<jboolean>(
			"android.hardware.camera2.params.StreamConfigurationMap",
			"isOutputSupportedFor",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jboolean StreamConfigurationMap::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray StreamConfigurationMap::getHighResolutionOutputSizes(jint arg0)
	{
		return callObjectMethod(
			"getHighResolutionOutputSizes",
			"(I)[Landroid/util/Size;",
			arg0
		).object<jarray>();
	}
	jarray StreamConfigurationMap::getHighSpeedVideoFpsRanges()
	{
		return callObjectMethod(
			"getHighSpeedVideoFpsRanges",
			"()[Landroid/util/Range;"
		).object<jarray>();
	}
	jarray StreamConfigurationMap::getHighSpeedVideoFpsRangesFor(android::util::Size arg0)
	{
		return callObjectMethod(
			"getHighSpeedVideoFpsRangesFor",
			"(Landroid/util/Size;)[Landroid/util/Range;",
			arg0.object()
		).object<jarray>();
	}
	jarray StreamConfigurationMap::getHighSpeedVideoSizes()
	{
		return callObjectMethod(
			"getHighSpeedVideoSizes",
			"()[Landroid/util/Size;"
		).object<jarray>();
	}
	jarray StreamConfigurationMap::getHighSpeedVideoSizesFor(android::util::Range arg0)
	{
		return callObjectMethod(
			"getHighSpeedVideoSizesFor",
			"(Landroid/util/Range;)[Landroid/util/Size;",
			arg0.object()
		).object<jarray>();
	}
	jintArray StreamConfigurationMap::getInputFormats()
	{
		return callObjectMethod(
			"getInputFormats",
			"()[I"
		).object<jintArray>();
	}
	jarray StreamConfigurationMap::getInputSizes(jint arg0)
	{
		return callObjectMethod(
			"getInputSizes",
			"(I)[Landroid/util/Size;",
			arg0
		).object<jarray>();
	}
	jintArray StreamConfigurationMap::getOutputFormats()
	{
		return callObjectMethod(
			"getOutputFormats",
			"()[I"
		).object<jintArray>();
	}
	jlong StreamConfigurationMap::getOutputMinFrameDuration(jint arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.object()
		);
	}
	jlong StreamConfigurationMap::getOutputMinFrameDuration(jclass arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0,
			arg1.object()
		);
	}
	jarray StreamConfigurationMap::getOutputSizes(jint arg0)
	{
		return callObjectMethod(
			"getOutputSizes",
			"(I)[Landroid/util/Size;",
			arg0
		).object<jarray>();
	}
	jarray StreamConfigurationMap::getOutputSizes(jclass arg0)
	{
		return callObjectMethod(
			"getOutputSizes",
			"(Ljava/lang/Class;)[Landroid/util/Size;",
			arg0
		).object<jarray>();
	}
	jlong StreamConfigurationMap::getOutputStallDuration(jint arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputStallDuration",
			"(ILandroid/util/Size;)J",
			arg0,
			arg1.object()
		);
	}
	jlong StreamConfigurationMap::getOutputStallDuration(jclass arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputStallDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0,
			arg1.object()
		);
	}
	jintArray StreamConfigurationMap::getValidOutputFormatsForInput(jint arg0)
	{
		return callObjectMethod(
			"getValidOutputFormatsForInput",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	jint StreamConfigurationMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean StreamConfigurationMap::isOutputSupportedFor(android::view::Surface arg0)
	{
		return callMethod<jboolean>(
			"isOutputSupportedFor",
			"(Landroid/view/Surface;)Z",
			arg0.object()
		);
	}
	jboolean StreamConfigurationMap::isOutputSupportedFor(jint arg0)
	{
		return callMethod<jboolean>(
			"isOutputSupportedFor",
			"(I)Z",
			arg0
		);
	}
	jstring StreamConfigurationMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

