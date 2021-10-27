#include "./Locator2Impl.hpp"

namespace org::xml::sax::ext
{
	// Fields
	
	Locator2Impl::Locator2Impl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Locator2Impl::Locator2Impl()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.ext.Locator2Impl",
			"()V"
		);
	}
	Locator2Impl::Locator2Impl(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.ext.Locator2Impl",
			"(Lorg/xml/sax/Locator;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring Locator2Impl::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locator2Impl::getXMLVersion()
	{
		return __thiz.callObjectMethod(
			"getXMLVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Locator2Impl::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Locator2Impl::setEncoding(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Locator2Impl::setXMLVersion(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setXMLVersion",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Locator2Impl::setXMLVersion(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setXMLVersion",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace org::xml::sax::ext

