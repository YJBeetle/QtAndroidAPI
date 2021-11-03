#include "../../../../JIntArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../util/Range.hpp"
#include "../../../util/Size.hpp"
#include "../../../view/Surface.hpp"
#include "../../../../JClass.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./StreamConfigurationMap.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	StreamConfigurationMap::StreamConfigurationMap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean StreamConfigurationMap::isOutputSupportedFor(JClass arg0)
	{
		return callStaticMethod<jboolean>(
			"android.hardware.camera2.params.StreamConfigurationMap",
			"isOutputSupportedFor",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	jboolean StreamConfigurationMap::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray StreamConfigurationMap::getHighResolutionOutputSizes(jint arg0)
	{
		return callObjectMethod(
			"getHighResolutionOutputSizes",
			"(I)[Landroid/util/Size;",
			arg0
		);
	}
	JArray StreamConfigurationMap::getHighSpeedVideoFpsRanges()
	{
		return callObjectMethod(
			"getHighSpeedVideoFpsRanges",
			"()[Landroid/util/Range;"
		);
	}
	JArray StreamConfigurationMap::getHighSpeedVideoFpsRangesFor(android::util::Size arg0)
	{
		return callObjectMethod(
			"getHighSpeedVideoFpsRangesFor",
			"(Landroid/util/Size;)[Landroid/util/Range;",
			arg0.object()
		);
	}
	JArray StreamConfigurationMap::getHighSpeedVideoSizes()
	{
		return callObjectMethod(
			"getHighSpeedVideoSizes",
			"()[Landroid/util/Size;"
		);
	}
	JArray StreamConfigurationMap::getHighSpeedVideoSizesFor(android::util::Range arg0)
	{
		return callObjectMethod(
			"getHighSpeedVideoSizesFor",
			"(Landroid/util/Range;)[Landroid/util/Size;",
			arg0.object()
		);
	}
	JIntArray StreamConfigurationMap::getInputFormats()
	{
		return callObjectMethod(
			"getInputFormats",
			"()[I"
		);
	}
	JArray StreamConfigurationMap::getInputSizes(jint arg0)
	{
		return callObjectMethod(
			"getInputSizes",
			"(I)[Landroid/util/Size;",
			arg0
		);
	}
	JIntArray StreamConfigurationMap::getOutputFormats()
	{
		return callObjectMethod(
			"getOutputFormats",
			"()[I"
		);
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
	jlong StreamConfigurationMap::getOutputMinFrameDuration(JClass arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputMinFrameDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	JArray StreamConfigurationMap::getOutputSizes(jint arg0)
	{
		return callObjectMethod(
			"getOutputSizes",
			"(I)[Landroid/util/Size;",
			arg0
		);
	}
	JArray StreamConfigurationMap::getOutputSizes(JClass arg0)
	{
		return callObjectMethod(
			"getOutputSizes",
			"(Ljava/lang/Class;)[Landroid/util/Size;",
			arg0.object<jclass>()
		);
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
	jlong StreamConfigurationMap::getOutputStallDuration(JClass arg0, android::util::Size arg1)
	{
		return callMethod<jlong>(
			"getOutputStallDuration",
			"(Ljava/lang/Class;Landroid/util/Size;)J",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	JIntArray StreamConfigurationMap::getValidOutputFormatsForInput(jint arg0)
	{
		return callObjectMethod(
			"getValidOutputFormatsForInput",
			"(I)[I",
			arg0
		);
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
	JString StreamConfigurationMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

