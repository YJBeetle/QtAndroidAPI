#include "../../JArray.hpp"
#include "./RemoteInput.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./RemoteInput_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteInput_Builder::RemoteInput_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RemoteInput_Builder::RemoteInput_Builder(JString arg0)
		: JObject(
			"android.app.RemoteInput$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::RemoteInput_Builder RemoteInput_Builder::addExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/RemoteInput$Builder;",
			arg0.object()
		);
	}
	android::app::RemoteInput RemoteInput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/RemoteInput;"
		);
	}
	android::os::Bundle RemoteInput_Builder::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setAllowDataType(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setAllowDataType",
			"(Ljava/lang/String;Z)Landroid/app/RemoteInput$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setAllowFreeFormInput(jboolean arg0) const
	{
		return callObjectMethod(
			"setAllowFreeFormInput",
			"(Z)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setChoices(JArray arg0) const
	{
		return callObjectMethod(
			"setChoices",
			"([Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0.object<jarray>()
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setEditChoicesBeforeSending(jint arg0) const
	{
		return callObjectMethod(
			"setEditChoicesBeforeSending",
			"(I)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	android::app::RemoteInput_Builder RemoteInput_Builder::setLabel(JString arg0) const
	{
		return callObjectMethod(
			"setLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

