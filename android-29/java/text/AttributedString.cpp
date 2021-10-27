#include "../lang/StringBuffer.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./AttributedString.hpp"

namespace java::text
{
	// Fields
	
	AttributedString::AttributedString(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AttributedString::AttributedString(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AttributedString::AttributedString(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	AttributedString::AttributedString(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.__jniObject().object()
		);
	}
	AttributedString::AttributedString(jstring &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	AttributedString::AttributedString(const QString &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	AttributedString::AttributedString(__JniBaseClass &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	AttributedString::AttributedString(__JniBaseClass &arg0, jint &arg1, jint &arg2, jarray &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;II[Ljava/text/AttributedCharacterIterator$Attribute;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	void AttributedString::addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"addAttribute",
			"(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AttributedString::addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"addAttribute",
			"(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void AttributedString::addAttributes(__JniBaseClass arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"addAttributes",
			"(Ljava/util/Map;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject AttributedString::getIterator()
	{
		return __thiz.callObjectMethod(
			"getIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	QAndroidJniObject AttributedString::getIterator(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"getIterator",
			"([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject AttributedString::getIterator(jarray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"getIterator",
			"([Ljava/text/AttributedCharacterIterator$Attribute;II)Ljava/text/AttributedCharacterIterator;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::text

