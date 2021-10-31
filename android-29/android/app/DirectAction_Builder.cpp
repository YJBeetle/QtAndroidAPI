#include "./DirectAction.hpp"
#include "../content/LocusId.hpp"
#include "../os/Bundle.hpp"
#include "./DirectAction_Builder.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	DirectAction_Builder::DirectAction_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DirectAction_Builder::DirectAction_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.DirectAction$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject DirectAction_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/DirectAction;"
		);
	}
	QAndroidJniObject DirectAction_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/DirectAction$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject DirectAction_Builder::setLocusId(android::content::LocusId arg0)
	{
		return callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/app/DirectAction$Builder;",
			arg0.object()
		);
	}
} // namespace android::app
