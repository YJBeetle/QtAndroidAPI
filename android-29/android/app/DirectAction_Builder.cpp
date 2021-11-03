#include "./DirectAction.hpp"
#include "../content/LocusId.hpp"
#include "../os/Bundle.hpp"
#include "./DirectAction_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QJniObject forward
	DirectAction_Builder::DirectAction_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DirectAction_Builder::DirectAction_Builder(jstring arg0)
		: JObject(
			"android.app.DirectAction$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::DirectAction DirectAction_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/DirectAction;"
		);
	}
	android::app::DirectAction_Builder DirectAction_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/DirectAction$Builder;",
			arg0.object()
		);
	}
	android::app::DirectAction_Builder DirectAction_Builder::setLocusId(android::content::LocusId arg0)
	{
		return callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/app/DirectAction$Builder;",
			arg0.object()
		);
	}
} // namespace android::app

