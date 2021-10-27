#include "./Normalizer_Form.hpp"
#include "./Normalizer.hpp"

namespace java::text
{
	// Fields
	
	Normalizer::Normalizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean Normalizer::isNormalized(jstring arg0, java::text::Normalizer_Form arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.text.Normalizer",
			"isNormalized",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Normalizer::isNormalized(const QString &arg0, java::text::Normalizer_Form arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.text.Normalizer",
			"isNormalized",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jstring Normalizer::normalize(jstring arg0, java::text::Normalizer_Form arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer",
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring Normalizer::normalize(const QString &arg0, java::text::Normalizer_Form arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.Normalizer",
			"normalize",
			"(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
} // namespace java::text

