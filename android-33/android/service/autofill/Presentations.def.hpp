#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class InlinePresentation;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::service::autofill
{
	class Presentations : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Presentations(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Presentations(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::widget::RemoteViews getDialogPresentation() const;
		android::service::autofill::InlinePresentation getInlinePresentation() const;
		android::service::autofill::InlinePresentation getInlineTooltipPresentation() const;
		android::widget::RemoteViews getMenuPresentation() const;
	};
} // namespace android::service::autofill

