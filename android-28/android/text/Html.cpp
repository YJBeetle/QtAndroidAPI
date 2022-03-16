#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Html.hpp"

namespace android::text
{
	// Fields
	jint Html::FROM_HTML_MODE_COMPACT()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_MODE_COMPACT"
		);
	}
	jint Html::FROM_HTML_MODE_LEGACY()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_MODE_LEGACY"
		);
	}
	jint Html::FROM_HTML_OPTION_USE_CSS_COLORS()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_OPTION_USE_CSS_COLORS"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_DIV()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_DIV"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_HEADING()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_HEADING"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_LIST()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_LIST"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH"
		);
	}
	jint Html::TO_HTML_PARAGRAPH_LINES_CONSECUTIVE()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"TO_HTML_PARAGRAPH_LINES_CONSECUTIVE"
		);
	}
	jint Html::TO_HTML_PARAGRAPH_LINES_INDIVIDUAL()
	{
		return getStaticField<jint>(
			"android.text.Html",
			"TO_HTML_PARAGRAPH_LINES_INDIVIDUAL"
		);
	}
	
	// Constructors
	
	// Methods
	JString Html::escapeHtml(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"escapeHtml",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject Html::fromHtml(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;)Landroid/text/Spanned;",
			arg0.object<jstring>()
		);
	}
	JObject Html::fromHtml(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;I)Landroid/text/Spanned;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JObject Html::fromHtml(JString arg0, JObject arg1, JObject arg2)
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
	JObject Html::fromHtml(JString arg0, jint arg1, JObject arg2, JObject arg3)
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
	JString Html::toHtml(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.text.Html",
			"toHtml",
			"(Landroid/text/Spanned;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Html::toHtml(JObject arg0, jint arg1)
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

