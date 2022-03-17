#pragma once

#include "../../os/Bundle.def.hpp"
#include "./TextLinks.def.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextLinks_Builder::TextLinks_Builder(JString arg0)
		: JObject(
			"android.view.textclassifier.TextLinks$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::view::textclassifier::TextLinks_Builder TextLinks_Builder::addLink(jint arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"addLink",
			"(IILjava/util/Map;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::view::textclassifier::TextLinks_Builder TextLinks_Builder::addLink(jint arg0, jint arg1, JObject arg2, android::os::Bundle arg3) const
	{
		return callObjectMethod(
			"addLink",
			"(IILjava/util/Map;Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline android::view::textclassifier::TextLinks TextLinks_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks;"
		);
	}
	inline android::view::textclassifier::TextLinks_Builder TextLinks_Builder::clearTextLinks() const
	{
		return callObjectMethod(
			"clearTextLinks",
			"()Landroid/view/textclassifier/TextLinks$Builder;"
		);
	}
	inline android::view::textclassifier::TextLinks_Builder TextLinks_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

