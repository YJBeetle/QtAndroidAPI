#include "../app/AlertDialog_Builder.hpp"
#include "../app/Dialog.hpp"
#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "./DialogPreference.hpp"

namespace android::preference
{
	// Fields
	
	DialogPreference::DialogPreference(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DialogPreference::DialogPreference(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	DialogPreference::DialogPreference(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	DialogPreference::DialogPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	DialogPreference::DialogPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.preference.DialogPreference",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject DialogPreference::getDialog()
	{
		return __thiz.callObjectMethod(
			"getDialog",
			"()Landroid/app/Dialog;"
		);
	}
	QAndroidJniObject DialogPreference::getDialogIcon()
	{
		return __thiz.callObjectMethod(
			"getDialogIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint DialogPreference::getDialogLayoutResource()
	{
		return __thiz.callMethod<jint>(
			"getDialogLayoutResource",
			"()I"
		);
	}
	jstring DialogPreference::getDialogMessage()
	{
		return __thiz.callObjectMethod(
			"getDialogMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DialogPreference::getDialogTitle()
	{
		return __thiz.callObjectMethod(
			"getDialogTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DialogPreference::getNegativeButtonText()
	{
		return __thiz.callObjectMethod(
			"getNegativeButtonText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DialogPreference::getPositiveButtonText()
	{
		return __thiz.callObjectMethod(
			"getPositiveButtonText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void DialogPreference::onActivityDestroy()
	{
		__thiz.callMethod<void>(
			"onActivityDestroy",
			"()V"
		);
	}
	void DialogPreference::onClick(__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/content/DialogInterface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DialogPreference::onDismiss(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onDismiss",
			"(Landroid/content/DialogInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogPreference::setDialogIcon(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setDialogIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void DialogPreference::setDialogIcon(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDialogIcon",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setDialogLayoutResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDialogLayoutResource",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setDialogMessage(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDialogMessage",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setDialogMessage(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDialogMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void DialogPreference::setDialogTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDialogTitle",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setDialogTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDialogTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void DialogPreference::setNegativeButtonText(jint arg0)
	{
		__thiz.callMethod<void>(
			"setNegativeButtonText",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setNegativeButtonText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNegativeButtonText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void DialogPreference::setPositiveButtonText(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPositiveButtonText",
			"(I)V",
			arg0
		);
	}
	void DialogPreference::setPositiveButtonText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPositiveButtonText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::preference

