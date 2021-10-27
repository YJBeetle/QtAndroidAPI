#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::xml::namespace
{
	class QName;
}

namespace __jni_impl::javax::xml::xpath
{
	class XPathConstants : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BOOLEAN();
		static jstring DOM_OBJECT_MODEL();
		static QAndroidJniObject NODE();
		static QAndroidJniObject NODESET();
		static QAndroidJniObject NUMBER();
		static QAndroidJniObject STRING();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::xpath

#include "../namespace/QName.hpp"

namespace __jni_impl::javax::xml::xpath
{
	// Fields
	QAndroidJniObject XPathConstants::BOOLEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"BOOLEAN",
			"Ljavax/xml/namespace/QName;"
		);
	}
	jstring XPathConstants::DOM_OBJECT_MODEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"DOM_OBJECT_MODEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject XPathConstants::NODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NODE",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject XPathConstants::NODESET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NODESET",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject XPathConstants::NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NUMBER",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject XPathConstants::STRING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"STRING",
			"Ljavax/xml/namespace/QName;"
		);
	}
	
	// Constructors
	void XPathConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::xpath

namespace javax::xml::xpath
{
	class XPathConstants : public __jni_impl::javax::xml::xpath::XPathConstants
	{
	public:
		XPathConstants(QAndroidJniObject obj) { __thiz = obj; }
		XPathConstants()
		{
			__constructor();
		}
	};
} // namespace javax::xml::xpath

