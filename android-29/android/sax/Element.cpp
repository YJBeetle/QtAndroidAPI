#include "./Element.hpp"

namespace android::sax
{
	// Fields
	
	// QAndroidJniObject forward
	Element::Element(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Element::getChild(jstring arg0)
	{
		return callObjectMethod(
			"getChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0
		);
	}
	QAndroidJniObject Element::getChild(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Element::requireChild(jstring arg0)
	{
		return callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0
		);
	}
	QAndroidJniObject Element::requireChild(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0,
			arg1
		);
	}
	void Element::setElementListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setElementListener",
			"(Landroid/sax/ElementListener;)V",
			arg0.object()
		);
	}
	void Element::setEndElementListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEndElementListener",
			"(Landroid/sax/EndElementListener;)V",
			arg0.object()
		);
	}
	void Element::setEndTextElementListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEndTextElementListener",
			"(Landroid/sax/EndTextElementListener;)V",
			arg0.object()
		);
	}
	void Element::setStartElementListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setStartElementListener",
			"(Landroid/sax/StartElementListener;)V",
			arg0.object()
		);
	}
	void Element::setTextElementListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setTextElementListener",
			"(Landroid/sax/TextElementListener;)V",
			arg0.object()
		);
	}
	jstring Element::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::sax

