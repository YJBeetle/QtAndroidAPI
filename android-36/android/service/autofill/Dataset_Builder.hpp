#pragma once

#include "../../content/IntentSender.def.hpp"
#include "./Dataset.def.hpp"
#include "./Field.def.hpp"
#include "./InlinePresentation.def.hpp"
#include "./Presentations.def.hpp"
#include "../../view/autofill/AutofillId.def.hpp"
#include "../../view/autofill/AutofillValue.def.hpp"
#include "../../widget/RemoteViews.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/regex/Pattern.def.hpp"
#include "./Dataset_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline Dataset_Builder::Dataset_Builder()
		: JObject(
			"android.service.autofill.Dataset$Builder",
			"()V"
		) {}
	inline Dataset_Builder::Dataset_Builder(android::service::autofill::Presentations arg0)
		: JObject(
			"android.service.autofill.Dataset$Builder",
			"(Landroid/service/autofill/Presentations;)V",
			arg0.object()
		) {}
	inline Dataset_Builder::Dataset_Builder(android::widget::RemoteViews arg0)
		: JObject(
			"android.service.autofill.Dataset$Builder",
			"(Landroid/widget/RemoteViews;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::service::autofill::Dataset Dataset_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/Dataset;"
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setAuthentication(android::content::IntentSender arg0) const
	{
		return callObjectMethod(
			"setAuthentication",
			"(Landroid/content/IntentSender;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setField(android::view::autofill::AutofillId arg0, android::service::autofill::Field arg1) const
	{
		return callObjectMethod(
			"setField",
			"(Landroid/view/autofill/AutofillId;Landroid/service/autofill/Field;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setField(JString arg0, android::service::autofill::Field arg1) const
	{
		return callObjectMethod(
			"setField",
			"(Ljava/lang/String;Landroid/service/autofill/Field;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setFieldForAllHints(android::service::autofill::Field arg0) const
	{
		return callObjectMethod(
			"setFieldForAllHints",
			"(Landroid/service/autofill/Field;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setInlinePresentation(android::service::autofill::InlinePresentation arg0) const
	{
		return callObjectMethod(
			"setInlinePresentation",
			"(Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setInlinePresentation(android::service::autofill::InlinePresentation arg0, android::service::autofill::InlinePresentation arg1) const
	{
		return callObjectMethod(
			"setInlinePresentation",
			"(Landroid/service/autofill/InlinePresentation;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Landroid/widget/RemoteViews;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2, android::service::autofill::InlinePresentation arg3) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;Landroid/widget/RemoteViews;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2, android::service::autofill::InlinePresentation arg3, android::service::autofill::InlinePresentation arg4) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3, android::service::autofill::InlinePresentation arg4) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3, android::service::autofill::InlinePresentation arg4, android::service::autofill::InlinePresentation arg5) const
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
