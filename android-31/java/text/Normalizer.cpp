#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./Normalizer_Form.hpp"
#include "./Normalizer.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	Normalizer::Normalizer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Normalizer::isNormalized(JString arg0, java::text::Normalizer_Form arg1)
	{
		return callStaticMethod<jboolean>(
			"java.text.Normalizer",
			"isNormalized",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString Normalizer::normalize(JString arg0, java::text::Normalizer_Form arg1)
	{
		return callStaticObjectMethod(
			"java.text.Normalizer",
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::text

