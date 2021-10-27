#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Genres : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring ENTRY_CONTENT_TYPE();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		MediaStore_Audio_Genres(QAndroidJniObject obj);
		// Constructors
		MediaStore_Audio_Genres();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(const QString &arg0);
		static QAndroidJniObject getContentUriForAudioId(jstring arg0, jint arg1);
		static QAndroidJniObject getContentUriForAudioId(const QString &arg0, jint arg1);
	};
} // namespace android::provider

