#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Bundle.hpp"
#include "../os/Message.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "../widget/Button.hpp"
#include "../widget/ListView.hpp"
#include "../../JString.hpp"
#include "./AlertDialog.hpp"

namespace android::app
{
	// Fields
	jint AlertDialog::THEME_DEVICE_DEFAULT_DARK()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_DEVICE_DEFAULT_DARK"
		);
	}
	jint AlertDialog::THEME_DEVICE_DEFAULT_LIGHT()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_DEVICE_DEFAULT_LIGHT"
		);
	}
	jint AlertDialog::THEME_HOLO_DARK()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_HOLO_DARK"
		);
	}
	jint AlertDialog::THEME_HOLO_LIGHT()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_HOLO_LIGHT"
		);
	}
	jint AlertDialog::THEME_TRADITIONAL()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_TRADITIONAL"
		);
	}
	
	// Constructors
	
	// Methods
	android::widget::Button AlertDialog::getButton(jint arg0) const
	{
		return callObjectMethod(
			"getButton",
			"(I)Landroid/widget/Button;",
			arg0
		);
	}
	android::widget::ListView AlertDialog::getListView() const
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	jboolean AlertDialog::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean AlertDialog::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	void AlertDialog::setButton(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AlertDialog::setButton(JString arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AlertDialog::setButton(jint arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void AlertDialog::setButton(jint arg0, JString arg1, android::os::Message arg2) const
	{
		callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void AlertDialog::setButton2(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AlertDialog::setButton2(JString arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AlertDialog::setButton3(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AlertDialog::setButton3(JString arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void AlertDialog::setCustomTitle(android::view::View arg0) const
	{
		callMethod<void>(
			"setCustomTitle",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AlertDialog::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void AlertDialog::setIcon(jint arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	void AlertDialog::setIconAttribute(jint arg0) const
	{
		callMethod<void>(
			"setIconAttribute",
			"(I)V",
			arg0
		);
	}
	void AlertDialog::setInverseBackgroundForced(jboolean arg0) const
	{
		callMethod<void>(
			"setInverseBackgroundForced",
			"(Z)V",
			arg0
		);
	}
	void AlertDialog::setMessage(JString arg0) const
	{
		callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AlertDialog::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void AlertDialog::setView(android::view::View arg0) const
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AlertDialog::setView(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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

