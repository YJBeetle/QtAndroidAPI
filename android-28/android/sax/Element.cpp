#include "../../JString.hpp"
#include "./Element.hpp"

namespace android::sax
{
	// Fields
	
	// Constructors
	
	// Methods
	android::sax::Element Element::getChild(JString arg0) const
	{
		return callObjectMethod(
			"getChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0.object<jstring>()
		);
	}
	android::sax::Element Element::getChild(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::sax::Element Element::requireChild(JString arg0) const
	{
		return callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0.object<jstring>()
		);
	}
	android::sax::Element Element::requireChild(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Element::setElementListener(JObject arg0) const
	{
		callMethod<void>(
			"setElementListener",
			"(Landroid/sax/ElementListener;)V",
			arg0.object()
		);
	}
	void Element::setEndElementListener(JObject arg0) const
	{
		callMethod<void>(
			"setEndElementListener",
			"(Landroid/sax/EndElementListener;)V",
			arg0.object()
		);
	}
	void Element::setEndTextElementListener(JObject arg0) const
	{
		callMethod<void>(
			"setEndTextElementListener",
			"(Landroid/sax/EndTextElementListener;)V",
			arg0.object()
		);
	}
	void Element::setStartElementListener(JObject arg0) const
	{
		callMethod<void>(
			"setStartElementListener",
			"(Landroid/sax/StartElementListener;)V",
			arg0.object()
		);
	}
	void Element::setTextElementListener(JObject arg0) const
	{
		callMethod<void>(
			"setTextElementListener",
			"(Landroid/sax/TextElementListener;)V",
			arg0.object()
		);
	}
	JString Element::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::sax

