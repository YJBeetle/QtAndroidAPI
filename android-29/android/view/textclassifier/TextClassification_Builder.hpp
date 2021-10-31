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
namespace android::os
{
	class Bundle;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassification_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification_Builder(QAndroidJniObject obj);
		
		// Constructors
		TextClassification_Builder();
		
		// Methods
		QAndroidJniObject addAction(android::app::RemoteAction arg0);
		QAndroidJniObject build();
		QAndroidJniObject setEntityType(jstring arg0, jfloat arg1);
		QAndroidJniObject setExtras(android::os::Bundle arg0);
		QAndroidJniObject setIcon(android::graphics::drawable::Drawable arg0);
		QAndroidJniObject setId(jstring arg0);
		QAndroidJniObject setIntent(android::content::Intent arg0);
		QAndroidJniObject setLabel(jstring arg0);
		QAndroidJniObject setOnClickListener(__JniBaseClass arg0);
		QAndroidJniObject setText(jstring arg0);
	};
} // namespace android::view::textclassifier

