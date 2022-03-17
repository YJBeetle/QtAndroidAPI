#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Message.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../widget/Button.def.hpp"
#include "../widget/ListView.def.hpp"
#include "../../JString.hpp"
#include "./AlertDialog.def.hpp"

namespace android::app
{
	// Fields
	inline jint AlertDialog::THEME_DEVICE_DEFAULT_DARK()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_DEVICE_DEFAULT_DARK"
		);
	}
	inline jint AlertDialog::THEME_DEVICE_DEFAULT_LIGHT()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_DEVICE_DEFAULT_LIGHT"
		);
	}
	inline jint AlertDialog::THEME_HOLO_DARK()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_HOLO_DARK"
		);
	}
	inline jint AlertDialog::THEME_HOLO_LIGHT()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_HOLO_LIGHT"
		);
	}
	inline jint AlertDialog::THEME_TRADITIONAL()
	{
		return getStaticField<jint>(
			"android.app.AlertDialog",
			"THEME_TRADITIONAL"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::widget::Button AlertDialog::getButton(jint arg0) const
	{
		return callObjectMethod(
			"getButton",
			"(I)Landroid/widget/Button;",
			arg0
		);
	}
	inline android::widget::ListView AlertDialog::getListView() const
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	inline jboolean AlertDialog::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean AlertDialog::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void AlertDialog::setButton(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AlertDialog::setButton(JString arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"setButton",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AlertDialog::setButton(jint arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void AlertDialog::setButton(jint arg0, JString arg1, android::os::Message arg2) const
	{
		callMethod<void>(
			"setButton",
			"(ILjava/lang/CharSequence;Landroid/os/Message;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void AlertDialog::setButton2(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AlertDialog::setButton2(JString arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"setButton2",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AlertDialog::setButton3(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AlertDialog::setButton3(JString arg0, android::os::Message arg1) const
	{
		callMethod<void>(
			"setButton3",
			"(Ljava/lang/CharSequence;Landroid/os/Message;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void AlertDialog::setCustomTitle(android::view::View arg0) const
	{
		callMethod<void>(
			"setCustomTitle",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AlertDialog::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void AlertDialog::setIcon(jint arg0) const
	{
		callMethod<void>(
			"setIcon",
			"(I)V",
			arg0
		);
	}
	inline void AlertDialog::setIconAttribute(jint arg0) const
	{
		callMethod<void>(
			"setIconAttribute",
			"(I)V",
			arg0
		);
	}
	inline void AlertDialog::setInverseBackgroundForced(jboolean arg0) const
	{
		callMethod<void>(
			"setInverseBackgroundForced",
			"(Z)V",
			arg0
		);
	}
	inline void AlertDialog::setMessage(JString arg0) const
	{
		callMethod<void>(
			"setMessage",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AlertDialog::setTitle(JString arg0) const
	{
		callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void AlertDialog::setView(android::view::View arg0) const
	{
		callMethod<void>(
			"setView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AlertDialog::setView(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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

// Base class headers
#include "./Dialog.hpp"

