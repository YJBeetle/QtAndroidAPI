#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class Camera;
}
namespace android::hardware
{
	class Camera_Size;
}

namespace android::hardware
{
	class Camera_Parameters : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ANTIBANDING_50HZ();
		static jstring ANTIBANDING_60HZ();
		static jstring ANTIBANDING_AUTO();
		static jstring ANTIBANDING_OFF();
		static jstring EFFECT_AQUA();
		static jstring EFFECT_BLACKBOARD();
		static jstring EFFECT_MONO();
		static jstring EFFECT_NEGATIVE();
		static jstring EFFECT_NONE();
		static jstring EFFECT_POSTERIZE();
		static jstring EFFECT_SEPIA();
		static jstring EFFECT_SOLARIZE();
		static jstring EFFECT_WHITEBOARD();
		static jstring FLASH_MODE_AUTO();
		static jstring FLASH_MODE_OFF();
		static jstring FLASH_MODE_ON();
		static jstring FLASH_MODE_RED_EYE();
		static jstring FLASH_MODE_TORCH();
		static jint FOCUS_DISTANCE_FAR_INDEX();
		static jint FOCUS_DISTANCE_NEAR_INDEX();
		static jint FOCUS_DISTANCE_OPTIMAL_INDEX();
		static jstring FOCUS_MODE_AUTO();
		static jstring FOCUS_MODE_CONTINUOUS_PICTURE();
		static jstring FOCUS_MODE_CONTINUOUS_VIDEO();
		static jstring FOCUS_MODE_EDOF();
		static jstring FOCUS_MODE_FIXED();
		static jstring FOCUS_MODE_INFINITY();
		static jstring FOCUS_MODE_MACRO();
		static jint PREVIEW_FPS_MAX_INDEX();
		static jint PREVIEW_FPS_MIN_INDEX();
		static jstring SCENE_MODE_ACTION();
		static jstring SCENE_MODE_AUTO();
		static jstring SCENE_MODE_BARCODE();
		static jstring SCENE_MODE_BEACH();
		static jstring SCENE_MODE_CANDLELIGHT();
		static jstring SCENE_MODE_FIREWORKS();
		static jstring SCENE_MODE_HDR();
		static jstring SCENE_MODE_LANDSCAPE();
		static jstring SCENE_MODE_NIGHT();
		static jstring SCENE_MODE_NIGHT_PORTRAIT();
		static jstring SCENE_MODE_PARTY();
		static jstring SCENE_MODE_PORTRAIT();
		static jstring SCENE_MODE_SNOW();
		static jstring SCENE_MODE_SPORTS();
		static jstring SCENE_MODE_STEADYPHOTO();
		static jstring SCENE_MODE_SUNSET();
		static jstring SCENE_MODE_THEATRE();
		static jstring WHITE_BALANCE_AUTO();
		static jstring WHITE_BALANCE_CLOUDY_DAYLIGHT();
		static jstring WHITE_BALANCE_DAYLIGHT();
		static jstring WHITE_BALANCE_FLUORESCENT();
		static jstring WHITE_BALANCE_INCANDESCENT();
		static jstring WHITE_BALANCE_SHADE();
		static jstring WHITE_BALANCE_TWILIGHT();
		static jstring WHITE_BALANCE_WARM_FLUORESCENT();
		
		Camera_Parameters(QAndroidJniObject obj);
		// Constructors
		Camera_Parameters() = default;
		
