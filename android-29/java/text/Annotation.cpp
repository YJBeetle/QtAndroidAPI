#include "./Annotation.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	Annotation::Annotation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Annotation::Annotation(jobject arg0)
		: JObject(
			"java.text.Annotation",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	
	// Methods
	jobject Annotation::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring Annotation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::text

