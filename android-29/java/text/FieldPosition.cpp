#include "./Format_Field.hpp"
#include "./FieldPosition.hpp"

namespace java::text
{
	// Fields
	
	FieldPosition::FieldPosition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FieldPosition::FieldPosition(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.FieldPosition",
			"(I)V",
			arg0
		);
	}
	FieldPosition::FieldPosition(java::text::Format_Field arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.FieldPosition",
			"(Ljava/text/Format$Field;)V",
			arg0.__jniObject().object()
		);
	}
	FieldPosition::FieldPosition(java::text::Format_Field arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.FieldPosition",
			"(Ljava/text/Format$Field;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jboolean FieldPosition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint FieldPosition::getBeginIndex()
	{
		return __thiz.callMethod<jint>(
			"getBeginIndex",
			"()I"
		);
	}
	jint FieldPosition::getEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	jint FieldPosition::getField()
	{
		return __thiz.callMethod<jint>(
			"getField",
			"()I"
		);
	}
	QAndroidJniObject FieldPosition::getFieldAttribute()
	{
		return __thiz.callObjectMethod(
			"getFieldAttribute",
			"()Ljava/text/Format$Field;"
		);
	}
	jint FieldPosition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void FieldPosition::setBeginIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBeginIndex",
			"(I)V",
			arg0
		);
	}
	void FieldPosition::setEndIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEndIndex",
			"(I)V",
			arg0
		);
	}
	jstring FieldPosition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::text

