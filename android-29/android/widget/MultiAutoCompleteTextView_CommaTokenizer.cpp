#include "../../JString.hpp"
#include "./MultiAutoCompleteTextView_CommaTokenizer.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer()
		: JObject(
			"android.widget.MultiAutoCompleteTextView$CommaTokenizer",
			"()V"
		) {}
	
	// Methods
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenEnd(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint MultiAutoCompleteTextView_CommaTokenizer::findTokenStart(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString MultiAutoCompleteTextView_CommaTokenizer::terminateToken(JString arg0) const
	{
		return callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

