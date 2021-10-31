#include "../../app/Person.hpp"
#include "../ComponentName.hpp"
#include "../Context.hpp"
#include "../Intent.hpp"
#include "../LocusId.hpp"
#include "./ShortcutInfo.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/PersistableBundle.hpp"
#include "./ShortcutInfo_Builder.hpp"

namespace android::content::pm
{
	// Fields
	
	// QAndroidJniObject forward
	ShortcutInfo_Builder::ShortcutInfo_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ShortcutInfo_Builder::ShortcutInfo_Builder(android::content::Context arg0, jstring arg1)
		: __JniBaseClass(
			"android.content.pm.ShortcutInfo$Builder",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	QAndroidJniObject ShortcutInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/pm/ShortcutInfo;"
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setActivity(android::content::ComponentName arg0)
	{
		return callObjectMethod(
			"setActivity",
			"(Landroid/content/ComponentName;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setCategories(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setCategories",
			"(Ljava/util/Set;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setDisabledMessage(jstring arg0)
	{
		return callObjectMethod(
			"setDisabledMessage",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setExtras(android::os::PersistableBundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/PersistableBundle;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setIcon(android::graphics::drawable::Icon arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setIntent(android::content::Intent arg0)
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setIntents(jarray arg0)
	{
		return callObjectMethod(
			"setIntents",
			"([Landroid/content/Intent;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setLocusId(android::content::LocusId arg0)
	{
		return callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setLongLabel(jstring arg0)
	{
		return callObjectMethod(
			"setLongLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setLongLived(jboolean arg0)
	{
		return callObjectMethod(
			"setLongLived",
			"(Z)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setPerson(android::app::Person arg0)
	{
		return callObjectMethod(
			"setPerson",
			"(Landroid/app/Person;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setPersons(jarray arg0)
	{
		return callObjectMethod(
			"setPersons",
			"([Landroid/app/Person;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setRank(jint arg0)
	{
		return callObjectMethod(
			"setRank",
			"(I)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject ShortcutInfo_Builder::setShortLabel(jstring arg0)
	{
		return callObjectMethod(
			"setShortLabel",
			"(Ljava/lang/CharSequence;)Landroid/content/pm/ShortcutInfo$Builder;",
			arg0
		);
	}
} // namespace android::content::pm

