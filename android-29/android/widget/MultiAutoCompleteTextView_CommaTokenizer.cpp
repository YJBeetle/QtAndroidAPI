#include "./MultiAutoCompleteTextView_CommaTokenizer.hpp"

namespace android::widget
{
	// Fields
	
	MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer()
	{
		__thiz = QAndroidJniObject(
			"android.widget.MultiAutoCompleteTextView$CommaTokenizer",
			"()V"
		);
	}
	
	// Methods
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenEnd(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenEnd(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenStart(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenStart(const QString &arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring MultiAutoCompleteTextView_CommaTokenizer::terminateToken(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring MultiAutoCompleteTextView_CommaTokenizer::terminateToken(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace android::widget

