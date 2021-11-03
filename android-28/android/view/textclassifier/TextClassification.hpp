#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassification : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JObject getActions();
		jfloat getConfidenceScore(jstring arg0);
		jstring getEntity(jint arg0);
		jint getEntityCount();
		android::graphics::drawable::Drawable getIcon();
		jstring getId();
		android::content::Intent getIntent();
		jstring getLabel();
		JObject getOnClickListener();
		jstring getText();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

