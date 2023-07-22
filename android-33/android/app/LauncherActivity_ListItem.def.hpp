#pragma once

#include "../../JObject.hpp"

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
class JString;
class JString;

namespace android::app
{
	class LauncherActivity_ListItem : public JObject
	{
	public:
		// Fields
		JString className();
		android::os::Bundle extras();
		android::graphics::drawable::Drawable icon();
		JString label();
		JString packageName();
		android::content::pm::ResolveInfo resolveInfo();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LauncherActivity_ListItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LauncherActivity_ListItem(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		LauncherActivity_ListItem();
		
		// Methods
	};
} // namespace android::app

