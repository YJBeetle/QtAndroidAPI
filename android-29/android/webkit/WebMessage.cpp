#include "./WebMessage.hpp"

namespace android::webkit
{
	// Fields
	
	WebMessage::WebMessage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebMessage::WebMessage(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	WebMessage::WebMessage(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	WebMessage::WebMessage(jstring &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;[Landroid/webkit/WebMessagePort;)V",
			arg0,
			arg1
		);
	}
	WebMessage::WebMessage(const QString &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebMessage",
			"(Ljava/lang/String;[Landroid/webkit/WebMessagePort;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jstring WebMessage::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray WebMessage::getPorts()
	{
		return __thiz.callObjectMethod(
			"getPorts",
			"()[Landroid/webkit/WebMessagePort;"
		).object<jarray>();
	}
} // namespace android::webkit

