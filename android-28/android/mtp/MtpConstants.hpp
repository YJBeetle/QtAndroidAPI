#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::mtp
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
		
		// QJniObject forward
		template<typename ...Ts> explicit MtpConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MtpConstants(QJniObject obj);
		
		// Constructors
		MtpConstants();
		
		// Methods
		static jboolean isAbstractObject(jint arg0);
	};
} // namespace android::mtp

