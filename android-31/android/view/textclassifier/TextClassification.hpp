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
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::view::textclassifier
{
	class TextClassification : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JObject getActions();
		jfloat getConfidenceScore(JString arg0);
		JString getEntity(jint arg0);
		jint getEntityCount();
		android::os::Bundle getExtras();
		android::graphics::drawable::Drawable getIcon();
		JString getId();
		android::content::Intent getIntent();
		JString getLabel();
		JObject getOnClickListener();
		JString getText();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

