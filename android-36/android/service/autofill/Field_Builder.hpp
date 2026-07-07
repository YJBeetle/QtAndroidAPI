#pragma once

#include "./Field.def.hpp"
#include "./Presentations.def.hpp"
#include "../../view/autofill/AutofillValue.def.hpp"
#include "../../../java/util/regex/Pattern.def.hpp"
#include "./Field_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline Field_Builder::Field_Builder()
		: JObject(
			"android.service.autofill.Field$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::autofill::Field Field_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/Field;"
		);
	}
	inline android::service::autofill::Field_Builder Field_Builder::setFilter(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"setFilter",
			"(Ljava/util/regex/Pattern;)Landroid/service/autofill/Field$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::Field_Builder Field_Builder::setPresentations(android::service::autofill::Presentations arg0) const
	{
		return callObjectMethod(
			"setPresentations",
			"(Landroid/service/autofill/Presentations;)Landroid/service/autofill/Field$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::Field_Builder Field_Builder::setValue(android::view::autofill::AutofillValue arg0) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillValue;)Landroid/service/autofill/Field$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
