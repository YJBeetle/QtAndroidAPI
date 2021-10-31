#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class Activity;
}
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::media
{
	class Ringtone;
}
namespace android::net
{
	class Uri;
}

namespace android::media
{
	class RingtoneManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_RINGTONE_PICKER();
		static jstring EXTRA_RINGTONE_DEFAULT_URI();
		static jstring EXTRA_RINGTONE_EXISTING_URI();
		static jstring EXTRA_RINGTONE_INCLUDE_DRM();
		static jstring EXTRA_RINGTONE_PICKED_URI();
		static jstring EXTRA_RINGTONE_SHOW_DEFAULT();
		static jstring EXTRA_RINGTONE_SHOW_SILENT();
		static jstring EXTRA_RINGTONE_TITLE();
		static jstring EXTRA_RINGTONE_TYPE();
		static jint ID_COLUMN_INDEX();
		static jint TITLE_COLUMN_INDEX();
		static jint TYPE_ALARM();
		static jint TYPE_ALL();
		static jint TYPE_NOTIFICATION();
		static jint TYPE_RINGTONE();
		static jint URI_COLUMN_INDEX();
		
		RingtoneManager(QAndroidJniObject obj);
		// Constructors
		RingtoneManager(android::app::Activity arg0);
		RingtoneManager(android::content::Context arg0);
		RingtoneManager() = default;
		
		// Methods
		static QAndroidJniObject getActualDefaultRingtoneUri(android::content::Context arg0, jint arg1);
		static jint getDefaultType(android::net::Uri arg0);
		static QAndroidJniObject getDefaultUri(jint arg0);
		static QAndroidJniObject getRingtone(android::content::Context arg0, android::net::Uri arg1);
		static QAndroidJniObject getValidRingtoneUri(android::content::Context arg0);
		static jboolean hasHapticChannels(android::net::Uri arg0);
		static jboolean isDefault(android::net::Uri arg0);
		static QAndroidJniObject openDefaultRingtoneUri(android::content::Context arg0, android::net::Uri arg1);
		static void setActualDefaultRingtoneUri(android::content::Context arg0, jint arg1, android::net::Uri arg2);
		QAndroidJniObject getCursor();
		jboolean getIncludeDrm();
		QAndroidJniObject getRingtone(jint arg0);
		jint getRingtonePosition(android::net::Uri arg0);
		QAndroidJniObject getRingtoneUri(jint arg0);
		jboolean getStopPreviousRingtone();
		jboolean hasHapticChannels(jint arg0);
		jint inferStreamType();
		void setIncludeDrm(jboolean arg0);
		void setStopPreviousRingtone(jboolean arg0);
		void setType(jint arg0);
		void stopPreviousRingtone();
	};
} // namespace android::media

