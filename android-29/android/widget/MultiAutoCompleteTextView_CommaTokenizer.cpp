#include "./MultiAutoCompleteTextView_CommaTokenizer.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer()
		: __JniBaseClass(
			"android.widget.MultiAutoCompleteTextView$CommaTokenizer",
			"()V"
		) {}
	
	// Methods
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenEnd(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenStart(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jstring MultiAutoCompleteTextView_CommaTokenizer::terminateToken(jstring arg0)
	{
		return callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
} // namespace android::widget

