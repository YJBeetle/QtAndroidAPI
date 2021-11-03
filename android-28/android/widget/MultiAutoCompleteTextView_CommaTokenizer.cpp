#include "./MultiAutoCompleteTextView_CommaTokenizer.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer()
		: JObject(
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

