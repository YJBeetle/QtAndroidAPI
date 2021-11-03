#pragma once

#include "../../JObject.hpp"

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
class JString;
class JObject;
class JString;

namespace android::media
{
	class MediaDescription : public JObject
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
		static JObject CREATOR();
		static JString EXTRA_BT_FOLDER_TYPE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDescription(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDescription() const;
		android::os::Bundle getExtras() const;
		android::graphics::Bitmap getIconBitmap() const;
		android::net::Uri getIconUri() const;
		JString getMediaId() const;
		android::net::Uri getMediaUri() const;
		JString getSubtitle() const;
		JString getTitle() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

