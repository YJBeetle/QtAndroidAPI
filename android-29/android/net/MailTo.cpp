#include "./MailTo.hpp"

namespace android::net
{
	// Fields
	jstring MailTo::MAILTO_SCHEME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.MailTo",
			"MAILTO_SCHEME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MailTo::MailTo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean MailTo::isMailTo(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.MailTo",
			"isMailTo",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean MailTo::isMailTo(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.net.MailTo",
			"isMailTo",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject MailTo::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MailTo",
			"parse",
			"(Ljava/lang/String;)Landroid/net/MailTo;",
			arg0
		);
	}
	QAndroidJniObject MailTo::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.MailTo",
			"parse",
			"(Ljava/lang/String;)Landroid/net/MailTo;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring MailTo::getBody()
	{
		return __thiz.callObjectMethod(
			"getBody",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::getCc()
	{
		return __thiz.callObjectMethod(
			"getCc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MailTo::getHeaders()
	{
		return __thiz.callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
	jstring MailTo::getSubject()
	{
		return __thiz.callObjectMethod(
			"getSubject",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::getTo()
	{
		return __thiz.callObjectMethod(
			"getTo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MailTo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

