#include "./Camera.hpp"
#include "./Camera_Size.hpp"
#include "./Camera_Parameters.hpp"

namespace android::hardware
{
	// Fields
	jstring Camera_Parameters::ANTIBANDING_50HZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"ANTIBANDING_50HZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::ANTIBANDING_60HZ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"ANTIBANDING_60HZ",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::ANTIBANDING_AUTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"ANTIBANDING_AUTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::ANTIBANDING_OFF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"ANTIBANDING_OFF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_AQUA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_AQUA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_BLACKBOARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_BLACKBOARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_MONO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_MONO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_NEGATIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_NEGATIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_NONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_POSTERIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_POSTERIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_SEPIA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_SEPIA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_SOLARIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_SOLARIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::EFFECT_WHITEBOARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"EFFECT_WHITEBOARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FLASH_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_AUTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FLASH_MODE_OFF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_OFF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FLASH_MODE_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FLASH_MODE_RED_EYE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_RED_EYE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FLASH_MODE_TORCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FLASH_MODE_TORCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Camera_Parameters::FOCUS_DISTANCE_FAR_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"FOCUS_DISTANCE_FAR_INDEX"
		);
	}
	jint Camera_Parameters::FOCUS_DISTANCE_NEAR_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"FOCUS_DISTANCE_NEAR_INDEX"
		);
	}
	jint Camera_Parameters::FOCUS_DISTANCE_OPTIMAL_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"FOCUS_DISTANCE_OPTIMAL_INDEX"
		);
	}
	jstring Camera_Parameters::FOCUS_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_AUTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FOCUS_MODE_CONTINUOUS_PICTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_CONTINUOUS_PICTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FOCUS_MODE_CONTINUOUS_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_CONTINUOUS_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FOCUS_MODE_EDOF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_EDOF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FOCUS_MODE_FIXED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_FIXED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FOCUS_MODE_INFINITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_INFINITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::FOCUS_MODE_MACRO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"FOCUS_MODE_MACRO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Camera_Parameters::PREVIEW_FPS_MAX_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"PREVIEW_FPS_MAX_INDEX"
		);
	}
	jint Camera_Parameters::PREVIEW_FPS_MIN_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.Camera$Parameters",
			"PREVIEW_FPS_MIN_INDEX"
		);
	}
	jstring Camera_Parameters::SCENE_MODE_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_AUTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_BARCODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_BARCODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_BEACH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_BEACH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_CANDLELIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_CANDLELIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_FIREWORKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_FIREWORKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_HDR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_HDR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_LANDSCAPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_LANDSCAPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_NIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_NIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_NIGHT_PORTRAIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_NIGHT_PORTRAIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_PARTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_PARTY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_PORTRAIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_PORTRAIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_SNOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_SNOW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_SPORTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_SPORTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_STEADYPHOTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_STEADYPHOTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_SUNSET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_SUNSET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::SCENE_MODE_THEATRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"SCENE_MODE_THEATRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::WHITE_BALANCE_AUTO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_AUTO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::WHITE_BALANCE_CLOUDY_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_CLOUDY_DAYLIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::WHITE_BALANCE_DAYLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_DAYLIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::WHITE_BALANCE_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_FLUORESCENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::WHITE_BALANCE_INCANDESCENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_INCANDESCENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::WHITE_BALANCE_SHADE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_SHADE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::WHITE_BALANCE_TWILIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_TWILIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::WHITE_BALANCE_WARM_FLUORESCENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.Camera$Parameters",
			"WHITE_BALANCE_WARM_FLUORESCENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Camera_Parameters::Camera_Parameters(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring Camera_Parameters::flatten()
	{
		return callObjectMethod(
			"flatten",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Camera_Parameters::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Camera_Parameters::getAntibanding()
	{
		return callObjectMethod(
			"getAntibanding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Camera_Parameters::getAutoExposureLock()
	{
		return callMethod<jboolean>(
			"getAutoExposureLock",
			"()Z"
		);
	}
	jboolean Camera_Parameters::getAutoWhiteBalanceLock()
	{
		return callMethod<jboolean>(
			"getAutoWhiteBalanceLock",
			"()Z"
		);
	}
	jstring Camera_Parameters::getColorEffect()
	{
		return callObjectMethod(
			"getColorEffect",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Camera_Parameters::getExposureCompensation()
	{
		return callMethod<jint>(
			"getExposureCompensation",
			"()I"
		);
	}
	jfloat Camera_Parameters::getExposureCompensationStep()
	{
		return callMethod<jfloat>(
			"getExposureCompensationStep",
			"()F"
		);
	}
	jstring Camera_Parameters::getFlashMode()
	{
		return callObjectMethod(
			"getFlashMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat Camera_Parameters::getFocalLength()
	{
		return callMethod<jfloat>(
			"getFocalLength",
			"()F"
		);
	}
	QAndroidJniObject Camera_Parameters::getFocusAreas()
	{
		return callObjectMethod(
			"getFocusAreas",
			"()Ljava/util/List;"
		);
	}
	void Camera_Parameters::getFocusDistances(jfloatArray arg0)
	{
		callMethod<void>(
			"getFocusDistances",
			"([F)V",
			arg0
		);
	}
	jstring Camera_Parameters::getFocusMode()
	{
		return callObjectMethod(
			"getFocusMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat Camera_Parameters::getHorizontalViewAngle()
	{
		return callMethod<jfloat>(
			"getHorizontalViewAngle",
			"()F"
		);
	}
	jint Camera_Parameters::getInt(jstring arg0)
	{
		return callMethod<jint>(
			"getInt",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Camera_Parameters::getJpegQuality()
	{
		return callMethod<jint>(
			"getJpegQuality",
			"()I"
		);
	}
	jint Camera_Parameters::getJpegThumbnailQuality()
	{
		return callMethod<jint>(
			"getJpegThumbnailQuality",
			"()I"
		);
	}
	QAndroidJniObject Camera_Parameters::getJpegThumbnailSize()
	{
		return callObjectMethod(
			"getJpegThumbnailSize",
			"()Landroid/hardware/Camera$Size;"
		);
	}
	jint Camera_Parameters::getMaxExposureCompensation()
	{
		return callMethod<jint>(
			"getMaxExposureCompensation",
			"()I"
		);
	}
	jint Camera_Parameters::getMaxNumDetectedFaces()
	{
		return callMethod<jint>(
			"getMaxNumDetectedFaces",
			"()I"
		);
	}
	jint Camera_Parameters::getMaxNumFocusAreas()
	{
		return callMethod<jint>(
			"getMaxNumFocusAreas",
			"()I"
		);
	}
	jint Camera_Parameters::getMaxNumMeteringAreas()
	{
		return callMethod<jint>(
			"getMaxNumMeteringAreas",
			"()I"
		);
	}
	jint Camera_Parameters::getMaxZoom()
	{
		return callMethod<jint>(
			"getMaxZoom",
			"()I"
		);
	}
	QAndroidJniObject Camera_Parameters::getMeteringAreas()
	{
		return callObjectMethod(
			"getMeteringAreas",
			"()Ljava/util/List;"
		);
	}
	jint Camera_Parameters::getMinExposureCompensation()
	{
		return callMethod<jint>(
			"getMinExposureCompensation",
			"()I"
		);
	}
	jint Camera_Parameters::getPictureFormat()
	{
		return callMethod<jint>(
			"getPictureFormat",
			"()I"
		);
	}
	QAndroidJniObject Camera_Parameters::getPictureSize()
	{
		return callObjectMethod(
			"getPictureSize",
			"()Landroid/hardware/Camera$Size;"
		);
	}
	QAndroidJniObject Camera_Parameters::getPreferredPreviewSizeForVideo()
	{
		return callObjectMethod(
			"getPreferredPreviewSizeForVideo",
			"()Landroid/hardware/Camera$Size;"
		);
	}
	jint Camera_Parameters::getPreviewFormat()
	{
		return callMethod<jint>(
			"getPreviewFormat",
			"()I"
		);
	}
	void Camera_Parameters::getPreviewFpsRange(jintArray arg0)
	{
		callMethod<void>(
			"getPreviewFpsRange",
			"([I)V",
			arg0
		);
	}
	jint Camera_Parameters::getPreviewFrameRate()
	{
		return callMethod<jint>(
			"getPreviewFrameRate",
			"()I"
		);
	}
	QAndroidJniObject Camera_Parameters::getPreviewSize()
	{
		return callObjectMethod(
			"getPreviewSize",
			"()Landroid/hardware/Camera$Size;"
		);
	}
	jstring Camera_Parameters::getSceneMode()
	{
		return callObjectMethod(
			"getSceneMode",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Camera_Parameters::getSupportedAntibanding()
	{
		return callObjectMethod(
			"getSupportedAntibanding",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedColorEffects()
	{
		return callObjectMethod(
			"getSupportedColorEffects",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedFlashModes()
	{
		return callObjectMethod(
			"getSupportedFlashModes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedFocusModes()
	{
		return callObjectMethod(
			"getSupportedFocusModes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedJpegThumbnailSizes()
	{
		return callObjectMethod(
			"getSupportedJpegThumbnailSizes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedPictureFormats()
	{
		return callObjectMethod(
			"getSupportedPictureFormats",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedPictureSizes()
	{
		return callObjectMethod(
			"getSupportedPictureSizes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedPreviewFormats()
	{
		return callObjectMethod(
			"getSupportedPreviewFormats",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedPreviewFpsRange()
	{
		return callObjectMethod(
			"getSupportedPreviewFpsRange",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedPreviewFrameRates()
	{
		return callObjectMethod(
			"getSupportedPreviewFrameRates",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedPreviewSizes()
	{
		return callObjectMethod(
			"getSupportedPreviewSizes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedSceneModes()
	{
		return callObjectMethod(
			"getSupportedSceneModes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedVideoSizes()
	{
		return callObjectMethod(
			"getSupportedVideoSizes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Camera_Parameters::getSupportedWhiteBalance()
	{
		return callObjectMethod(
			"getSupportedWhiteBalance",
			"()Ljava/util/List;"
		);
	}
	jfloat Camera_Parameters::getVerticalViewAngle()
	{
		return callMethod<jfloat>(
			"getVerticalViewAngle",
			"()F"
		);
	}
	jboolean Camera_Parameters::getVideoStabilization()
	{
		return callMethod<jboolean>(
			"getVideoStabilization",
			"()Z"
		);
	}
	jstring Camera_Parameters::getWhiteBalance()
	{
		return callObjectMethod(
			"getWhiteBalance",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Camera_Parameters::getZoom()
	{
		return callMethod<jint>(
			"getZoom",
			"()I"
		);
	}
	QAndroidJniObject Camera_Parameters::getZoomRatios()
	{
		return callObjectMethod(
			"getZoomRatios",
			"()Ljava/util/List;"
		);
	}
	jboolean Camera_Parameters::isAutoExposureLockSupported()
	{
		return callMethod<jboolean>(
			"isAutoExposureLockSupported",
			"()Z"
		);
	}
	jboolean Camera_Parameters::isAutoWhiteBalanceLockSupported()
	{
		return callMethod<jboolean>(
			"isAutoWhiteBalanceLockSupported",
			"()Z"
		);
	}
	jboolean Camera_Parameters::isSmoothZoomSupported()
	{
		return callMethod<jboolean>(
			"isSmoothZoomSupported",
			"()Z"
		);
	}
	jboolean Camera_Parameters::isVideoSnapshotSupported()
	{
		return callMethod<jboolean>(
			"isVideoSnapshotSupported",
			"()Z"
		);
	}
	jboolean Camera_Parameters::isVideoStabilizationSupported()
	{
		return callMethod<jboolean>(
			"isVideoStabilizationSupported",
			"()Z"
		);
	}
	jboolean Camera_Parameters::isZoomSupported()
	{
		return callMethod<jboolean>(
			"isZoomSupported",
			"()Z"
		);
	}
	void Camera_Parameters::remove(jstring arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Camera_Parameters::removeGpsData()
	{
		callMethod<void>(
			"removeGpsData",
			"()V"
		);
	}
	void Camera_Parameters::set(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Camera_Parameters::set(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Camera_Parameters::setAntibanding(jstring arg0)
	{
		callMethod<void>(
			"setAntibanding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Camera_Parameters::setAutoExposureLock(jboolean arg0)
	{
		callMethod<void>(
			"setAutoExposureLock",
			"(Z)V",
			arg0
		);
	}
	void Camera_Parameters::setAutoWhiteBalanceLock(jboolean arg0)
	{
		callMethod<void>(
			"setAutoWhiteBalanceLock",
			"(Z)V",
			arg0
		);
	}
	void Camera_Parameters::setColorEffect(jstring arg0)
	{
		callMethod<void>(
			"setColorEffect",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Camera_Parameters::setExposureCompensation(jint arg0)
	{
		callMethod<void>(
			"setExposureCompensation",
			"(I)V",
			arg0
		);
	}
	void Camera_Parameters::setFlashMode(jstring arg0)
	{
		callMethod<void>(
			"setFlashMode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Camera_Parameters::setFocusAreas(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setFocusAreas",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Camera_Parameters::setFocusMode(jstring arg0)
	{
		callMethod<void>(
			"setFocusMode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Camera_Parameters::setGpsAltitude(jdouble arg0)
	{
		callMethod<void>(
			"setGpsAltitude",
			"(D)V",
			arg0
		);
	}
	void Camera_Parameters::setGpsLatitude(jdouble arg0)
	{
		callMethod<void>(
			"setGpsLatitude",
			"(D)V",
			arg0
		);
	}
	void Camera_Parameters::setGpsLongitude(jdouble arg0)
	{
		callMethod<void>(
			"setGpsLongitude",
			"(D)V",
			arg0
		);
	}
	void Camera_Parameters::setGpsProcessingMethod(jstring arg0)
	{
		callMethod<void>(
			"setGpsProcessingMethod",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Camera_Parameters::setGpsTimestamp(jlong arg0)
	{
		callMethod<void>(
			"setGpsTimestamp",
			"(J)V",
			arg0
		);
	}
	void Camera_Parameters::setJpegQuality(jint arg0)
	{
		callMethod<void>(
			"setJpegQuality",
			"(I)V",
			arg0
		);
	}
	void Camera_Parameters::setJpegThumbnailQuality(jint arg0)
	{
		callMethod<void>(
			"setJpegThumbnailQuality",
			"(I)V",
			arg0
		);
	}
	void Camera_Parameters::setJpegThumbnailSize(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setJpegThumbnailSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Camera_Parameters::setMeteringAreas(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setMeteringAreas",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Camera_Parameters::setPictureFormat(jint arg0)
	{
		callMethod<void>(
			"setPictureFormat",
			"(I)V",
			arg0
		);
	}
	void Camera_Parameters::setPictureSize(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setPictureSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Camera_Parameters::setPreviewFormat(jint arg0)
	{
		callMethod<void>(
			"setPreviewFormat",
			"(I)V",
			arg0
		);
	}
	void Camera_Parameters::setPreviewFpsRange(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setPreviewFpsRange",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Camera_Parameters::setPreviewFrameRate(jint arg0)
	{
		callMethod<void>(
			"setPreviewFrameRate",
			"(I)V",
			arg0
		);
	}
	void Camera_Parameters::setPreviewSize(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setPreviewSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Camera_Parameters::setRecordingHint(jboolean arg0)
	{
		callMethod<void>(
			"setRecordingHint",
			"(Z)V",
			arg0
		);
	}
	void Camera_Parameters::setRotation(jint arg0)
	{
		callMethod<void>(
			"setRotation",
			"(I)V",
			arg0
		);
	}
	void Camera_Parameters::setSceneMode(jstring arg0)
	{
		callMethod<void>(
			"setSceneMode",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Camera_Parameters::setVideoStabilization(jboolean arg0)
	{
		callMethod<void>(
			"setVideoStabilization",
			"(Z)V",
			arg0
		);
	}
	void Camera_Parameters::setWhiteBalance(jstring arg0)
	{
		callMethod<void>(
			"setWhiteBalance",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Camera_Parameters::setZoom(jint arg0)
	{
		callMethod<void>(
			"setZoom",
			"(I)V",
			arg0
		);
	}
	void Camera_Parameters::unflatten(jstring arg0)
	{
		callMethod<void>(
			"unflatten",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::hardware
