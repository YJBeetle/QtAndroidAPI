#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class LauncherActivity;
}
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::app
{
	class LauncherActivity_IconResizer : public __JniBaseClass
	{
	public:
		// Fields
		
		LauncherActivity_IconResizer(QAndroidJniObject obj);
		// Constructors
		LauncherActivity_IconResizer(android::app::LauncherActivity &arg0);
		LauncherActivity_IconResizer() = default;
		
		// Methods
		QAndroidJniObject createIconThumbnail(android::graphics::drawable::Drawable arg0);
	};
} // namespace android::app

