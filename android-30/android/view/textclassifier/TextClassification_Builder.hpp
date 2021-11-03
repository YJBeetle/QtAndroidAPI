#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class RemoteAction;
}
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
namespace android::view::textclassifier
{
	class TextClassification;
}
class JString;

namespace android::view::textclassifier
{
	class TextClassification_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassification_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassification_Builder();
		
		// Methods
		android::view::textclassifier::TextClassification_Builder addAction(android::app::RemoteAction arg0);
		android::view::textclassifier::TextClassification build();
		android::view::textclassifier::TextClassification_Builder setEntityType(JString arg0, jfloat arg1);
		android::view::textclassifier::TextClassification_Builder setExtras(android::os::Bundle arg0);
		android::view::textclassifier::TextClassification_Builder setIcon(android::graphics::drawable::Drawable arg0);
		android::view::textclassifier::TextClassification_Builder setId(JString arg0);
		android::view::textclassifier::TextClassification_Builder setIntent(android::content::Intent arg0);
		android::view::textclassifier::TextClassification_Builder setLabel(JString arg0);
		android::view::textclassifier::TextClassification_Builder setOnClickListener(JObject arg0);
		android::view::textclassifier::TextClassification_Builder setText(JString arg0);
	};
} // namespace android::view::textclassifier

