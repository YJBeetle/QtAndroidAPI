#include "./BatchUpdates.hpp"
#include "./CustomDescription.hpp"
#include "../../widget/RemoteViews.hpp"
#include "./CustomDescription_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	CustomDescription_Builder::CustomDescription_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CustomDescription_Builder::CustomDescription_Builder(android::widget::RemoteViews arg0)
		: JObject(
			"android.service.autofill.CustomDescription$Builder",
			"(Landroid/widget/RemoteViews;)V",
			arg0.object()
		) {}
	
	// Methods
	android::service::autofill::CustomDescription_Builder CustomDescription_Builder::addChild(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addChild",
			"(ILandroid/service/autofill/Transformation;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::service::autofill::CustomDescription_Builder CustomDescription_Builder::addOnClickAction(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addOnClickAction",
			"(ILandroid/service/autofill/OnClickAction;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::service::autofill::CustomDescription_Builder CustomDescription_Builder::batchUpdate(JObject arg0, android::service::autofill::BatchUpdates arg1) const
	{
		return callObjectMethod(
			"batchUpdate",
			"(Landroid/service/autofill/Validator;Landroid/service/autofill/BatchUpdates;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::service::autofill::CustomDescription CustomDescription_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/CustomDescription;"
		);
	}
} // namespace android::service::autofill

