#pragma once

#include "./TextKeyListener_Capitalize.def.hpp"
#include "../../view/KeyEvent.def.hpp"
#include "../../view/View.def.hpp"
#include "../../../JString.hpp"
#include "./QwertyKeyListener.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline QwertyKeyListener::QwertyKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
		: android::text::method::BaseKeyListener(
			"android.text.method.QwertyKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline android::text::method::QwertyKeyListener QwertyKeyListener::getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1)
	{
		return callStaticObjectMethod(
			"android.text.method.QwertyKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/QwertyKeyListener;",
			arg0,
			arg1.object()
		);
	}
	inline android::text::method::QwertyKeyListener QwertyKeyListener::getInstanceForFullKeyboard()
	{
		return callStaticObjectMethod(
			"android.text.method.QwertyKeyListener",
			"getInstanceForFullKeyboard",
			"()Landroid/text/method/QwertyKeyListener;"
		);
	}
	inline void QwertyKeyListener::markAsReplaced(JObject arg0, jint arg1, jint arg2, JString arg3)
	{
		callStaticMethod<void>(
			"android.text.method.QwertyKeyListener",
			"markAsReplaced",
			"(Landroid/text/Spannable;IILjava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jstring>()
		);
	}
	inline jint QwertyKeyListener::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	inline jboolean QwertyKeyListener::onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
} // namespace android::text::method

// Base class headers
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"

