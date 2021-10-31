#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class Person;
}
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
namespace android::content
{
	class LocusId;
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

namespace android::content::pm
{
	class ShortcutInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ShortcutInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ShortcutInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		ShortcutInfo_Builder(android::content::Context arg0, jstring arg1);
		
		// Methods
		android::content::pm::ShortcutInfo build();
		android::content::pm::ShortcutInfo_Builder setActivity(android::content::ComponentName arg0);
		android::content::pm::ShortcutInfo_Builder setCategories(__JniBaseClass arg0);
		android::content::pm::ShortcutInfo_Builder setDisabledMessage(jstring arg0);
		android::content::pm::ShortcutInfo_Builder setExtras(android::os::PersistableBundle arg0);
		android::content::pm::ShortcutInfo_Builder setIcon(android::graphics::drawable::Icon arg0);
		android::content::pm::ShortcutInfo_Builder setIntent(android::content::Intent arg0);
		android::content::pm::ShortcutInfo_Builder setIntents(jarray arg0);
		android::content::pm::ShortcutInfo_Builder setLocusId(android::content::LocusId arg0);
		android::content::pm::ShortcutInfo_Builder setLongLabel(jstring arg0);
		android::content::pm::ShortcutInfo_Builder setLongLived(jboolean arg0);
		android::content::pm::ShortcutInfo_Builder setPerson(android::app::Person arg0);
		android::content::pm::ShortcutInfo_Builder setPersons(jarray arg0);
		android::content::pm::ShortcutInfo_Builder setRank(jint arg0);
		android::content::pm::ShortcutInfo_Builder setShortLabel(jstring arg0);
		android::content::pm::ShortcutInfo_Builder setStartingTheme(jint arg0);
	};
} // namespace android::content::pm

