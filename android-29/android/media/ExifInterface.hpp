#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JFloatArray;
class JLongArray;
namespace android::graphics
{
	class Bitmap;
}
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class InputStream;
}
class JString;

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
		static JString TAG_APERTURE();
		static JString TAG_APERTURE_VALUE();
		static JString TAG_ARTIST();
		static JString TAG_BITS_PER_SAMPLE();
		static JString TAG_BRIGHTNESS_VALUE();
		static JString TAG_CFA_PATTERN();
		static JString TAG_COLOR_SPACE();
		static JString TAG_COMPONENTS_CONFIGURATION();
		static JString TAG_COMPRESSED_BITS_PER_PIXEL();
		static JString TAG_COMPRESSION();
		static JString TAG_CONTRAST();
		static JString TAG_COPYRIGHT();
		static JString TAG_CUSTOM_RENDERED();
		static JString TAG_DATETIME();
		static JString TAG_DATETIME_DIGITIZED();
		static JString TAG_DATETIME_ORIGINAL();
		static JString TAG_DEFAULT_CROP_SIZE();
		static JString TAG_DEVICE_SETTING_DESCRIPTION();
		static JString TAG_DIGITAL_ZOOM_RATIO();
		static JString TAG_DNG_VERSION();
		static JString TAG_EXIF_VERSION();
		static JString TAG_EXPOSURE_BIAS_VALUE();
		static JString TAG_EXPOSURE_INDEX();
		static JString TAG_EXPOSURE_MODE();
		static JString TAG_EXPOSURE_PROGRAM();
		static JString TAG_EXPOSURE_TIME();
		static JString TAG_FILE_SOURCE();
		static JString TAG_FLASH();
		static JString TAG_FLASHPIX_VERSION();
		static JString TAG_FLASH_ENERGY();
		static JString TAG_FOCAL_LENGTH();
		static JString TAG_FOCAL_LENGTH_IN_35MM_FILM();
		static JString TAG_FOCAL_PLANE_RESOLUTION_UNIT();
		static JString TAG_FOCAL_PLANE_X_RESOLUTION();
		static JString TAG_FOCAL_PLANE_Y_RESOLUTION();
		static JString TAG_F_NUMBER();
		static JString TAG_GAIN_CONTROL();
		static JString TAG_GPS_ALTITUDE();
		static JString TAG_GPS_ALTITUDE_REF();
		static JString TAG_GPS_AREA_INFORMATION();
		static JString TAG_GPS_DATESTAMP();
		static JString TAG_GPS_DEST_BEARING();
		static JString TAG_GPS_DEST_BEARING_REF();
		static JString TAG_GPS_DEST_DISTANCE();
		static JString TAG_GPS_DEST_DISTANCE_REF();
		static JString TAG_GPS_DEST_LATITUDE();
		static JString TAG_GPS_DEST_LATITUDE_REF();
		static JString TAG_GPS_DEST_LONGITUDE();
		static JString TAG_GPS_DEST_LONGITUDE_REF();
		static JString TAG_GPS_DIFFERENTIAL();
		static JString TAG_GPS_DOP();
		static JString TAG_GPS_IMG_DIRECTION();
		static JString TAG_GPS_IMG_DIRECTION_REF();
		static JString TAG_GPS_LATITUDE();
		static JString TAG_GPS_LATITUDE_REF();
		static JString TAG_GPS_LONGITUDE();
		static JString TAG_GPS_LONGITUDE_REF();
		static JString TAG_GPS_MAP_DATUM();
		static JString TAG_GPS_MEASURE_MODE();
		static JString TAG_GPS_PROCESSING_METHOD();
		static JString TAG_GPS_SATELLITES();
		static JString TAG_GPS_SPEED();
		static JString TAG_GPS_SPEED_REF();
		static JString TAG_GPS_STATUS();
		static JString TAG_GPS_TIMESTAMP();
		static JString TAG_GPS_TRACK();
		static JString TAG_GPS_TRACK_REF();
		static JString TAG_GPS_VERSION_ID();
		static JString TAG_IMAGE_DESCRIPTION();
		static JString TAG_IMAGE_LENGTH();
		static JString TAG_IMAGE_UNIQUE_ID();
		static JString TAG_IMAGE_WIDTH();
		static JString TAG_INTEROPERABILITY_INDEX();
		static JString TAG_ISO();
		static JString TAG_ISO_SPEED_RATINGS();
		static JString TAG_JPEG_INTERCHANGE_FORMAT();
		static JString TAG_JPEG_INTERCHANGE_FORMAT_LENGTH();
		static JString TAG_LIGHT_SOURCE();
		static JString TAG_MAKE();
		static JString TAG_MAKER_NOTE();
		static JString TAG_MAX_APERTURE_VALUE();
		static JString TAG_METERING_MODE();
		static JString TAG_MODEL();
		static JString TAG_NEW_SUBFILE_TYPE();
		static JString TAG_OECF();
		static JString TAG_ORF_ASPECT_FRAME();
		static JString TAG_ORF_PREVIEW_IMAGE_LENGTH();
		static JString TAG_ORF_PREVIEW_IMAGE_START();
		static JString TAG_ORF_THUMBNAIL_IMAGE();
		static JString TAG_ORIENTATION();
		static JString TAG_PHOTOMETRIC_INTERPRETATION();
		static JString TAG_PIXEL_X_DIMENSION();
		static JString TAG_PIXEL_Y_DIMENSION();
		static JString TAG_PLANAR_CONFIGURATION();
		static JString TAG_PRIMARY_CHROMATICITIES();
		static JString TAG_REFERENCE_BLACK_WHITE();
		static JString TAG_RELATED_SOUND_FILE();
		static JString TAG_RESOLUTION_UNIT();
		static JString TAG_ROWS_PER_STRIP();
		static JString TAG_RW2_ISO();
		static JString TAG_RW2_JPG_FROM_RAW();
		static JString TAG_RW2_SENSOR_BOTTOM_BORDER();
		static JString TAG_RW2_SENSOR_LEFT_BORDER();
		static JString TAG_RW2_SENSOR_RIGHT_BORDER();
		static JString TAG_RW2_SENSOR_TOP_BORDER();
		static JString TAG_SAMPLES_PER_PIXEL();
		static JString TAG_SATURATION();
		static JString TAG_SCENE_CAPTURE_TYPE();
		static JString TAG_SCENE_TYPE();
		static JString TAG_SENSING_METHOD();
		static JString TAG_SHARPNESS();
		static JString TAG_SHUTTER_SPEED_VALUE();
		static JString TAG_SOFTWARE();
		static JString TAG_SPATIAL_FREQUENCY_RESPONSE();
		static JString TAG_SPECTRAL_SENSITIVITY();
		static JString TAG_STRIP_BYTE_COUNTS();
		static JString TAG_STRIP_OFFSETS();
		static JString TAG_SUBFILE_TYPE();
		static JString TAG_SUBJECT_AREA();
		static JString TAG_SUBJECT_DISTANCE();
		static JString TAG_SUBJECT_DISTANCE_RANGE();
		static JString TAG_SUBJECT_LOCATION();
		static JString TAG_SUBSEC_TIME();
		static JString TAG_SUBSEC_TIME_DIG();
		static JString TAG_SUBSEC_TIME_DIGITIZED();
		static JString TAG_SUBSEC_TIME_ORIG();
		static JString TAG_SUBSEC_TIME_ORIGINAL();
		static JString TAG_THUMBNAIL_IMAGE_LENGTH();
		static JString TAG_THUMBNAIL_IMAGE_WIDTH();
		static JString TAG_TRANSFER_FUNCTION();
		static JString TAG_USER_COMMENT();
		static JString TAG_WHITE_BALANCE();
		static JString TAG_WHITE_POINT();
		static JString TAG_XMP();
		static JString TAG_X_RESOLUTION();
		static JString TAG_Y_CB_CR_COEFFICIENTS();
		static JString TAG_Y_CB_CR_POSITIONING();
		static JString TAG_Y_CB_CR_SUB_SAMPLING();
		static JString TAG_Y_RESOLUTION();
		static jint WHITEBALANCE_AUTO();
		static jint WHITEBALANCE_MANUAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExifInterface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExifInterface(QJniObject obj);
		
		// Constructors
		ExifInterface(java::io::File arg0);
		ExifInterface(java::io::FileDescriptor arg0);
		ExifInterface(java::io::InputStream arg0);
		ExifInterface(JString arg0);
		
		// Methods
		jdouble getAltitude(jdouble arg0) const;
		JString getAttribute(JString arg0) const;
		JByteArray getAttributeBytes(JString arg0) const;
		jdouble getAttributeDouble(JString arg0, jdouble arg1) const;
		jint getAttributeInt(JString arg0, jint arg1) const;
		JLongArray getAttributeRange(JString arg0) const;
		jboolean getLatLong(JFloatArray arg0) const;
		JByteArray getThumbnail() const;
		android::graphics::Bitmap getThumbnailBitmap() const;
		JByteArray getThumbnailBytes() const;
		JLongArray getThumbnailRange() const;
		jboolean hasAttribute(JString arg0) const;
		jboolean hasThumbnail() const;
		jboolean isThumbnailCompressed() const;
		void saveAttributes() const;
		void setAttribute(JString arg0, JString arg1) const;
	};
} // namespace android::media

