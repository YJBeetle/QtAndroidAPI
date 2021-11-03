#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class InputStream;
}

namespace android::media
{
	class ExifInterface : public JObject
	{
	public:
		// Fields
		static jint ORIENTATION_FLIP_HORIZONTAL();
		static jint ORIENTATION_FLIP_VERTICAL();
		static jint ORIENTATION_NORMAL();
		static jint ORIENTATION_ROTATE_180();
		static jint ORIENTATION_ROTATE_270();
		static jint ORIENTATION_ROTATE_90();
		static jint ORIENTATION_TRANSPOSE();
		static jint ORIENTATION_TRANSVERSE();
		static jint ORIENTATION_UNDEFINED();
		static jstring TAG_APERTURE();
		static jstring TAG_APERTURE_VALUE();
		static jstring TAG_ARTIST();
		static jstring TAG_BITS_PER_SAMPLE();
		static jstring TAG_BRIGHTNESS_VALUE();
		static jstring TAG_CFA_PATTERN();
		static jstring TAG_COLOR_SPACE();
		static jstring TAG_COMPONENTS_CONFIGURATION();
		static jstring TAG_COMPRESSED_BITS_PER_PIXEL();
		static jstring TAG_COMPRESSION();
		static jstring TAG_CONTRAST();
		static jstring TAG_COPYRIGHT();
		static jstring TAG_CUSTOM_RENDERED();
		static jstring TAG_DATETIME();
		static jstring TAG_DATETIME_DIGITIZED();
		static jstring TAG_DATETIME_ORIGINAL();
		static jstring TAG_DEFAULT_CROP_SIZE();
		static jstring TAG_DEVICE_SETTING_DESCRIPTION();
		static jstring TAG_DIGITAL_ZOOM_RATIO();
		static jstring TAG_DNG_VERSION();
		static jstring TAG_EXIF_VERSION();
		static jstring TAG_EXPOSURE_BIAS_VALUE();
		static jstring TAG_EXPOSURE_INDEX();
		static jstring TAG_EXPOSURE_MODE();
		static jstring TAG_EXPOSURE_PROGRAM();
		static jstring TAG_EXPOSURE_TIME();
		static jstring TAG_FILE_SOURCE();
		static jstring TAG_FLASH();
		static jstring TAG_FLASHPIX_VERSION();
		static jstring TAG_FLASH_ENERGY();
		static jstring TAG_FOCAL_LENGTH();
		static jstring TAG_FOCAL_LENGTH_IN_35MM_FILM();
		static jstring TAG_FOCAL_PLANE_RESOLUTION_UNIT();
		static jstring TAG_FOCAL_PLANE_X_RESOLUTION();
		static jstring TAG_FOCAL_PLANE_Y_RESOLUTION();
		static jstring TAG_F_NUMBER();
		static jstring TAG_GAIN_CONTROL();
		static jstring TAG_GPS_ALTITUDE();
		static jstring TAG_GPS_ALTITUDE_REF();
		static jstring TAG_GPS_AREA_INFORMATION();
		static jstring TAG_GPS_DATESTAMP();
		static jstring TAG_GPS_DEST_BEARING();
		static jstring TAG_GPS_DEST_BEARING_REF();
		static jstring TAG_GPS_DEST_DISTANCE();
		static jstring TAG_GPS_DEST_DISTANCE_REF();
		static jstring TAG_GPS_DEST_LATITUDE();
		static jstring TAG_GPS_DEST_LATITUDE_REF();
		static jstring TAG_GPS_DEST_LONGITUDE();
		static jstring TAG_GPS_DEST_LONGITUDE_REF();
		static jstring TAG_GPS_DIFFERENTIAL();
		static jstring TAG_GPS_DOP();
		static jstring TAG_GPS_IMG_DIRECTION();
		static jstring TAG_GPS_IMG_DIRECTION_REF();
		static jstring TAG_GPS_LATITUDE();
		static jstring TAG_GPS_LATITUDE_REF();
		static jstring TAG_GPS_LONGITUDE();
		static jstring TAG_GPS_LONGITUDE_REF();
		static jstring TAG_GPS_MAP_DATUM();
		static jstring TAG_GPS_MEASURE_MODE();
		static jstring TAG_GPS_PROCESSING_METHOD();
		static jstring TAG_GPS_SATELLITES();
		static jstring TAG_GPS_SPEED();
		static jstring TAG_GPS_SPEED_REF();
		static jstring TAG_GPS_STATUS();
		static jstring TAG_GPS_TIMESTAMP();
		static jstring TAG_GPS_TRACK();
		static jstring TAG_GPS_TRACK_REF();
		static jstring TAG_GPS_VERSION_ID();
		static jstring TAG_IMAGE_DESCRIPTION();
		static jstring TAG_IMAGE_LENGTH();
		static jstring TAG_IMAGE_UNIQUE_ID();
		static jstring TAG_IMAGE_WIDTH();
		static jstring TAG_INTEROPERABILITY_INDEX();
		static jstring TAG_ISO();
		static jstring TAG_ISO_SPEED_RATINGS();
		static jstring TAG_JPEG_INTERCHANGE_FORMAT();
		static jstring TAG_JPEG_INTERCHANGE_FORMAT_LENGTH();
		static jstring TAG_LIGHT_SOURCE();
		static jstring TAG_MAKE();
		static jstring TAG_MAKER_NOTE();
		static jstring TAG_MAX_APERTURE_VALUE();
		static jstring TAG_METERING_MODE();
		static jstring TAG_MODEL();
		static jstring TAG_NEW_SUBFILE_TYPE();
		static jstring TAG_OECF();
		static jstring TAG_ORF_ASPECT_FRAME();
		static jstring TAG_ORF_PREVIEW_IMAGE_LENGTH();
		static jstring TAG_ORF_PREVIEW_IMAGE_START();
		static jstring TAG_ORF_THUMBNAIL_IMAGE();
		static jstring TAG_ORIENTATION();
		static jstring TAG_PHOTOMETRIC_INTERPRETATION();
		static jstring TAG_PIXEL_X_DIMENSION();
		static jstring TAG_PIXEL_Y_DIMENSION();
		static jstring TAG_PLANAR_CONFIGURATION();
		static jstring TAG_PRIMARY_CHROMATICITIES();
		static jstring TAG_REFERENCE_BLACK_WHITE();
		static jstring TAG_RELATED_SOUND_FILE();
		static jstring TAG_RESOLUTION_UNIT();
		static jstring TAG_ROWS_PER_STRIP();
		static jstring TAG_RW2_ISO();
		static jstring TAG_RW2_JPG_FROM_RAW();
		static jstring TAG_RW2_SENSOR_BOTTOM_BORDER();
		static jstring TAG_RW2_SENSOR_LEFT_BORDER();
		static jstring TAG_RW2_SENSOR_RIGHT_BORDER();
		static jstring TAG_RW2_SENSOR_TOP_BORDER();
		static jstring TAG_SAMPLES_PER_PIXEL();
		static jstring TAG_SATURATION();
		static jstring TAG_SCENE_CAPTURE_TYPE();
		static jstring TAG_SCENE_TYPE();
		static jstring TAG_SENSING_METHOD();
		static jstring TAG_SHARPNESS();
		static jstring TAG_SHUTTER_SPEED_VALUE();
		static jstring TAG_SOFTWARE();
		static jstring TAG_SPATIAL_FREQUENCY_RESPONSE();
		static jstring TAG_SPECTRAL_SENSITIVITY();
		static jstring TAG_STRIP_BYTE_COUNTS();
		static jstring TAG_STRIP_OFFSETS();
		static jstring TAG_SUBFILE_TYPE();
		static jstring TAG_SUBJECT_AREA();
		static jstring TAG_SUBJECT_DISTANCE();
		static jstring TAG_SUBJECT_DISTANCE_RANGE();
		static jstring TAG_SUBJECT_LOCATION();
		static jstring TAG_SUBSEC_TIME();
		static jstring TAG_SUBSEC_TIME_DIG();
		static jstring TAG_SUBSEC_TIME_DIGITIZED();
		static jstring TAG_SUBSEC_TIME_ORIG();
		static jstring TAG_SUBSEC_TIME_ORIGINAL();
		static jstring TAG_THUMBNAIL_IMAGE_LENGTH();
		static jstring TAG_THUMBNAIL_IMAGE_WIDTH();
		static jstring TAG_TRANSFER_FUNCTION();
		static jstring TAG_USER_COMMENT();
		static jstring TAG_WHITE_BALANCE();
		static jstring TAG_WHITE_POINT();
		static jstring TAG_X_RESOLUTION();
		static jstring TAG_Y_CB_CR_COEFFICIENTS();
		static jstring TAG_Y_CB_CR_POSITIONING();
		static jstring TAG_Y_CB_CR_SUB_SAMPLING();
		static jstring TAG_Y_RESOLUTION();
		static jint WHITEBALANCE_AUTO();
		static jint WHITEBALANCE_MANUAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExifInterface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExifInterface(QAndroidJniObject obj);
		
		// Constructors
		ExifInterface(java::io::FileDescriptor arg0);
		ExifInterface(java::io::InputStream arg0);
		ExifInterface(jstring arg0);
		
		// Methods
		jdouble getAltitude(jdouble arg0);
		jstring getAttribute(jstring arg0);
		jdouble getAttributeDouble(jstring arg0, jdouble arg1);
		jint getAttributeInt(jstring arg0, jint arg1);
		jboolean getLatLong(jfloatArray arg0);
		jbyteArray getThumbnail();
		android::graphics::Bitmap getThumbnailBitmap();
		jbyteArray getThumbnailBytes();
		jlongArray getThumbnailRange();
		jboolean hasThumbnail();
		jboolean isThumbnailCompressed();
		void saveAttributes();
		void setAttribute(jstring arg0, jstring arg1);
	};
} // namespace android::media

