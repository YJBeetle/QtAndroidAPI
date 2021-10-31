#include "./Annotation.hpp"

namespace java::text
{
	// Fields
	
	Annotation::Annotation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Annotation::Annotation(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.Annotation",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	
	// Methods
	jobject Annotation::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring Annotation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::text

