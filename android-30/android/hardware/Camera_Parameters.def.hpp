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
		Camera_Parameters(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString flatten() const;
		JString get(JString arg0) const;
		JString getAntibanding() const;
		jboolean getAutoExposureLock() const;
		jboolean getAutoWhiteBalanceLock() const;
		JString getColorEffect() const;
		jint getExposureCompensation() const;
		jfloat getExposureCompensationStep() const;
		JString getFlashMode() const;
		jfloat getFocalLength() const;
		JObject getFocusAreas() const;
		void getFocusDistances(JFloatArray arg0) const;
		JString getFocusMode() const;
		jfloat getHorizontalViewAngle() const;
		jint getInt(JString arg0) const;
		jint getJpegQuality() const;
		jint getJpegThumbnailQuality() const;
		android::hardware::Camera_Size getJpegThumbnailSize() const;
		jint getMaxExposureCompensation() const;
		jint getMaxNumDetectedFaces() const;
		jint getMaxNumFocusAreas() const;
		jint getMaxNumMeteringAreas() const;
		jint getMaxZoom() const;
		JObject getMeteringAreas() const;
		jint getMinExposureCompensation() const;
		jint getPictureFormat() const;
		android::hardware::Camera_Size getPictureSize() const;
		android::hardware::Camera_Size getPreferredPreviewSizeForVideo() const;
		jint getPreviewFormat() const;
		void getPreviewFpsRange(JIntArray arg0) const;
		jint getPreviewFrameRate() const;
		android::hardware::Camera_Size getPreviewSize() const;
		JString getSceneMode() const;
		JObject getSupportedAntibanding() const;
		JObject getSupportedColorEffects() const;
		JObject getSupportedFlashModes() const;
		JObject getSupportedFocusModes() const;
		JObject getSupportedJpegThumbnailSizes() const;
		JObject getSupportedPictureFormats() const;
		JObject getSupportedPictureSizes() const;
		JObject getSupportedPreviewFormats() const;
		JObject getSupportedPreviewFpsRange() const;
		JObject getSupportedPreviewFrameRates() const;
		JObject getSupportedPreviewSizes() const;
		JObject getSupportedSceneModes() const;
		JObject getSupportedVideoSizes() const;
		JObject getSupportedWhiteBalance() const;
		jfloat getVerticalViewAngle() const;
		jboolean getVideoStabilization() const;
		JString getWhiteBalance() const;
		jint getZoom() const;
		JObject getZoomRatios() const;
		jboolean isAutoExposureLockSupported() const;
		jboolean isAutoWhiteBalanceLockSupported() const;
		jboolean isSmoothZoomSupported() const;
		jboolean isVideoSnapshotSupported() const;
		jboolean isVideoStabilizationSupported() const;
		jboolean isZoomSupported() const;
		void remove(JString arg0) const;
		void removeGpsData() const;
		void set(JString arg0, jint arg1) const;
		void set(JString arg0, JString arg1) const;
		void setAntibanding(JString arg0) const;
		void setAutoExposureLock(jboolean arg0) const;
		void setAutoWhiteBalanceLock(jboolean arg0) const;
		void setColorEffect(JString arg0) const;
		void setExposureCompensation(jint arg0) const;
		void setFlashMode(JString arg0) const;
		void setFocusAreas(JObject arg0) const;
		void setFocusMode(JString arg0) const;
		void setGpsAltitude(jdouble arg0) const;
		void setGpsLatitude(jdouble arg0) const;
		void setGpsLongitude(jdouble arg0) const;
		void setGpsProcessingMethod(JString arg0) const;
		void setGpsTimestamp(jlong arg0) const;
		void setJpegQuality(jint arg0) const;
		void setJpegThumbnailQuality(jint arg0) const;
		void setJpegThumbnailSize(jint arg0, jint arg1) const;
		void setMeteringAreas(JObject arg0) const;
		void setPictureFormat(jint arg0) const;
		void setPictureSize(jint arg0, jint arg1) const;
		void setPreviewFormat(jint arg0) const;
		void setPreviewFpsRange(jint arg0, jint arg1) const;
		void setPreviewFrameRate(jint arg0) const;
		void setPreviewSize(jint arg0, jint arg1) const;
		void setRecordingHint(jboolean arg0) const;
		void setRotation(jint arg0) const;
		void setSceneMode(JString arg0) const;
		void setVideoStabilization(jboolean arg0) const;
		void setWhiteBalance(JString arg0) const;
		void setZoom(jint arg0) const;
		void unflatten(JString arg0) const;
	};
} // namespace android::hardware

