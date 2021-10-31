#include "./DirectAction.hpp"
#include "../content/LocusId.hpp"
#include "../os/Bundle.hpp"
#include "./DirectAction_Builder.hpp"

namespace android::app
{
	// Fields
	
	DirectAction_Builder::DirectAction_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DirectAction_Builder::DirectAction_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.DirectAction$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject DirectAction_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/DirectAction;"
		);
	}
	QAndroidJniObject DirectAction_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/DirectAction$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DirectAction_Builder::setLocusId(android::content::LocusId arg0)
	{
		return __thiz.callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/app/DirectAction$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::app

