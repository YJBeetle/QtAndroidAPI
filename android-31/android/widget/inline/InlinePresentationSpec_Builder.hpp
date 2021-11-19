#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::util
{
	class Size;
}
namespace android::widget::inline_
{
	class InlinePresentationSpec;
}

namespace android::widget::inline_
{
	class InlinePresentationSpec_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InlinePresentationSpec_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlinePresentationSpec_Builder(QJniObject obj);
		
		// Constructors
		InlinePresentationSpec_Builder(android::util::Size arg0, android::util::Size arg1);
		
		// Methods
		android::widget::inline_::InlinePresentationSpec build() const;
		android::widget::inline_::InlinePresentationSpec_Builder setStyle(android::os::Bundle arg0) const;
	};
} // namespace android::widget::inline_

