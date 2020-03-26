#pragma once

#ifndef ANDROID_MTP_MTPCONSTANTS
#define ANDROID_MTP_MTPCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::mtp
{
	class MtpConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint ASSOCIATION_TYPE_GENERIC_FOLDER();
		static jint FORMAT_3GP_CONTAINER();
		static jint FORMAT_AAC();
		static jint FORMAT_ABSTRACT_AUDIO_ALBUM();
		static jint FORMAT_ABSTRACT_AUDIO_PLAYLIST();
		static jint FORMAT_ABSTRACT_AV_PLAYLIST();
		static jint FORMAT_ABSTRACT_DOCUMENT();
		static jint FORMAT_ABSTRACT_IMAGE_ALBUM();
		static jint FORMAT_ABSTRACT_MEDIACAST();
		static jint FORMAT_ABSTRACT_MULTIMEDIA_ALBUM();
		static jint FORMAT_ABSTRACT_VIDEO_ALBUM();
		static jint FORMAT_ABSTRACT_VIDEO_PLAYLIST();
		static jint FORMAT_AIFF();
		static jint FORMAT_ASF();
		static jint FORMAT_ASSOCIATION();
		static jint FORMAT_ASX_PLAYLIST();
		static jint FORMAT_AUDIBLE();
		static jint FORMAT_AVI();
		static jint FORMAT_BMP();
		static jint FORMAT_DEFINED();
		static jint FORMAT_DNG();
		static jint FORMAT_DPOF();
		static jint FORMAT_EXECUTABLE();
		static jint FORMAT_EXIF_JPEG();
		static jint FORMAT_FLAC();
		static jint FORMAT_GIF();
		static jint FORMAT_HTML();
		static jint FORMAT_JFIF();
		static jint FORMAT_JP2();
		static jint FORMAT_JPX();
		static jint FORMAT_M3U_PLAYLIST();
		static jint FORMAT_MP2();
		static jint FORMAT_MP3();
		static jint FORMAT_MP4_CONTAINER();
		static jint FORMAT_MPEG();
		static jint FORMAT_MPL_PLAYLIST();
		static jint FORMAT_MS_EXCEL_SPREADSHEET();
		static jint FORMAT_MS_POWERPOINT_PRESENTATION();
		static jint FORMAT_MS_WORD_DOCUMENT();
		static jint FORMAT_OGG();
		static jint FORMAT_PICT();
		static jint FORMAT_PLS_PLAYLIST();
		static jint FORMAT_PNG();
		static jint FORMAT_SCRIPT();
		static jint FORMAT_TEXT();
		static jint FORMAT_TIFF();
		static jint FORMAT_TIFF_EP();
		static jint FORMAT_UNDEFINED();
		static jint FORMAT_UNDEFINED_AUDIO();
		static jint FORMAT_UNDEFINED_COLLECTION();
		static jint FORMAT_UNDEFINED_DOCUMENT();
		static jint FORMAT_UNDEFINED_FIRMWARE();
		static jint FORMAT_UNDEFINED_VIDEO();
		static jint FORMAT_WAV();
		static jint FORMAT_WINDOWS_IMAGE_FORMAT();
		static jint FORMAT_WMA();
		static jint FORMAT_WMV();
		static jint FORMAT_WPL_PLAYLIST();
		static jint FORMAT_XML_DOCUMENT();
		static jint OPERATION_CLOSE_SESSION();
		static jint OPERATION_COPY_OBJECT();
		static jint OPERATION_DELETE_OBJECT();
		static jint OPERATION_FORMAT_STORE();
		static jint OPERATION_GET_DEVICE_INFO();
		static jint OPERATION_GET_DEVICE_PROP_DESC();
		static jint OPERATION_GET_DEVICE_PROP_VALUE();
		static jint OPERATION_GET_NUM_OBJECTS();
		static jint OPERATION_GET_OBJECT();
		static jint OPERATION_GET_OBJECT_HANDLES();
		static jint OPERATION_GET_OBJECT_INFO();
		static jint OPERATION_GET_OBJECT_PROPS_SUPPORTED();
		static jint OPERATION_GET_OBJECT_PROP_DESC();
		static jint OPERATION_GET_OBJECT_PROP_VALUE();
		static jint OPERATION_GET_OBJECT_REFERENCES();
		static jint OPERATION_GET_PARTIAL_OBJECT();
		static jint OPERATION_GET_PARTIAL_OBJECT_64();
		static jint OPERATION_GET_STORAGE_INFO();
		static jint OPERATION_GET_STORAGE_I_DS();
		static jint OPERATION_GET_THUMB();
		static jint OPERATION_INITIATE_CAPTURE();
		static jint OPERATION_INITIATE_OPEN_CAPTURE();
		static jint OPERATION_MOVE_OBJECT();
		static jint OPERATION_OPEN_SESSION();
		static jint OPERATION_POWER_DOWN();
		static jint OPERATION_RESET_DEVICE();
		static jint OPERATION_RESET_DEVICE_PROP_VALUE();
		static jint OPERATION_SELF_TEST();
		static jint OPERATION_SEND_OBJECT();
		static jint OPERATION_SEND_OBJECT_INFO();
		static jint OPERATION_SET_DEVICE_PROP_VALUE();
		static jint OPERATION_SET_OBJECT_PROP_VALUE();
		static jint OPERATION_SET_OBJECT_PROTECTION();
		static jint OPERATION_SET_OBJECT_REFERENCES();
		static jint OPERATION_SKIP();
		static jint OPERATION_TERMINATE_OPEN_CAPTURE();
		static jint PROTECTION_STATUS_NONE();
		static jint PROTECTION_STATUS_NON_TRANSFERABLE_DATA();
		static jint PROTECTION_STATUS_READ_ONLY();
		static jint PROTECTION_STATUS_READ_ONLY_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isAbstractObject(jint arg0);
	};
} // namespace __jni_impl::android::mtp


