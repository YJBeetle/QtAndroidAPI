#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::content::pm
{
	class ShortcutInfo;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;
class JString;

namespace android::content::pm
{
	class ShortcutInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShortcutInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ShortcutInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		ShortcutInfo_Builder(android::content::Context arg0, JString arg1);
		
		// Methods
		android::content::pm::ShortcutInfo build();
		android::content::pm::ShortcutInfo_Builder setActivity(android::content::ComponentName arg0);
		android::content::pm::ShortcutInfo_Builder setCategories(JObject arg0);
		android::content::pm::ShortcutInfo_Builder setDisabledMessage(JString arg0);
		android::content::pm::ShortcutInfo_Builder setExtras(android::os::PersistableBundle arg0);
		android::content::pm::ShortcutInfo_Builder setIcon(android::graphics::drawable::Icon arg0);
		android::content::pm::ShortcutInfo_Builder setIntent(android::content::Intent arg0);
		android::content::pm::ShortcutInfo_Builder setIntents(JArray arg0);
		android::content::pm::ShortcutInfo_Builder setLongLabel(JString arg0);
		android::content::pm::ShortcutInfo_Builder setRank(jint arg0);
		android::content::pm::ShortcutInfo_Builder setShortLabel(JString arg0);
	};
} // namespace android::content::pm

