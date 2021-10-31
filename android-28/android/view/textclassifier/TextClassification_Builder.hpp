#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace android::view::textclassifier
{
	class TextClassification;
}

namespace android::view::textclassifier
{
	class TextClassification_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassification_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification_Builder(QJniObject obj);
		
		// Constructors
		TextClassification_Builder();
		
		// Methods
		android::view::textclassifier::TextClassification_Builder addAction(android::app::RemoteAction arg0);
		android::view::textclassifier::TextClassification build();
		android::view::textclassifier::TextClassification_Builder setEntityType(jstring arg0, jfloat arg1);
		android::view::textclassifier::TextClassification_Builder setIcon(android::graphics::drawable::Drawable arg0);
		android::view::textclassifier::TextClassification_Builder setId(jstring arg0);
		android::view::textclassifier::TextClassification_Builder setIntent(android::content::Intent arg0);
		android::view::textclassifier::TextClassification_Builder setLabel(jstring arg0);
		android::view::textclassifier::TextClassification_Builder setOnClickListener(__JniBaseClass arg0);
		android::view::textclassifier::TextClassification_Builder setText(jstring arg0);
	};
} // namespace android::view::textclassifier

