#include "./PatternSyntaxException.hpp"

namespace java::util::regex
{
	// Fields
	
	PatternSyntaxException::PatternSyntaxException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PatternSyntaxException::PatternSyntaxException(jstring &arg0, jstring &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.regex.PatternSyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	PatternSyntaxException::PatternSyntaxException(const QString &arg0, const QString &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.regex.PatternSyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jstring PatternSyntaxException::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PatternSyntaxException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring PatternSyntaxException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PatternSyntaxException::getPattern()
	{
		return __thiz.callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::regex

