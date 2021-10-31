#include "./Person.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "./Person_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	Person_Builder::Person_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Person_Builder::Person_Builder()
		: __JniBaseClass(
			"android.app.Person$Builder",
			"()V"
		) {}
	
	// Methods
	android::app::Person Person_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/Person;"
		);
	}
	android::app::Person_Builder Person_Builder::setBot(jboolean arg0)
	{
		return callObjectMethod(
			"setBot",
			"(Z)Landroid/app/Person$Builder;",
			arg0
		);
	}
	android::app::Person_Builder Person_Builder::setIcon(android::graphics::drawable::Icon arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Person$Builder;",
			arg0.object()
		);
	}
	android::app::Person_Builder Person_Builder::setImportant(jboolean arg0)
	{
		return callObjectMethod(
			"setImportant",
			"(Z)Landroid/app/Person$Builder;",
			arg0
		);
	}
	android::app::Person_Builder Person_Builder::setKey(jstring arg0)
	{
		return callObjectMethod(
			"setKey",
			"(Ljava/lang/String;)Landroid/app/Person$Builder;",
			arg0
		);
	}
	android::app::Person_Builder Person_Builder::setName(jstring arg0)
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/CharSequence;)Landroid/app/Person$Builder;",
			arg0
		);
	}
	android::app::Person_Builder Person_Builder::setUri(jstring arg0)
	{
		return callObjectMethod(
			"setUri",
			"(Ljava/lang/String;)Landroid/app/Person$Builder;",
			arg0
		);
	}
} // namespace android::app

