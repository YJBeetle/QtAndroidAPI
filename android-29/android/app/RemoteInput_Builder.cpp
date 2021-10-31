#include "./RemoteInput.hpp"
#include "../os/Bundle.hpp"
#include "./RemoteInput_Builder.hpp"

namespace android::app
{
	// Fields
	
	RemoteInput_Builder::RemoteInput_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteInput_Builder::RemoteInput_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.RemoteInput$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject RemoteInput_Builder::addExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/RemoteInput$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteInput_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/RemoteInput;"
		);
	}
	QAndroidJniObject RemoteInput_Builder::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject RemoteInput_Builder::setAllowDataType(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"setAllowDataType",
			"(Ljava/lang/String;Z)Landroid/app/RemoteInput$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject RemoteInput_Builder::setAllowFreeFormInput(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowFreeFormInput",
			"(Z)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	QAndroidJniObject RemoteInput_Builder::setChoices(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setChoices",
			"([Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	QAndroidJniObject RemoteInput_Builder::setEditChoicesBeforeSending(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setEditChoicesBeforeSending",
			"(I)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
	QAndroidJniObject RemoteInput_Builder::setLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLabel",
			"(Ljava/lang/CharSequence;)Landroid/app/RemoteInput$Builder;",
			arg0
		);
	}
} // namespace android::app

