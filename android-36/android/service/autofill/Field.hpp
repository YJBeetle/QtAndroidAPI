#pragma once

#include "./Presentations.def.hpp"
#include "../../view/autofill/AutofillValue.def.hpp"
#include "../../../java/util/regex/Pattern.def.hpp"
#include "./Field.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::regex::Pattern Field::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Ljava/util/regex/Pattern;"
		);
	}
	inline android::service::autofill::Presentations Field::getPresentations() const
	{
		return callObjectMethod(
			"getPresentations",
			"()Landroid/service/autofill/Presentations;"
		);
	}
	inline android::view::autofill::AutofillValue Field::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
