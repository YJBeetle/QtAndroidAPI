#include "./Attributes2Impl.hpp"

namespace org::xml::sax::ext
{
	// Fields
	
	Attributes2Impl::Attributes2Impl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Attributes2Impl::Attributes2Impl()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.ext.Attributes2Impl",
			"()V"
		);
	}
	Attributes2Impl::Attributes2Impl(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.ext.Attributes2Impl",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Attributes2Impl::addAttribute(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz.callMethod<void>(
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
		return __thiz.callMethod<jboolean>(
			"isDeclared",
			"(I)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isDeclared(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isDeclared",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isDeclared(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isDeclared",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean Attributes2Impl::isSpecified(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSpecified",
			"(I)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isSpecified(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSpecified",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean Attributes2Impl::isSpecified(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isSpecified",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	void Attributes2Impl::removeAttribute(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
	void Attributes2Impl::setAttributes(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAttributes",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.__jniObject().object()
		);
	}
	void Attributes2Impl::setDeclared(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setDeclared",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Attributes2Impl::setSpecified(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setSpecified",
			"(IZ)V",
			arg0,
			arg1
		);
	}
} // namespace org::xml::sax::ext

