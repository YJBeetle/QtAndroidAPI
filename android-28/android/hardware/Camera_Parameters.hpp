#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JIntArray;
namespace android::hardware
{
	class Camera;
}
namespace android::hardware
{
	class Camera_Size;
}
class JString;

namespace android::hardware
{
	class Camera_Parameters : public JObject
	{
	public:
		// Fields
		static JString ANTIBANDING_50HZ();
		static JString ANTIBANDING_60HZ();
		static JString ANTIBANDING_AUTO();
		static JString ANTIBANDING_OFF();
		static JString EFFECT_AQUA();
		static JString EFFECT_BLACKBOARD();
		static JString EFFECT_MONO();
		static JString EFFECT_NEGATIVE();
		static JString EFFECT_NONE();
		static JString EFFECT_POSTERIZE();
		static JString EFFECT_SEPIA();
		static JString EFFECT_SOLARIZE();
		static JString EFFECT_WHITEBOARD();
		static JString FLASH_MODE_AUTO();
		static JString FLASH_MODE_OFF();
		static JString FLASH_MODE_ON();
		static JString FLASH_MODE_RED_EYE();
		static JString FLASH_MODE_TORCH();
		static jint FOCUS_DISTANCE_FAR_INDEX();
		static jint FOCUS_DISTANCE_NEAR_INDEX();
		static jint FOCUS_DISTANCE_OPTIMAL_INDEX();
		static JString FOCUS_MODE_AUTO();
		static JString FOCUS_MODE_CONTINUOUS_PICTURE();
		static JString FOCUS_MODE_CONTINUOUS_VIDEO();
		static JString FOCUS_MODE_EDOF();
		static JString FOCUS_MODE_FIXED();
		static JString FOCUS_MODE_INFINITY();
		static JString FOCUS_MODE_MACRO();
		static jint PREVIEW_FPS_MAX_INDEX();
		static jint PREVIEW_FPS_MIN_INDEX();
		static JString SCENE_MODE_ACTION();
		static JString SCENE_MODE_AUTO();
		static JString SCENE_MODE_BARCODE();
		static JString SCENE_MODE_BEACH();
		static JString SCENE_MODE_CANDLELIGHT();
		static JString SCENE_MODE_FIREWORKS();
		static JString SCENE_MODE_HDR();
		static JString SCENE_MODE_LANDSCAPE();
		static JString SCENE_MODE_NIGHT();
		static JString SCENE_MODE_NIGHT_PORTRAIT();
		static JString SCENE_MODE_PARTY();
		static JString SCENE_MODE_PORTRAIT();
		static JString SCENE_MODE_SNOW();
		static JString SCENE_MODE_SPORTS();
		static JString SCENE_MODE_STEADYPHOTO();
		static JString SCENE_MODE_SUNSET();
		static JString SCENE_MODE_THEATRE();
		static JString WHITE_BALANCE_AUTO();
		static JString WHITE_BALANCE_CLOUDY_DAYLIGHT();
		static JString WHITE_BALANCE_DAYLIGHT();
		static JString WHITE_BALANCE_FLUORESCENT();
		static JString WHITE_BALANCE_INCANDESCENT();
		static JString WHITE_BALANCE_SHADE();
		static JString WHITE_BALANCE_TWILIGHT();
		static JString WHITE_BALANCE_WARM_FLUORESCENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Camera_Parameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Camera_Parameters(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString flatten();
		JString get(JString arg0);
		JString getAntibanding();
		jboolean getAutoExposureLock();
		jboolean getAutoWhiteBalanceLock();
		JString getColorEffect();
		jint getExposureCompensation();
		jfloat getExposureCompensationStep();
		JString getFlashMode();
		jfloat getFocalLength();
		JObject getFocusAreas();
		void getFocusDistances(JFloatArray arg0);
		JString getFocusMode();
		jfloat getHorizontalViewAngle();
		jint getInt(JString arg0);
		jint getJpegQuality();
		jint getJpegThumbnailQuality();
		android::hardware::Camera_Size getJpegThumbnailSize();
		jint getMaxExposureCompensation();
		jint getMaxNumDetectedFaces();
		jint getMaxNumFocusAreas();
		jint getMaxNumMeteringAreas();
		jint getMaxZoom();
		JObject getMeteringAreas();
		jint getMinExposureCompensation();
		jint getPictureFormat();
		android::hardware::Camera_Size getPictureSize();
		android::hardware::Camera_Size getPreferredPreviewSizeForVideo();
		jint getPreviewFormat();
		void getPreviewFpsRange(JIntArray arg0);
		jint getPreviewFrameRate();
		android::hardware::Camera_Size getPreviewSize();
		JString getSceneMode();
		JObject getSupportedAntibanding();
		JObject getSupportedColorEffects();
		JObject getSupportedFlashModes();
		JObject getSupportedFocusModes();
		JObject getSupportedJpegThumbnailSizes();
		JObject getSupportedPictureFormats();
		JObject getSupportedPictureSizes();
		JObject getSupportedPreviewFormats();
		JObject getSupportedPreviewFpsRange();
		JObject getSupportedPreviewFrameRates();
		JObject getSupportedPreviewSizes();
		JObject getSupportedSceneModes();
		JObject getSupportedVideoSizes();
		JObject getSupportedWhiteBalance();
		jfloat getVerticalViewAngle();
		jboolean getVideoStabilization();
		JString getWhiteBalance();
		jint getZoom();
		JObject getZoomRatios();
		jboolean isAutoExposureLockSupported();
		jboolean isAutoWhiteBalanceLockSupported();
		jboolean isSmoothZoomSupported();
		jboolean isVideoSnapshotSupported();
		jboolean isVideoStabilizationSupported();
		jboolean isZoomSupported();
		void remove(JString arg0);
		void removeGpsData();
		void set(JString arg0, jint arg1);
		void set(JString arg0, JString arg1);
		void setAntibanding(JString arg0);
		void setAutoExposureLock(jboolean arg0);
		void setAutoWhiteBalanceLock(jboolean arg0);
		void setColorEffect(JString arg0);
		void setExposureCompensation(jint arg0);
		void setFlashMode(JString arg0);
		void setFocusAreas(JObject arg0);
		void setFocusMode(JString arg0);
		void setGpsAltitude(jdouble arg0);
		void setGpsLatitude(jdouble arg0);
		void setGpsLongitude(jdouble arg0);
		void setGpsProcessingMethod(JString arg0);
		void setGpsTimestamp(jlong arg0);
		void setJpegQuality(jint arg0);
		void setJpegThumbnailQuality(jint arg0);
		void setJpegThumbnailSize(jint arg0, jint arg1);
		void setMeteringAreas(JObject arg0);
		void setPictureFormat(jint arg0);
		void setPictureSize(jint arg0, jint arg1);
		void setPreviewFormat(jint arg0);
		void setPreviewFpsRange(jint arg0, jint arg1);
		void setPreviewFrameRate(jint arg0);
		void setPreviewSize(jint arg0, jint arg1);
		void setRecordingHint(jboolean arg0);
		void setRotation(jint arg0);
		void setSceneMode(JString arg0);
		void setVideoStabilization(jboolean arg0);
		void setWhiteBalance(JString arg0);
		void setZoom(jint arg0);
		void unflatten(JString arg0);
	};
} // namespace android::hardware

