#pragma once

#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Html.def.hpp"

namespace android::text
{
	// Fields
	inline jint Html::FROM_HTML_MODE_COMPACT()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_MODE_COMPACT"
		);
	}
	inline jint Html::FROM_HTML_MODE_LEGACY()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_MODE_LEGACY"
		);
	}
	inline jint Html::FROM_HTML_OPTION_USE_CSS_COLORS()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_OPTION_USE_CSS_COLORS"
		);
	}
	inline jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE"
		);
	}
	inline jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_DIV()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_DIV"
		);
	}
	inline jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_HEADING()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_HEADING"
		);
	}
	inline jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_LIST()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_LIST"
		);
	}
	inline jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM"
		);
	}
	inline jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH"
		);
	}
	inline jint Html::TO_HTML_PARAGRAPH_LINES_CONSECUTIVE()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"TO_HTML_PARAGRAPH_LINES_CONSECUTIVE"
		);
	}
	inline jint Html::TO_HTML_PARAGRAPH_LINES_INDIVIDUAL()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"TO_HTML_PARAGRAPH_LINES_INDIVIDUAL"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString Html::escapeHtml(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"escapeHtml",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JObject Html::fromHtml(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;)Landroid/text/Spanned;",
			arg0.object<jstring>()
		);
	}
	inline JObject Html::fromHtml(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;I)Landroid/text/Spanned;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject Html::fromHtml(JString arg0, JObject arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;Landroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Html::fromHtml(JString arg0, jint arg1, JObject arg2, JObject arg3)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;ILandroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline JString Html::toHtml(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"toHtml",
			"(Landroid/text/Spanned;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Html::toHtml(JObject arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"toHtml",
			"(Landroid/text/Spanned;I)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text

// Base class headers

