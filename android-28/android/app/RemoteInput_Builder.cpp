#include "./RemoteInput.hpp"
#include "../os/Bundle.hpp"
#include "./RemoteInput_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteInput_Builder::RemoteInput_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RemoteInput_Builder::RemoteInput_Builder(jstring arg0)
		: JObject(
			"android.app.RemoteInput$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::RemoteInput_Builder RemoteInput_Builder::addExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/RemoteInput$Builder;",
			arg0.object()
		);
	}
	android::app::RemoteInput RemoteInput_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/RemoteInput;"
		);
	}
	android::os::Bundle RemoteInput_Builder::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setAllowDataType(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"setAllowDataType",
			"(Ljava/lang/String;Z)Landroid/app/RemoteInput$Builder;",
			arg0,
			arg1
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setAllowFreeFormInput(jboolean arg0)
	{
		return callObjectMethod(
			"setAllowFreeFormInput",
			"(Z)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setChoices(jarray arg0)
	{
		return callObjectMethod(
			"setChoices",
			"([Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setLabel(jstring arg0)
	{
		return callObjectMethod(
			"setLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
} // namespace android::app

