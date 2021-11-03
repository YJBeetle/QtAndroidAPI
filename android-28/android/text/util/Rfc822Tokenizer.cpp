#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./Rfc822Tokenizer.hpp"

namespace android::text::util
{
	// Fields
	
	// QJniObject forward
	Rfc822Tokenizer::Rfc822Tokenizer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Rfc822Tokenizer::Rfc822Tokenizer()
		: JObject(
			"android.text.util.Rfc822Tokenizer",
			"()V"
		) {}
	
	// Methods
	JArray Rfc822Tokenizer::tokenize(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;)[Landroid/text/util/Rfc822Token;",
			arg0.object<jstring>()
		);
	}
	void Rfc822Tokenizer::tokenize(JString arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"android.text.util.Rfc822Tokenizer",
			"tokenize",
			"(Ljava/lang/CharSequence;Ljava/util/Collection;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint Rfc822Tokenizer::findTokenEnd(JString arg0, jint arg1)
	{
		return callMethod<jint>(
			"findTokenEnd",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint Rfc822Tokenizer::findTokenStart(JString arg0, jint arg1)
	{
		return callMethod<jint>(
			"findTokenStart",
			"(Ljava/lang/CharSequence;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString Rfc822Tokenizer::terminateToken(JString arg0)
	{
		return callObjectMethod(
			"terminateToken",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text::util

