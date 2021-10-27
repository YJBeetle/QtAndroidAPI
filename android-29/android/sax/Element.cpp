#include "./Element.hpp"

namespace android::sax
{
	// Fields
	
	Element::Element(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Element::getChild(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0
		);
	}
	QAndroidJniObject Element::getChild(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Element::getChild(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Element::getChild(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Element::requireChild(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0
		);
	}
	QAndroidJniObject Element::requireChild(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Element::requireChild(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Element::requireChild(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Element::setElementListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setElementListener",
			"(Landroid/sax/ElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Element::setEndElementListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEndElementListener",
			"(Landroid/sax/EndElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Element::setEndTextElementListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEndTextElementListener",
			"(Landroid/sax/EndTextElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Element::setStartElementListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setStartElementListener",
			"(Landroid/sax/StartElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Element::setTextElementListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextElementListener",
			"(Landroid/sax/TextElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Element::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::sax

