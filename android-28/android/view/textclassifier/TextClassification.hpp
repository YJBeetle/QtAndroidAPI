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
		jint describeContents() const;
		JObject getActions() const;
		jfloat getConfidenceScore(JString arg0) const;
		JString getEntity(jint arg0) const;
		jint getEntityCount() const;
		android::graphics::drawable::Drawable getIcon() const;
		JString getId() const;
		android::content::Intent getIntent() const;
		JString getLabel() const;
		JObject getOnClickListener() const;
		JString getText() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textclassifier

