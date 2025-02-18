#pragma once

#include "../../view/KeyEvent.def.hpp"
#include "../../view/View.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "./MetaKeyKeyListener.def.hpp"

namespace android::text::method
{
	// Fields
	inline jint MetaKeyKeyListener::META_ALT_LOCKED()
	{
		return getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_ALT_LOCKED"
		);
	}
	inline jint MetaKeyKeyListener::META_ALT_ON()
	{
		return getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_ALT_ON"
		);
	}
	inline jint MetaKeyKeyListener::META_CAP_LOCKED()
	{
		return getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_CAP_LOCKED"
		);
	}
	inline jint MetaKeyKeyListener::META_SHIFT_ON()
	{
		return getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_SHIFT_ON"
		);
	}
	inline jint MetaKeyKeyListener::META_SYM_LOCKED()
	{
		return getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_SYM_LOCKED"
		);
	}
	inline jint MetaKeyKeyListener::META_SYM_ON()
	{
		return getStaticField<jint>(
			"android.text.method.MetaKeyKeyListener",
			"META_SYM_ON"
		);
	}
	
	// Constructors
	inline MetaKeyKeyListener::MetaKeyKeyListener()
		: JObject(
			"android.text.method.MetaKeyKeyListener",
			"()V"
		) {}
	
	// Methods
	inline jlong MetaKeyKeyListener::adjustMetaAfterKeypress(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"android.text.method.MetaKeyKeyListener",
			"adjustMetaAfterKeypress",
			"(J)J",
			arg0
		);
	}
	inline void MetaKeyKeyListener::adjustMetaAfterKeypress(JObject arg0)
	{
		callStaticMethod<void>(
			"android.text.method.MetaKeyKeyListener",
			"adjustMetaAfterKeypress",
			"(Landroid/text/Spannable;)V",
			arg0.object()
		);
	}
	inline void MetaKeyKeyListener::clearMetaKeyState(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.text.method.MetaKeyKeyListener",
			"clearMetaKeyState",
			"(Landroid/text/Editable;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jint MetaKeyKeyListener::getMetaState(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline jint MetaKeyKeyListener::getMetaState(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(J)I",
			arg0
		);
	}
	inline jint MetaKeyKeyListener::getMetaState(JString arg0, android::view::KeyEvent arg1)
	{
		return callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;Landroid/view/KeyEvent;)I",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint MetaKeyKeyListener::getMetaState(JString arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint MetaKeyKeyListener::getMetaState(jlong arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(JI)I",
			arg0,
			arg1
		);
	}
	inline jint MetaKeyKeyListener::getMetaState(JString arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callStaticMethod<jint>(
			"android.text.method.MetaKeyKeyListener",
			"getMetaState",
			"(Ljava/lang/CharSequence;ILandroid/view/KeyEvent;)I",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline jlong MetaKeyKeyListener::handleKeyDown(jlong arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callStaticMethod<jlong>(
			"android.text.method.MetaKeyKeyListener",
			"handleKeyDown",
			"(JILandroid/view/KeyEvent;)J",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jlong MetaKeyKeyListener::handleKeyUp(jlong arg0, jint arg1, android::view::KeyEvent arg2)
	{
		return callStaticMethod<jlong>(
			"android.text.method.MetaKeyKeyListener",
			"handleKeyUp",
			"(JILandroid/view/KeyEvent;)J",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean MetaKeyKeyListener::isMetaTracker(JString arg0, JObject arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.method.MetaKeyKeyListener",
			"isMetaTracker",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Z",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean MetaKeyKeyListener::isSelectingMetaTracker(JString arg0, JObject arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.method.MetaKeyKeyListener",
			"isSelectingMetaTracker",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;)Z",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline jlong MetaKeyKeyListener::resetLockedMeta(jlong arg0)
	{
		return callStaticMethod<jlong>(
			"android.text.method.MetaKeyKeyListener",
			"resetLockedMeta",
			"(J)J",
			arg0
		);
	}
	inline void MetaKeyKeyListener::resetMetaState(JObject arg0)
	{
		callStaticMethod<void>(
			"android.text.method.MetaKeyKeyListener",
			"resetMetaState",
			"(Landroid/text/Spannable;)V",
			arg0.object()
		);
	}
	inline jlong MetaKeyKeyListener::clearMetaKeyState(jlong arg0, jint arg1) const
	{
		return callMethod<jlong>(
			"clearMetaKeyState",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline void MetaKeyKeyListener::clearMetaKeyState(android::view::View arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"clearMetaKeyState",
			"(Landroid/view/View;Landroid/text/Editable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean MetaKeyKeyListener::onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
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
	inline jboolean MetaKeyKeyListener::onKeyUp(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
} // namespace android::text::method

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif
