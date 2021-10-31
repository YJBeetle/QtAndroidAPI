#include "../graphics/Bitmap.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"
#include "./ExifInterface.hpp"

namespace android::media
{
	// Fields
	jint ExifInterface::ORIENTATION_FLIP_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_FLIP_HORIZONTAL"
		);
	}
	jint ExifInterface::ORIENTATION_FLIP_VERTICAL()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_FLIP_VERTICAL"
		);
	}
	jint ExifInterface::ORIENTATION_NORMAL()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_NORMAL"
		);
	}
	jint ExifInterface::ORIENTATION_ROTATE_180()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_ROTATE_180"
		);
	}
	jint ExifInterface::ORIENTATION_ROTATE_270()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_ROTATE_270"
		);
	}
	jint ExifInterface::ORIENTATION_ROTATE_90()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_ROTATE_90"
		);
	}
	jint ExifInterface::ORIENTATION_TRANSPOSE()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_TRANSPOSE"
		);
	}
	jint ExifInterface::ORIENTATION_TRANSVERSE()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_TRANSVERSE"
		);
	}
	jint ExifInterface::ORIENTATION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_UNDEFINED"
		);
	}
	jstring ExifInterface::TAG_APERTURE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_APERTURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_APERTURE_VALUE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_APERTURE_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ARTIST()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_BITS_PER_SAMPLE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_BITS_PER_SAMPLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_BRIGHTNESS_VALUE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_BRIGHTNESS_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_CFA_PATTERN()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_CFA_PATTERN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_COLOR_SPACE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COLOR_SPACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_COMPONENTS_CONFIGURATION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COMPONENTS_CONFIGURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_COMPRESSED_BITS_PER_PIXEL()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COMPRESSED_BITS_PER_PIXEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_COMPRESSION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COMPRESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_CONTRAST()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_CONTRAST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_COPYRIGHT()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COPYRIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_CUSTOM_RENDERED()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_CUSTOM_RENDERED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_DATETIME()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DATETIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_DATETIME_DIGITIZED()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DATETIME_DIGITIZED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_DATETIME_ORIGINAL()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DATETIME_ORIGINAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_DEFAULT_CROP_SIZE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DEFAULT_CROP_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_DEVICE_SETTING_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DEVICE_SETTING_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_DIGITAL_ZOOM_RATIO()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DIGITAL_ZOOM_RATIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_DNG_VERSION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DNG_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_EXIF_VERSION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXIF_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_EXPOSURE_BIAS_VALUE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_BIAS_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_EXPOSURE_INDEX()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_EXPOSURE_MODE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_EXPOSURE_PROGRAM()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_PROGRAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_EXPOSURE_TIME()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FILE_SOURCE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FILE_SOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FLASH()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FLASH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FLASHPIX_VERSION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FLASHPIX_VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FLASH_ENERGY()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FLASH_ENERGY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FOCAL_LENGTH()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FOCAL_LENGTH_IN_35MM_FILM()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_LENGTH_IN_35MM_FILM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FOCAL_PLANE_RESOLUTION_UNIT()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_PLANE_RESOLUTION_UNIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FOCAL_PLANE_X_RESOLUTION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_PLANE_X_RESOLUTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_FOCAL_PLANE_Y_RESOLUTION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_PLANE_Y_RESOLUTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_F_NUMBER()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_F_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GAIN_CONTROL()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GAIN_CONTROL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_ALTITUDE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_ALTITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_ALTITUDE_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_ALTITUDE_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_AREA_INFORMATION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_AREA_INFORMATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DATESTAMP()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DATESTAMP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DEST_BEARING()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_BEARING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DEST_BEARING_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_BEARING_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DEST_DISTANCE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_DISTANCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DEST_DISTANCE_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_DISTANCE_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DEST_LATITUDE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_LATITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DEST_LATITUDE_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_LATITUDE_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DEST_LONGITUDE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_LONGITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DEST_LONGITUDE_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_LONGITUDE_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DIFFERENTIAL()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DIFFERENTIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_DOP()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DOP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_IMG_DIRECTION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_IMG_DIRECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_IMG_DIRECTION_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_IMG_DIRECTION_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_LATITUDE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_LATITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_LATITUDE_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_LATITUDE_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_LONGITUDE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_LONGITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_LONGITUDE_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_LONGITUDE_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_MAP_DATUM()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_MAP_DATUM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_MEASURE_MODE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_MEASURE_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_PROCESSING_METHOD()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_PROCESSING_METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_SATELLITES()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_SATELLITES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_SPEED()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_SPEED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_SPEED_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_SPEED_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_STATUS()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_TIMESTAMP()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_TIMESTAMP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_TRACK()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_TRACK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_TRACK_REF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_TRACK_REF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_GPS_VERSION_ID()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_VERSION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_IMAGE_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_IMAGE_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_IMAGE_LENGTH()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_IMAGE_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_IMAGE_UNIQUE_ID()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_IMAGE_UNIQUE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_IMAGE_WIDTH()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_IMAGE_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_INTEROPERABILITY_INDEX()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_INTEROPERABILITY_INDEX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ISO()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ISO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ISO_SPEED_RATINGS()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ISO_SPEED_RATINGS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_JPEG_INTERCHANGE_FORMAT()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_JPEG_INTERCHANGE_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_JPEG_INTERCHANGE_FORMAT_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_LIGHT_SOURCE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_LIGHT_SOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_MAKE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_MAKE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_MAKER_NOTE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_MAKER_NOTE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_MAX_APERTURE_VALUE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_MAX_APERTURE_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_METERING_MODE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_METERING_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_MODEL()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_MODEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_NEW_SUBFILE_TYPE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_NEW_SUBFILE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_OECF()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_OECF",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ORF_ASPECT_FRAME()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORF_ASPECT_FRAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ORF_PREVIEW_IMAGE_LENGTH()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORF_PREVIEW_IMAGE_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ORF_PREVIEW_IMAGE_START()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORF_PREVIEW_IMAGE_START",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ORF_THUMBNAIL_IMAGE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORF_THUMBNAIL_IMAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ORIENTATION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORIENTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_PHOTOMETRIC_INTERPRETATION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PHOTOMETRIC_INTERPRETATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_PIXEL_X_DIMENSION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PIXEL_X_DIMENSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_PIXEL_Y_DIMENSION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PIXEL_Y_DIMENSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_PLANAR_CONFIGURATION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PLANAR_CONFIGURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_PRIMARY_CHROMATICITIES()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PRIMARY_CHROMATICITIES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_REFERENCE_BLACK_WHITE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_REFERENCE_BLACK_WHITE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_RELATED_SOUND_FILE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RELATED_SOUND_FILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_RESOLUTION_UNIT()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RESOLUTION_UNIT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_ROWS_PER_STRIP()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ROWS_PER_STRIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_RW2_ISO()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_ISO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_RW2_JPG_FROM_RAW()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_JPG_FROM_RAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_RW2_SENSOR_BOTTOM_BORDER()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_SENSOR_BOTTOM_BORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_RW2_SENSOR_LEFT_BORDER()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_SENSOR_LEFT_BORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_RW2_SENSOR_RIGHT_BORDER()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_SENSOR_RIGHT_BORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_RW2_SENSOR_TOP_BORDER()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_SENSOR_TOP_BORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SAMPLES_PER_PIXEL()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SAMPLES_PER_PIXEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SATURATION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SATURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SCENE_CAPTURE_TYPE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SCENE_CAPTURE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SCENE_TYPE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SCENE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SENSING_METHOD()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SENSING_METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SHARPNESS()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SHARPNESS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SHUTTER_SPEED_VALUE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SHUTTER_SPEED_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SOFTWARE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SOFTWARE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SPATIAL_FREQUENCY_RESPONSE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SPATIAL_FREQUENCY_RESPONSE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SPECTRAL_SENSITIVITY()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SPECTRAL_SENSITIVITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_STRIP_BYTE_COUNTS()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_STRIP_BYTE_COUNTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_STRIP_OFFSETS()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_STRIP_OFFSETS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBFILE_TYPE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBFILE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBJECT_AREA()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBJECT_AREA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBJECT_DISTANCE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBJECT_DISTANCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBJECT_DISTANCE_RANGE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBJECT_DISTANCE_RANGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBJECT_LOCATION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBJECT_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBSEC_TIME()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBSEC_TIME_DIG()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME_DIG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBSEC_TIME_DIGITIZED()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME_DIGITIZED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBSEC_TIME_ORIG()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME_ORIG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_SUBSEC_TIME_ORIGINAL()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME_ORIGINAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_THUMBNAIL_IMAGE_LENGTH()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_THUMBNAIL_IMAGE_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_THUMBNAIL_IMAGE_WIDTH()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_THUMBNAIL_IMAGE_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_TRANSFER_FUNCTION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_TRANSFER_FUNCTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_USER_COMMENT()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_USER_COMMENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_WHITE_BALANCE()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_WHITE_BALANCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_WHITE_POINT()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_WHITE_POINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_X_RESOLUTION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_X_RESOLUTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_Y_CB_CR_COEFFICIENTS()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_Y_CB_CR_COEFFICIENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_Y_CB_CR_POSITIONING()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_Y_CB_CR_POSITIONING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_Y_CB_CR_SUB_SAMPLING()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_Y_CB_CR_SUB_SAMPLING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ExifInterface::TAG_Y_RESOLUTION()
	{
		return getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_Y_RESOLUTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ExifInterface::WHITEBALANCE_AUTO()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"WHITEBALANCE_AUTO"
		);
	}
	jint ExifInterface::WHITEBALANCE_MANUAL()
	{
		return getStaticField<jint>(
			"android.media.ExifInterface",
			"WHITEBALANCE_MANUAL"
		);
	}
	
	// QJniObject forward
	ExifInterface::ExifInterface(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ExifInterface::ExifInterface(java::io::FileDescriptor arg0)
		: __JniBaseClass(
			"android.media.ExifInterface",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	ExifInterface::ExifInterface(java::io::InputStream arg0)
		: __JniBaseClass(
			"android.media.ExifInterface",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	ExifInterface::ExifInterface(jstring arg0)
		: __JniBaseClass(
			"android.media.ExifInterface",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jdouble ExifInterface::getAltitude(jdouble arg0)
	{
		return callMethod<jdouble>(
			"getAltitude",
			"(D)D",
			arg0
		);
	}
	jstring ExifInterface::getAttribute(jstring arg0)
	{
		return callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jdouble ExifInterface::getAttributeDouble(jstring arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"getAttributeDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jint ExifInterface::getAttributeInt(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"getAttributeInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jboolean ExifInterface::getLatLong(jfloatArray arg0)
	{
		return callMethod<jboolean>(
			"getLatLong",
			"([F)Z",
			arg0
		);
	}
	jbyteArray ExifInterface::getThumbnail()
	{
		return callObjectMethod(
			"getThumbnail",
			"()[B"
		).object<jbyteArray>();
	}
	android::graphics::Bitmap ExifInterface::getThumbnailBitmap()
	{
		return callObjectMethod(
			"getThumbnailBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jbyteArray ExifInterface::getThumbnailBytes()
	{
		return callObjectMethod(
			"getThumbnailBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jlongArray ExifInterface::getThumbnailRange()
	{
		return callObjectMethod(
			"getThumbnailRange",
			"()[J"
		).object<jlongArray>();
	}
	jboolean ExifInterface::hasThumbnail()
	{
		return callMethod<jboolean>(
			"hasThumbnail",
			"()Z"
		);
	}
	jboolean ExifInterface::isThumbnailCompressed()
	{
		return callMethod<jboolean>(
			"isThumbnailCompressed",
			"()Z"
		);
	}
	void ExifInterface::saveAttributes()
	{
		callMethod<void>(
			"saveAttributes",
			"()V"
		);
	}
	void ExifInterface::setAttribute(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::media

