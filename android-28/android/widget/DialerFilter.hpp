#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./DialerFilter.def.hpp"

namespace android::widget
{
	// Fields
	inline jint DialerFilter::DIGITS_AND_LETTERS()
	{
		return getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS"
		);
	}
	inline jint DialerFilter::DIGITS_AND_LETTERS_NO_DIGITS()
	{
		return getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS_NO_DIGITS"
		);
	}
	inline jint DialerFilter::DIGITS_AND_LETTERS_NO_LETTERS()
	{
		return getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS_NO_LETTERS"
		);
	}
	inline jint DialerFilter::DIGITS_ONLY()
	{
		return getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_ONLY"
		);
	}
	inline jint DialerFilter::LETTERS_ONLY()
	{
		return getStaticField<jint>(
			"android.widget.DialerFilter",
			"LETTERS_ONLY"
		);
	}
	
	// Constructors
	inline DialerFilter::DialerFilter(android::content::Context arg0)
		: android::widget::RelativeLayout(
			"android.widget.DialerFilter",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline DialerFilter::DialerFilter(android::content::Context arg0, JObject arg1)
		: android::widget::RelativeLayout(
			"android.widget.DialerFilter",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void DialerFilter::append(JString arg0) const
	{
		callMethod<void>(
			"append",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DialerFilter::clearText() const
	{
		callMethod<void>(
			"clearText",
			"()V"
		);
	}
	inline JString DialerFilter::getDigits() const
	{
		return callObjectMethod(
			"getDigits",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString DialerFilter::getFilterText() const
	{
		return callObjectMethod(
			"getFilterText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString DialerFilter::getLetters() const
	{
		return callObjectMethod(
			"getLetters",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint DialerFilter::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline jboolean DialerFilter::isQwertyKeyboard() const
	{
		return callMethod<jboolean>(
			"isQwertyKeyboard",
			"()Z"
		);
	}
	inline jboolean DialerFilter::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean DialerFilter::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void DialerFilter::removeFilterWatcher(JObject arg0) const
	{
		callMethod<void>(
			"removeFilterWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	inline void DialerFilter::setDigitsWatcher(JObject arg0) const
	{
		callMethod<void>(
			"setDigitsWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	inline void DialerFilter::setFilterWatcher(JObject arg0) const
	{
		callMethod<void>(
			"setFilterWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	inline void DialerFilter::setLettersWatcher(JObject arg0) const
	{
		callMethod<void>(
			"setLettersWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.object()
		);
	}
	inline void DialerFilter::setMode(jint arg0) const
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./RelativeLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
