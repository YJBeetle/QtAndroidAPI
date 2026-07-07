#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::widget::photopicker
{
	class EmbeddedPhotoPickerFeatureInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit EmbeddedPhotoPickerFeatureInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EmbeddedPhotoPickerFeatureInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jlong getAccentColor() const;
		jint getMaxSelectionLimit() const;
		JObject getMimeTypes() const;
		JObject getPreSelectedUris() const;
		jint getThemeNightMode() const;
		jboolean isOrderedSelection() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::widget::photopicker

