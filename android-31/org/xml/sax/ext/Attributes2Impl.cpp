#include "../../../../JBooleanArray.hpp"
#include "../../../../JString.hpp"
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
	void Attributes2Impl::addAttribute(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	jboolean Attributes2Impl::isDeclared(jint arg0) const
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(I)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isDeclared(JString arg0) const
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Attributes2Impl::isDeclared(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isDeclared",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jboolean Attributes2Impl::isSpecified(jint arg0) const
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isSpecified(JString arg0) const
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean Attributes2Impl::isSpecified(JString arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"isSpecified",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Attributes2Impl::removeAttribute(jint arg0) const
	{
		callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
	void Attributes2Impl::setAttributes(JObject arg0) const
	{
		callMethod<void>(
			"setAttributes",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		);
	}
	void Attributes2Impl::setDeclared(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setDeclared",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Attributes2Impl::setSpecified(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setSpecified",
			"(IZ)V",
			arg0,
			arg1
		);
	}
} // namespace org::xml::sax::ext

