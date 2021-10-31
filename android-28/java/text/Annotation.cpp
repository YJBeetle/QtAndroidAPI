#include "./Annotation.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	Annotation::Annotation(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Annotation::Annotation(jobject arg0)
		: __JniBaseClass(
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

