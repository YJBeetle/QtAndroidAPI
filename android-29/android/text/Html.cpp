#include "./Html.hpp"

namespace android::text
{
	// Fields
	jint Html::FROM_HTML_MODE_COMPACT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_MODE_COMPACT"
		);
	}
	jint Html::FROM_HTML_MODE_LEGACY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_MODE_LEGACY"
		);
	}
	jint Html::FROM_HTML_OPTION_USE_CSS_COLORS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_OPTION_USE_CSS_COLORS"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_DIV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_DIV"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_HEADING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_HEADING"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_LIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_LIST"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM"
		);
	}
	jint Html::FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH"
		);
	}
	jint Html::TO_HTML_PARAGRAPH_LINES_CONSECUTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"TO_HTML_PARAGRAPH_LINES_CONSECUTIVE"
		);
	}
	jint Html::TO_HTML_PARAGRAPH_LINES_INDIVIDUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.Html",
			"TO_HTML_PARAGRAPH_LINES_INDIVIDUAL"
		);
	}
	
	// QAndroidJniObject forward
	Html::Html(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring Html::escapeHtml(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"escapeHtml",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Html::fromHtml(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;)Landroid/text/Spanned;",
			arg0
		);
	}
	QAndroidJniObject Html::fromHtml(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;I)Landroid/text/Spanned;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Html::fromHtml(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;Landroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject Html::fromHtml(jstring arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;ILandroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	jstring Html::toHtml(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"toHtml",
			"(Landroid/text/Spanned;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Html::toHtml(__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"toHtml",
			"(Landroid/text/Spanned;I)Ljava/lang/String;",
			arg0.object(),
			arg1
		).object<jstring>();
	}
} // namespace android::text

