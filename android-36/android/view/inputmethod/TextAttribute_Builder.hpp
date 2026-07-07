#pragma once

#include "../../os/PersistableBundle.def.hpp"
#include "./TextAttribute.def.hpp"
#include "./TextAttribute_Builder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline TextAttribute_Builder::TextAttribute_Builder()
		: JObject(
			"android.view.inputmethod.TextAttribute$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::TextAttribute TextAttribute_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/TextAttribute;"
		);
	}
	inline android::view::inputmethod::TextAttribute_Builder TextAttribute_Builder::setExtras(android::os::PersistableBundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/PersistableBundle;)Landroid/view/inputmethod/TextAttribute$Builder;",
			arg0.object()
		);
	}
	inline android::view::inputmethod::TextAttribute_Builder TextAttribute_Builder::setTextConversionSuggestions(JObject arg0) const
	{
		return callObjectMethod(
			"setTextConversionSuggestions",
			"(Ljava/util/List;)Landroid/view/inputmethod/TextAttribute$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