		// Methods
		jstring flatten();
		jstring get(jstring arg0);
		jstring getAntibanding();
		jboolean getAutoExposureLock();
		jboolean getAutoWhiteBalanceLock();
		jstring getColorEffect();
		jint getExposureCompensation();
		jfloat getExposureCompensationStep();
		jstring getFlashMode();
		jfloat getFocalLength();
		QAndroidJniObject getFocusAreas();
		void getFocusDistances(jfloatArray arg0);
		jstring getFocusMode();
		jfloat getHorizontalViewAngle();
		jint getInt(jstring arg0);
		jint getJpegQuality();
		jint getJpegThumbnailQuality();
		QAndroidJniObject getJpegThumbnailSize();
		jint getMaxExposureCompensation();
		jint getMaxNumDetectedFaces();
		jint getMaxNumFocusAreas();
		jint getMaxNumMeteringAreas();
		jint getMaxZoom();
		QAndroidJniObject getMeteringAreas();
		jint getMinExposureCompensation();
		jint getPictureFormat();
		QAndroidJniObject getPictureSize();
		QAndroidJniObject getPreferredPreviewSizeForVideo();
		jint getPreviewFormat();
		void getPreviewFpsRange(jintArray arg0);
		jint getPreviewFrameRate();
		QAndroidJniObject getPreviewSize();
		jstring getSceneMode();
		QAndroidJniObject getSupportedAntibanding();
		QAndroidJniObject getSupportedColorEffects();
		QAndroidJniObject getSupportedFlashModes();
		QAndroidJniObject getSupportedFocusModes();
		QAndroidJniObject getSupportedJpegThumbnailSizes();
		QAndroidJniObject getSupportedPictureFormats();
		QAndroidJniObject getSupportedPictureSizes();
		QAndroidJniObject getSupportedPreviewFormats();
		QAndroidJniObject getSupportedPreviewFpsRange();
		QAndroidJniObject getSupportedPreviewFrameRates();
		QAndroidJniObject getSupportedPreviewSizes();
		QAndroidJniObject getSupportedSceneModes();
		QAndroidJniObject getSupportedVideoSizes();
		QAndroidJniObject getSupportedWhiteBalance();
		jfloat getVerticalViewAngle();
		jboolean getVideoStabilization();
		jstring getWhiteBalance();
		jint getZoom();
		QAndroidJniObject getZoomRatios();
		jboolean isAutoExposureLockSupported();
		jboolean isAutoWhiteBalanceLockSupported();
		jboolean isSmoothZoomSupported();
		jboolean isVideoSnapshotSupported();
		jboolean isVideoStabilizationSupported();
		jboolean isZoomSupported();
		void remove(jstring arg0);
		void removeGpsData();
		void set(jstring arg0, jint arg1);
		void set(jstring arg0, jstring arg1);
		void setAntibanding(jstring arg0);
		void setAutoExposureLock(jboolean arg0);
		void setAutoWhiteBalanceLock(jboolean arg0);
		void setColorEffect(jstring arg0);
		void setExposureCompensation(jint arg0);
		void setFlashMode(jstring arg0);
		void setFocusAreas(__JniBaseClass arg0);
		void setFocusMode(jstring arg0);
		void setGpsAltitude(jdouble arg0);
		void setGpsLatitude(jdouble arg0);
		void setGpsLongitude(jdouble arg0);
		void setGpsProcessingMethod(jstring arg0);
		void setGpsTimestamp(jlong arg0);
		void setJpegQuality(jint arg0);
		void setJpegThumbnailQuality(jint arg0);
		void setJpegThumbnailSize(jint arg0, jint arg1);
		void setMeteringAreas(__JniBaseClass arg0);
		void setPictureFormat(jint arg0);
		void setPictureSize(jint arg0, jint arg1);
		void setPreviewFormat(jint arg0);
		void setPreviewFpsRange(jint arg0, jint arg1);
		void setPreviewFrameRate(jint arg0);
		void setPreviewSize(jint arg0, jint arg1);
		void setRecordingHint(jboolean arg0);
		void setRotation(jint arg0);
		void setSceneMode(jstring arg0);
		void setVideoStabilization(jboolean arg0);
		void setWhiteBalance(jstring arg0);
		void setZoom(jint arg0);
		void unflatten(jstring arg0);
	};
} // namespace android::hardware

