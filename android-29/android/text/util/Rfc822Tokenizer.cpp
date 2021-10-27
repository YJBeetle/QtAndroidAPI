#include "./Rfc822Tokenizer.hpp"

namespace android::text::util
{
	// Fields
	
	Rfc822Tokenizer::Rfc822Tokenizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Rfc822Tokenizer::Rfc822Tokenizer()
	{
		__thiz = QAndroidJniObject(
			"android.text.util.Rfc822Tokenizer",
			"()V"
		);
	}
	
	// Methods
	jarray Rfc822Tokenizer::tokenize(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;)[Landroid/text/util/Rfc822Token;",
			arg0
		).object<jarray>();
	}
	jarray Rfc822Tokenizer::tokenize(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;)[Landroid/text/util/Rfc822Token;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	void Rfc822Tokenizer::tokenize(jstring arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;Ljava/util/Collection;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Rfc822Tokenizer::tokenize(const QString &arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;Ljava/util/Collection;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jint Rfc822Tokenizer::findTokenEnd(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint Rfc822Tokenizer::findTokenEnd(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Rfc822Tokenizer::findTokenStart(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint Rfc822Tokenizer::findTokenStart(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring Rfc822Tokenizer::terminateToken(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring Rfc822Tokenizer::terminateToken(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace android::text::util

