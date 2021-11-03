#include "./Locator2Impl.hpp"

namespace org::xml::sax::ext
{
	// Fields
	
	// QAndroidJniObject forward
	Locator2Impl::Locator2Impl(QAndroidJniObject obj) : org::xml::sax::helpers::LocatorImpl(obj) {}
	
	// Constructors
	Locator2Impl::Locator2Impl()
		: org::xml::sax::helpers::LocatorImpl(
			"org.xml.sax.ext.Locator2Impl",
			"()V"
		) {}
	Locator2Impl::Locator2Impl(JObject arg0)
		: org::xml::sax::helpers::LocatorImpl(
			"org.xml.sax.ext.Locator2Impl",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		) {}
	
	// Methods
	jstring Locator2Impl::getEncoding()
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Locator2Impl::getXMLVersion()
	{
		return callObjectMethod(
			"getXMLVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Locator2Impl::setEncoding(jstring arg0)
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Locator2Impl::setXMLVersion(jstring arg0)
	{
		callMethod<void>(
			"setXMLVersion",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace org::xml::sax::ext