namespace __jni_impl::android::mtp
{
	// Fields
	jint MtpConstants::ASSOCIATION_TYPE_GENERIC_FOLDER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"ASSOCIATION_TYPE_GENERIC_FOLDER"
		);
	}
	jint MtpConstants::FORMAT_3GP_CONTAINER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_3GP_CONTAINER"
		);
	}
	jint MtpConstants::FORMAT_AAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_AAC"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_AUDIO_ALBUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_AUDIO_ALBUM"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_AUDIO_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_AUDIO_PLAYLIST"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_AV_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_AV_PLAYLIST"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_DOCUMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_DOCUMENT"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_IMAGE_ALBUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_IMAGE_ALBUM"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_MEDIACAST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_MEDIACAST"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_MULTIMEDIA_ALBUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_MULTIMEDIA_ALBUM"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_VIDEO_ALBUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_VIDEO_ALBUM"
		);
	}
	jint MtpConstants::FORMAT_ABSTRACT_VIDEO_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ABSTRACT_VIDEO_PLAYLIST"
		);
	}
	jint MtpConstants::FORMAT_AIFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_AIFF"
		);
	}
	jint MtpConstants::FORMAT_ASF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ASF"
		);
	}
	jint MtpConstants::FORMAT_ASSOCIATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ASSOCIATION"
		);
	}
	jint MtpConstants::FORMAT_ASX_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_ASX_PLAYLIST"
		);
	}
	jint MtpConstants::FORMAT_AUDIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_AUDIBLE"
		);
	}
	jint MtpConstants::FORMAT_AVI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_AVI"
		);
	}
	jint MtpConstants::FORMAT_BMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_BMP"
		);
	}
	jint MtpConstants::FORMAT_DEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_DEFINED"
		);
	}
	jint MtpConstants::FORMAT_DNG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_DNG"
		);
	}
	jint MtpConstants::FORMAT_DPOF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_DPOF"
		);
	}
	jint MtpConstants::FORMAT_EXECUTABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_EXECUTABLE"
		);
	}
	jint MtpConstants::FORMAT_EXIF_JPEG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_EXIF_JPEG"
		);
	}
	jint MtpConstants::FORMAT_FLAC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_FLAC"
		);
	}
	jint MtpConstants::FORMAT_GIF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_GIF"
		);
	}
	jint MtpConstants::FORMAT_HTML()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_HTML"
		);
	}
	jint MtpConstants::FORMAT_JFIF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_JFIF"
		);
	}
	jint MtpConstants::FORMAT_JP2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_JP2"
		);
	}
	jint MtpConstants::FORMAT_JPX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_JPX"
		);
	}
	jint MtpConstants::FORMAT_M3U_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_M3U_PLAYLIST"
		);
	}
	jint MtpConstants::FORMAT_MP2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_MP2"
		);
	}
	jint MtpConstants::FORMAT_MP3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_MP3"
		);
	}
	jint MtpConstants::FORMAT_MP4_CONTAINER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_MP4_CONTAINER"
		);
	}
	jint MtpConstants::FORMAT_MPEG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_MPEG"
		);
	}
	jint MtpConstants::FORMAT_MPL_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_MPL_PLAYLIST"
		);
	}
	jint MtpConstants::FORMAT_MS_EXCEL_SPREADSHEET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_MS_EXCEL_SPREADSHEET"
		);
	}
	jint MtpConstants::FORMAT_MS_POWERPOINT_PRESENTATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_MS_POWERPOINT_PRESENTATION"
		);
	}
	jint MtpConstants::FORMAT_MS_WORD_DOCUMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_MS_WORD_DOCUMENT"
		);
	}
	jint MtpConstants::FORMAT_OGG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_OGG"
		);
	}
	jint MtpConstants::FORMAT_PICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_PICT"
		);
	}
	jint MtpConstants::FORMAT_PLS_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_PLS_PLAYLIST"
		);
	}
	jint MtpConstants::FORMAT_PNG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_PNG"
		);
	}
	jint MtpConstants::FORMAT_SCRIPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_SCRIPT"
		);
	}
	jint MtpConstants::FORMAT_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_TEXT"
		);
	}
	jint MtpConstants::FORMAT_TIFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_TIFF"
		);
	}
	jint MtpConstants::FORMAT_TIFF_EP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_TIFF_EP"
		);
	}
	jint MtpConstants::FORMAT_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_UNDEFINED"
		);
	}
	jint MtpConstants::FORMAT_UNDEFINED_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_UNDEFINED_AUDIO"
		);
	}
	jint MtpConstants::FORMAT_UNDEFINED_COLLECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_UNDEFINED_COLLECTION"
		);
	}
	jint MtpConstants::FORMAT_UNDEFINED_DOCUMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_UNDEFINED_DOCUMENT"
		);
	}
	jint MtpConstants::FORMAT_UNDEFINED_FIRMWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_UNDEFINED_FIRMWARE"
		);
	}
	jint MtpConstants::FORMAT_UNDEFINED_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_UNDEFINED_VIDEO"
		);
	}
	jint MtpConstants::FORMAT_WAV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_WAV"
		);
	}
	jint MtpConstants::FORMAT_WINDOWS_IMAGE_FORMAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_WINDOWS_IMAGE_FORMAT"
		);
	}
	jint MtpConstants::FORMAT_WMA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_WMA"
		);
	}
	jint MtpConstants::FORMAT_WMV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_WMV"
		);
	}
	jint MtpConstants::FORMAT_WPL_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_WPL_PLAYLIST"
		);
	}
	jint MtpConstants::FORMAT_XML_DOCUMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"FORMAT_XML_DOCUMENT"
		);
	}
	jint MtpConstants::OPERATION_CLOSE_SESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_CLOSE_SESSION"
		);
	}
	jint MtpConstants::OPERATION_COPY_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_COPY_OBJECT"
		);
	}
	jint MtpConstants::OPERATION_DELETE_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_DELETE_OBJECT"
		);
	}
	jint MtpConstants::OPERATION_FORMAT_STORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_FORMAT_STORE"
		);
	}
	jint MtpConstants::OPERATION_GET_DEVICE_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_DEVICE_INFO"
		);
	}
	jint MtpConstants::OPERATION_GET_DEVICE_PROP_DESC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_DEVICE_PROP_DESC"
		);
	}
	jint MtpConstants::OPERATION_GET_DEVICE_PROP_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_DEVICE_PROP_VALUE"
		);
	}
	jint MtpConstants::OPERATION_GET_NUM_OBJECTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_NUM_OBJECTS"
		);
	}
	jint MtpConstants::OPERATION_GET_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_OBJECT"
		);
	}
	jint MtpConstants::OPERATION_GET_OBJECT_HANDLES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_OBJECT_HANDLES"
		);
	}
	jint MtpConstants::OPERATION_GET_OBJECT_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_OBJECT_INFO"
		);
	}
	jint MtpConstants::OPERATION_GET_OBJECT_PROPS_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_OBJECT_PROPS_SUPPORTED"
		);
	}
	jint MtpConstants::OPERATION_GET_OBJECT_PROP_DESC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_OBJECT_PROP_DESC"
		);
	}
	jint MtpConstants::OPERATION_GET_OBJECT_PROP_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_OBJECT_PROP_VALUE"
		);
	}
	jint MtpConstants::OPERATION_GET_OBJECT_REFERENCES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_OBJECT_REFERENCES"
		);
	}
	jint MtpConstants::OPERATION_GET_PARTIAL_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_PARTIAL_OBJECT"
		);
	}
	jint MtpConstants::OPERATION_GET_PARTIAL_OBJECT_64()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_PARTIAL_OBJECT_64"
		);
	}
	jint MtpConstants::OPERATION_GET_STORAGE_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_STORAGE_INFO"
		);
	}
	jint MtpConstants::OPERATION_GET_STORAGE_I_DS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_STORAGE_I_DS"
		);
	}
	jint MtpConstants::OPERATION_GET_THUMB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_GET_THUMB"
		);
	}
	jint MtpConstants::OPERATION_INITIATE_CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_INITIATE_CAPTURE"
		);
	}
	jint MtpConstants::OPERATION_INITIATE_OPEN_CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_INITIATE_OPEN_CAPTURE"
		);
	}
	jint MtpConstants::OPERATION_MOVE_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_MOVE_OBJECT"
		);
	}
	jint MtpConstants::OPERATION_OPEN_SESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_OPEN_SESSION"
		);
	}
	jint MtpConstants::OPERATION_POWER_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_POWER_DOWN"
		);
	}
	jint MtpConstants::OPERATION_RESET_DEVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_RESET_DEVICE"
		);
	}
	jint MtpConstants::OPERATION_RESET_DEVICE_PROP_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_RESET_DEVICE_PROP_VALUE"
		);
	}
	jint MtpConstants::OPERATION_SELF_TEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_SELF_TEST"
		);
	}
	jint MtpConstants::OPERATION_SEND_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_SEND_OBJECT"
		);
	}
	jint MtpConstants::OPERATION_SEND_OBJECT_INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_SEND_OBJECT_INFO"
		);
	}
	jint MtpConstants::OPERATION_SET_DEVICE_PROP_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_SET_DEVICE_PROP_VALUE"
		);
	}
	jint MtpConstants::OPERATION_SET_OBJECT_PROP_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_SET_OBJECT_PROP_VALUE"
		);
	}
	jint MtpConstants::OPERATION_SET_OBJECT_PROTECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_SET_OBJECT_PROTECTION"
		);
	}
	jint MtpConstants::OPERATION_SET_OBJECT_REFERENCES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_SET_OBJECT_REFERENCES"
		);
	}
	jint MtpConstants::OPERATION_SKIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_SKIP"
		);
	}
	jint MtpConstants::OPERATION_TERMINATE_OPEN_CAPTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"OPERATION_TERMINATE_OPEN_CAPTURE"
		);
	}
	jint MtpConstants::PROTECTION_STATUS_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"PROTECTION_STATUS_NONE"
		);
	}
	jint MtpConstants::PROTECTION_STATUS_NON_TRANSFERABLE_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"PROTECTION_STATUS_NON_TRANSFERABLE_DATA"
		);
	}
	jint MtpConstants::PROTECTION_STATUS_READ_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"PROTECTION_STATUS_READ_ONLY"
		);
	}
	jint MtpConstants::PROTECTION_STATUS_READ_ONLY_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.mtp.MtpConstants",
			"PROTECTION_STATUS_READ_ONLY_DATA"
		);
	}
	
	// Constructors
	void MtpConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.mtp.MtpConstants",
			"()V");
	}
	
	// Methods
	jboolean MtpConstants::isAbstractObject(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.mtp.MtpConstants",
			"isAbstractObject",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::mtp

namespace android::mtp
{
	class MtpConstants : public __jni_impl::android::mtp::MtpConstants
	{
	public:
		MtpConstants(QAndroidJniObject obj) { __thiz = obj; }
		MtpConstants()
		{
			__constructor();
		}
	};
} // namespace android::mtp

#endif // ANDROID_MTP_MTPCONSTANTS

