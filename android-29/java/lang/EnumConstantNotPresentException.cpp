#include "./EnumConstantNotPresentException.hpp"

namespace java::lang
{
	// Fields
	
	EnumConstantNotPresentException::EnumConstantNotPresentException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EnumConstantNotPresentException::EnumConstantNotPresentException(jclass &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.EnumConstantNotPresentException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	EnumConstantNotPresentException::EnumConstantNotPresentException(jclass &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.EnumConstantNotPresentException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jstring EnumConstantNotPresentException::constantName()
	{
		return __thiz.callObjectMethod(
			"constantName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jclass EnumConstantNotPresentException::enumType()
	{
		return __thiz.callObjectMethod(
			"enumType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
} // namespace java::lang

