#pragma once

#include "./TextClassificationContext.def.hpp"
#include "../../../JString.hpp"
#include "./TextClassificationContext_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextClassificationContext_Builder::TextClassificationContext_Builder(JString arg0, JString arg1)
		: JObject(
			"android.view.textclassifier.TextClassificationContext$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::view::textclassifier::TextClassificationContext TextClassificationContext_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassificationContext;"
		);
	}
	inline android::view::textclassifier::TextClassificationContext_Builder TextClassificationContext_Builder::setWidgetVersion(JString arg0) const
	{
		return callObjectMethod(
			"setWidgetVersion",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassificationContext$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
