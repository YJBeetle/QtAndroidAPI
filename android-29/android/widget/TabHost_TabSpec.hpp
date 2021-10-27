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
		
		TabHost_TabSpec(QAndroidJniObject obj);
		// Constructors
		TabHost_TabSpec() = default;
		
		// Methods
		jstring getTag();
		QAndroidJniObject setContent(android::content::Intent arg0);
		QAndroidJniObject setContent(__JniBaseClass arg0);
		QAndroidJniObject setContent(jint arg0);
		QAndroidJniObject setIndicator(android::view::View arg0);
		QAndroidJniObject setIndicator(jstring arg0);
		QAndroidJniObject setIndicator(const QString &arg0);
		QAndroidJniObject setIndicator(jstring arg0, android::graphics::drawable::Drawable arg1);
		QAndroidJniObject setIndicator(const QString &arg0, android::graphics::drawable::Drawable arg1);
	};
} // namespace android::widget

