#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class TabHost;
}

namespace android::widget
{
	class TabHost_TabSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TabHost_TabSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TabHost_TabSpec(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getTag();
		android::widget::TabHost_TabSpec setContent(android::content::Intent arg0);
		android::widget::TabHost_TabSpec setContent(__JniBaseClass arg0);
		android::widget::TabHost_TabSpec setContent(jint arg0);
		android::widget::TabHost_TabSpec setIndicator(android::view::View arg0);
		android::widget::TabHost_TabSpec setIndicator(jstring arg0);
		android::widget::TabHost_TabSpec setIndicator(jstring arg0, android::graphics::drawable::Drawable arg1);
	};
} // namespace android::widget

