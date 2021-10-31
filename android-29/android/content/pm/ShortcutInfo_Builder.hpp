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
		
		ShortcutInfo_Builder(QAndroidJniObject obj);
		// Constructors
		ShortcutInfo_Builder(android::content::Context arg0, jstring arg1);
		ShortcutInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setActivity(android::content::ComponentName arg0);
		QAndroidJniObject setCategories(__JniBaseClass arg0);
		QAndroidJniObject setDisabledMessage(jstring arg0);
		QAndroidJniObject setExtras(android::os::PersistableBundle arg0);
		QAndroidJniObject setIcon(android::graphics::drawable::Icon arg0);
		QAndroidJniObject setIntent(android::content::Intent arg0);
		QAndroidJniObject setIntents(jarray arg0);
		QAndroidJniObject setLocusId(android::content::LocusId arg0);
		QAndroidJniObject setLongLabel(jstring arg0);
		QAndroidJniObject setLongLived(jboolean arg0);
		QAndroidJniObject setPerson(android::app::Person arg0);
		QAndroidJniObject setPersons(jarray arg0);
		QAndroidJniObject setRank(jint arg0);
		QAndroidJniObject setShortLabel(jstring arg0);
	};
} // namespace android::content::pm

