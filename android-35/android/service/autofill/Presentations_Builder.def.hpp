#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class InlinePresentation;
}
namespace android::service::autofill
{
	class Presentations;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::service::autofill
{
	class Presentations_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Presentations_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Presentations_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Presentations_Builder();
		
		// Methods
		android::service::autofill::Presentations build() const;
		android::service::autofill::Presentations_Builder setDialogPresentation(android::widget::RemoteViews arg0) const;
		android::service::autofill::Presentations_Builder setInlinePresentation(android::service::autofill::InlinePresentation arg0) const;
		android::service::autofill::Presentations_Builder setInlineTooltipPresentation(android::service::autofill::InlinePresentation arg0) const;
		android::service::autofill::Presentations_Builder setMenuPresentation(android::widget::RemoteViews arg0) const;
	};
} // namespace android::service::autofill

