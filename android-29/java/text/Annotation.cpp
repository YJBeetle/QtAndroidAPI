#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Annotation.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	Annotation::Annotation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Annotation::Annotation(JObject arg0)
		: JObject(
			"java.text.Annotation",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	JObject Annotation::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		);
	}
	JString Annotation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

