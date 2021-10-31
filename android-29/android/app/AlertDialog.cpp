#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../os/Message.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "../widget/Button.hpp"
#include "../widget/ListView.hpp"
#include "./AlertDialog.hpp"

namespace android::app
{
	// Fields
	jint AlertDialog::THEME_DEVICE_DEFAULT_DARK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_DEVICE_DEFAULT_DARK"
		);
	}
	jint AlertDialog::THEME_DEVICE_DEFAULT_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_DEVICE_DEFAULT_LIGHT"
		);
	}
	jint AlertDialog::THEME_HOLO_DARK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_HOLO_DARK"
		);
	}
	jint AlertDialog::THEME_HOLO_LIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_HOLO_LIGHT"
		);
	}
	jint AlertDialog::THEME_TRADITIONAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_TRADITIONAL"
		);
	}
	
	// QAndroidJniObject forward
	AlertDialog::AlertDialog(QAndroidJniObject obj) : android::app::Dialog(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AlertDialog::getButton(jint arg0)
	{
		return callObjectMethod(
			"getButton",
			"(I)Landroid/widget/Button;",
			arg0
		);
	}
	QAndroidJniObject AlertDialog::getListView()
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jboolean AlertDialog::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AlertDialog::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void AlertDialog::setButton(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1.object()
		);
	}
	void AlertDialog::setButton(jstring arg0, android::os::Message arg1)
	{
		callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1.object()
		);
	}
	void AlertDialog::setButton(jint arg0, jstring arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void AlertDialog::setButton(jint arg0, jstring arg1, android::os::Message arg2)
	{
		callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void AlertDialog::setButton2(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1.object()
		);
	}
	void AlertDialog::setButton2(jstring arg0, android::os::Message arg1)
	{
		callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1.object()
		);
	}
	void AlertDialog::setButton3(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1.object()
		);
	}
	void AlertDialog::setButton3(jstring arg0, android::os::Message arg1)
	{
		callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1.object()
		);
	}
	void AlertDialog::setCustomTitle(android::view::View arg0)
	{
		callMethod<void>(
			"setCustomTitle",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AlertDialog::setIcon(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void AlertDialog::setIcon(jint arg0)
	{
		callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void AlertDialog::setIconAttribute(jint arg0)
	{
		callMethod<void>(
			"setIconAttribute",
			"(I)V",
			arg0
		);
	}
	void AlertDialog::setInverseBackgroundForced(jboolean arg0)
	{
		callMethod<void>(
			"setInverseBackgroundForced",
			"(Z)V",
			arg0
		);
	}
	void AlertDialog::setMessage(jstring arg0)
	{
		callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AlertDialog::setTitle(jstring arg0)
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void AlertDialog::setView(android::view::View arg0)
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AlertDialog::setView(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::app

