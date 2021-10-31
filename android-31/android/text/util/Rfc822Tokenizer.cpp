#include "./Rfc822Tokenizer.hpp"

namespace android::text::util
{
	// Fields
	
	// QJniObject forward
	Rfc822Tokenizer::Rfc822Tokenizer(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Rfc822Tokenizer::Rfc822Tokenizer()
		: __JniBaseClass(
			"android.text.util.Rfc822Tokenizer",
			"()V"
		) {}
	
	// Methods
	jarray Rfc822Tokenizer::tokenize(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;)[Landroid/text/util/Rfc822Token;",
			arg0
		).object<jarray>();
	}
	void Rfc822Tokenizer::tokenize(jstring arg0, __JniBaseClass arg1)
	{
		callStaticMethod<void>(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;Ljava/util/Collection;)V",
			arg0,
			arg1.object()
		);
	}
	jint Rfc822Tokenizer::findTokenEnd(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jint Rfc822Tokenizer::findTokenStart(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0,
			arg1
		);
	}
	jstring Rfc822Tokenizer::terminateToken(jstring arg0)
	{
		return callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
} // namespace android::text::util

