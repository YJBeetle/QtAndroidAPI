#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class ResolveInfo;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}

namespace android::app
{
	class LauncherActivity_ListItem : public __JniBaseClass
	{
	public:
		// Fields
		jstring className();
		QAndroidJniObject extras();
		QAndroidJniObject icon();
		jstring label();
		jstring packageName();
		QAndroidJniObject resolveInfo();
		
		LauncherActivity_ListItem(QAndroidJniObject obj);
		// Constructors
		LauncherActivity_ListItem();
		
		// Methods
	};
} // namespace android::app

