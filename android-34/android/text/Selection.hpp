#pragma once

#include "./Layout.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./Selection.def.hpp"

namespace android::text
{
	// Fields
	inline JObject Selection::SELECTION_END()
	{
		return getStaticObjectField(
			"android.text.Selection",
			"SELECTION_END",
			"Ljava/lang/Object;"
		);
	}
	inline JObject Selection::SELECTION_START()
	{
		return getStaticObjectField(
			"android.text.Selection",
			"SELECTION_START",
			"Ljava/lang/Object;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean Selection::extendDown(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendDown",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::extendLeft(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendLeft",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::extendRight(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendRight",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Selection::extendSelection(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"extendSelection",
			"(Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Selection::extendToLeftEdge(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendToLeftEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::extendToParagraphEnd(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendToParagraphEnd",
			"(Landroid/text/Spannable;)Z",
			arg0.object()
		);
	}
	inline jboolean Selection::extendToParagraphStart(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendToParagraphStart",
			"(Landroid/text/Spannable;)Z",
			arg0.object()
		);
	}
	inline jboolean Selection::extendToRightEdge(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendToRightEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::extendUp(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"extendUp",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Selection::getSelectionEnd(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.text.Selection",
			"getSelectionEnd",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline jint Selection::getSelectionStart(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.text.Selection",
			"getSelectionStart",
			"(Ljava/lang/CharSequence;)I",
			arg0.object<jstring>()
		);
	}
	inline jboolean Selection::moveDown(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveDown",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::moveLeft(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveLeft",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::moveRight(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveRight",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::moveToLeftEdge(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveToLeftEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::moveToParagraphEnd(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveToParagraphEnd",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::moveToParagraphStart(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveToParagraphStart",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::moveToRightEdge(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveToRightEdge",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Selection::moveUp(JObject arg0, android::text::Layout arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.Selection",
			"moveUp",
			"(Landroid/text/Spannable;Landroid/text/Layout;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Selection::removeSelection(JObject arg0)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"removeSelection",
			"(Landroid/text/Spannable;)V",
			arg0.object()
		);
	}
	inline void Selection::selectAll(JObject arg0)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"selectAll",
			"(Landroid/text/Spannable;)V",
			arg0.object()
		);
	}
	inline void Selection::setSelection(JObject arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"setSelection",
			"(Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Selection::setSelection(JObject arg0, jint arg1, jint arg2)
	{
		callStaticMethod<void>(
			"android.text.Selection",
			"setSelection",
			"(Landroid/text/Spannable;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
