#pragma once

#include "../../../JObject.hpp"

namespace android::widget::photopicker
{
	class EmbeddedPhotoPickerFeatureInfo;
}

namespace android::widget::photopicker
{
	class EmbeddedPhotoPickerFeatureInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EmbeddedPhotoPickerFeatureInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EmbeddedPhotoPickerFeatureInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EmbeddedPhotoPickerFeatureInfo_Builder();
		
		// Methods
		android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo build() const;
		android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder setAccentColor(jlong arg0) const;
		android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder setMaxSelectionLimit(jint arg0) const;
		android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder setMimeTypes(JObject arg0) const;
		android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder setOrderedSelection(jboolean arg0) const;
		android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder setPreSelectedUris(JObject arg0) const;
		android::widget::photopicker::EmbeddedPhotoPickerFeatureInfo_Builder setThemeNightMode(jint arg0) const;
	};
} // namespace android::widget::photopicker

