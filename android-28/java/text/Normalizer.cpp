#include "./Normalizer_Form.hpp"
#include "./Normalizer.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	Normalizer::Normalizer(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Normalizer::isNormalized(jstring arg0, java::text::Normalizer_Form arg1)
	{
		return callStaticMethod<jboolean>(
			"java.text.Normalizer",
			"isNormalized",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z",
			arg0,
			arg1.object()
		);
	}
	jstring Normalizer::normalize(jstring arg0, java::text::Normalizer_Form arg1)
	{
		return callStaticObjectMethod(
			"java.text.Normalizer",
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
} // namespace java::text

