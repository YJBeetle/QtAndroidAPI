#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class MediaDescription : public __JniBaseClass
	{
	public:
		// Fields
		static jlong BT_FOLDER_TYPE_ALBUMS();
		static jlong BT_FOLDER_TYPE_ARTISTS();
		static jlong BT_FOLDER_TYPE_GENRES();
		static jlong BT_FOLDER_TYPE_MIXED();
		static jlong BT_FOLDER_TYPE_PLAYLISTS();
		static jlong BT_FOLDER_TYPE_TITLES();
		static jlong BT_FOLDER_TYPE_YEARS();
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_BT_FOLDER_TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDescription(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDescription(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDescription();
		QAndroidJniObject getExtras();
		QAndroidJniObject getIconBitmap();
		QAndroidJniObject getIconUri();
		jstring getMediaId();
		QAndroidJniObject getMediaUri();
		jstring getSubtitle();
		jstring getTitle();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

