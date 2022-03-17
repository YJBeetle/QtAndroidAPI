#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "./TextClassifier_EntityConfig.def.hpp"
#include "./TextLinks_Request.def.hpp"
#include "../../../JString.hpp"
#include "./TextLinks_Request_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextLinks_Request_Builder::TextLinks_Request_Builder(JString arg0)
		: JObject(
			"android.view.textclassifier.TextLinks$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::view::textclassifier::TextLinks_Request TextLinks_Request_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks$Request;"
		);
	}
	inline android::view::textclassifier::TextLinks_Request_Builder TextLinks_Request_Builder::setDefaultLocales(android::os::LocaleList arg0) const
	{
		return callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextLinks_Request_Builder TextLinks_Request_Builder::setEntityConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0) const
	{
		return callObjectMethod(
			"setEntityConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextLinks_Request_Builder TextLinks_Request_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
