#include "./Attributes2Impl.hpp"

namespace org::xml::sax::ext
{
	// Fields
	
	// QAndroidJniObject forward
	Attributes2Impl::Attributes2Impl(QAndroidJniObject obj) : org::xml::sax::helpers::AttributesImpl(obj) {}
	
	// Constructors
	Attributes2Impl::Attributes2Impl()
		: org::xml::sax::helpers::AttributesImpl(
			"org.xml.sax.ext.Attributes2Impl",
			"()V"
		) {}
	Attributes2Impl::Attributes2Impl(JObject arg0)
		: org::xml::sax::helpers::AttributesImpl(
			"org.xml.sax.ext.Attributes2Impl",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		) {}
	
	// Methods
	void Attributes2Impl::addAttribute(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean Attributes2Impl::isDeclared(jint arg0)
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(I)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isDeclared(jstring arg0)
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isDeclared(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean Attributes2Impl::isSpecified(jint arg0)
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isSpecified(jstring arg0)
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isSpecified(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	void Attributes2Impl::removeAttribute(jint arg0)
	{
		callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
	void Attributes2Impl::setAttributes(JObject arg0)
	{
		callMethod<void>(
			"setAttributes",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		);
	}
	void Attributes2Impl::setDeclared(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setDeclared",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Attributes2Impl::setSpecified(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setSpecified",
			"(IZ)V",
			arg0,
			arg1
		);
	}
} // namespace org::xml::sax::ext

