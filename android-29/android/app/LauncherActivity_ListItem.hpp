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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LauncherActivity_ListItem(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LauncherActivity_ListItem(QAndroidJniObject obj);
		
		// Constructors
		LauncherActivity_ListItem();
		
		// Methods
	};
} // namespace android::app

