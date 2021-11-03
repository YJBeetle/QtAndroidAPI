#include "../../JString.hpp"
#include "./Element.hpp"

namespace android::sax
{
	// Fields
	
	// QAndroidJniObject forward
	Element::Element(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::sax::Element Element::getChild(JString arg0)
	{
		return callObjectMethod(
			"getChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0.object<jstring>()
		);
	}
	android::sax::Element Element::getChild(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"getChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::sax::Element Element::requireChild(JString arg0)
	{
		return callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0.object<jstring>()
		);
	}
	android::sax::Element Element::requireChild(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Element::setElementListener(JObject arg0)
	{
		callMethod<void>(
			"setElementListener",
			"(Landroid/sax/ElementListener;)V",
			arg0.object()
		);
	}
	void Element::setEndElementListener(JObject arg0)
	{
		callMethod<void>(
			"setEndElementListener",
			"(Landroid/sax/EndElementListener;)V",
			arg0.object()
		);
	}
	void Element::setEndTextElementListener(JObject arg0)
	{
		callMethod<void>(
			"setEndTextElementListener",
			"(Landroid/sax/EndTextElementListener;)V",
			arg0.object()
		);
	}
	void Element::setStartElementListener(JObject arg0)
	{
		callMethod<void>(
			"setStartElementListener",
			"(Landroid/sax/StartElementListener;)V",
			arg0.object()
		);
	}
	void Element::setTextElementListener(JObject arg0)
	{
		callMethod<void>(
			"setTextElementListener",
			"(Landroid/sax/TextElementListener;)V",
			arg0.object()
		);
	}
	JString Element::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::sax

