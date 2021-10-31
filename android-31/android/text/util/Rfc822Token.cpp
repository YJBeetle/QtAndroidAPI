#include "./Rfc822Token.hpp"

namespace android::text::util
{
	// Fields
	
	// QJniObject forward
	Rfc822Token::Rfc822Token(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Rfc822Token::Rfc822Token(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"android.text.util.Rfc822Token",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jstring Rfc822Token::quoteComment(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteComment",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Rfc822Token::quoteName(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Rfc822Token::quoteNameIfNecessary(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteNameIfNecessary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean Rfc822Token::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Rfc822Token::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Rfc822Token::getComment()
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Rfc822Token::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Rfc822Token::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Rfc822Token::setAddress(jstring arg0)
	{
		callMethod<void>(
			"setAddress",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Rfc822Token::setComment(jstring arg0)
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Rfc822Token::setName(jstring arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring Rfc822Token::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::text::util

