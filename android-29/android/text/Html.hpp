#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class Html : public __JniBaseClass
	{
	public:
		// Fields
		static jint FROM_HTML_MODE_COMPACT();
		static jint FROM_HTML_MODE_LEGACY();
		static jint FROM_HTML_OPTION_USE_CSS_COLORS();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_DIV();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_HEADING();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_LIST();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH();
		static jint TO_HTML_PARAGRAPH_LINES_CONSECUTIVE();
		static jint TO_HTML_PARAGRAPH_LINES_INDIVIDUAL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring escapeHtml(jstring arg0);
		static jstring escapeHtml(const QString &arg0);
		static QAndroidJniObject fromHtml(jstring arg0);
		static QAndroidJniObject fromHtml(const QString &arg0);
		static QAndroidJniObject fromHtml(jstring arg0, jint arg1);
		static QAndroidJniObject fromHtml(const QString &arg0, jint arg1);
		static QAndroidJniObject fromHtml(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject fromHtml(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject fromHtml(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		static QAndroidJniObject fromHtml(const QString &arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		static jstring toHtml(__jni_impl::__JniBaseClass arg0);
		static jstring toHtml(__jni_impl::__JniBaseClass arg0, jint arg1);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
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
	
	// Constructors
	void Html::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.Html",
			"(V)V");
	}
	
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
	jstring Html::escapeHtml(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"escapeHtml",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject Html::fromHtml(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;)Landroid/text/Spanned;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject Html::fromHtml(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;I)Landroid/text/Spanned;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Html::fromHtml(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;Landroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Html::fromHtml(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;Landroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Html::fromHtml(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;ILandroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Html::fromHtml(const QString &arg0, jint arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"fromHtml",
			"(Ljava/lang/String;ILandroid/text/Html$ImageGetter;Landroid/text/Html$TagHandler;)Landroid/text/Spanned;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring Html::toHtml(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"toHtml",
			"(Landroid/text/Spanned;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Html::toHtml(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Html",
			"toHtml",
			"(Landroid/text/Spanned;I)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class Html : public __jni_impl::android::text::Html
	{
	public:
		Html(QAndroidJniObject obj) { __thiz = obj; }
		Html()
		{
			__constructor();
		}
	};
} // namespace android::text

