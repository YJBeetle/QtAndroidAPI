#include "../graphics/Paint.hpp"
#include "./SpannableStringBuilder.hpp"

namespace android::text
{
	// Fields
	
	SpannableStringBuilder::SpannableStringBuilder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SpannableStringBuilder::SpannableStringBuilder()
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableStringBuilder",
			"()V"
		);
	}
	SpannableStringBuilder::SpannableStringBuilder(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	SpannableStringBuilder::SpannableStringBuilder(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	SpannableStringBuilder::SpannableStringBuilder(jstring &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	SpannableStringBuilder::SpannableStringBuilder(const QString &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.SpannableStringBuilder",
			"(Ljava/lang/CharSequence;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject SpannableStringBuilder::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannableStringBuilder",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0
		);
	}
	QAndroidJniObject SpannableStringBuilder::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.SpannableStringBuilder",
			"valueOf",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SpannableStringBuilder::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Landroid/text/SpannableStringBuilder;",
			arg0
		);
	}
	QAndroidJniObject SpannableStringBuilder::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0
		);
	}
	QAndroidJniObject SpannableStringBuilder::append(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SpannableStringBuilder::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject SpannableStringBuilder::append(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject SpannableStringBuilder::append(jstring arg0, jobject arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;I)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject SpannableStringBuilder::append(const QString &arg0, jobject arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;Ljava/lang/Object;I)Landroid/text/SpannableStringBuilder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	jchar SpannableStringBuilder::charAt(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void SpannableStringBuilder::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void SpannableStringBuilder::clearSpans()
	{
		__thiz.callMethod<void>(
			"clearSpans",
			"()V"
		);
	}
	QAndroidJniObject SpannableStringBuilder::_delete(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"delete",
			"(II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1
		);
	}
	jboolean SpannableStringBuilder::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void SpannableStringBuilder::getChars(jint arg0, jint arg1, jcharArray arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jarray SpannableStringBuilder::getFilters()
	{
		return __thiz.callObjectMethod(
			"getFilters",
			"()[Landroid/text/InputFilter;"
		).object<jarray>();
	}
	jint SpannableStringBuilder::getSpanEnd(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanEnd",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannableStringBuilder::getSpanFlags(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanFlags",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint SpannableStringBuilder::getSpanStart(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getSpanStart",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jobjectArray SpannableStringBuilder::getSpans(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callObjectMethod(
			"getSpans",
			"(IILjava/lang/Class;)[Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobjectArray>();
	}
	jint SpannableStringBuilder::getTextRunCursor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Paint arg5)
	{
		return __thiz.callMethod<jint>(
			"getTextRunCursor",
			"(IIIIILandroid/graphics/Paint;)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	jint SpannableStringBuilder::getTextWatcherDepth()
	{
		return __thiz.callMethod<jint>(
			"getTextWatcherDepth",
			"()I"
		);
	}
	jint SpannableStringBuilder::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject SpannableStringBuilder::insert(jint arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SpannableStringBuilder::insert(jint arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject SpannableStringBuilder::insert(jint arg0, jstring arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject SpannableStringBuilder::insert(jint arg0, const QString &arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(ILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	jint SpannableStringBuilder::length()
	{
		return __thiz.callMethod<jint>(
			"length",
			"()I"
		);
	}
	jint SpannableStringBuilder::nextSpanTransition(jint arg0, jint arg1, jclass arg2)
	{
		return __thiz.callMethod<jint>(
			"nextSpanTransition",
			"(IILjava/lang/Class;)I",
			arg0,
			arg1,
			arg2
		);
	}
	void SpannableStringBuilder::removeSpan(jobject arg0)
	{
		__thiz.callMethod<void>(
			"removeSpan",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	QAndroidJniObject SpannableStringBuilder::replace(jint arg0, jint arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject SpannableStringBuilder::replace(jint arg0, jint arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject SpannableStringBuilder::replace(jint arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject SpannableStringBuilder::replace(jint arg0, jint arg1, const QString &arg2, jint arg3, jint arg4)
	{
		return __thiz.callObjectMethod(
			"replace",
			"(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;",
			arg0,
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			arg4
		);
	}
	void SpannableStringBuilder::setFilters(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFilters",
			"([Landroid/text/InputFilter;)V",
			arg0
		);
	}
	void SpannableStringBuilder::setSpan(jobject arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setSpan",
			"(Ljava/lang/Object;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring SpannableStringBuilder::subSequence(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring SpannableStringBuilder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text

