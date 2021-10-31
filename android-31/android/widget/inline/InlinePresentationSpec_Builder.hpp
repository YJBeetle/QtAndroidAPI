#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::util
{
	class Size;
}
namespace android::widget::inline
{
	class InlinePresentationSpec;
}

namespace android::widget::inline
{
	class InlinePresentationSpec_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InlinePresentationSpec_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InlinePresentationSpec_Builder(QAndroidJniObject obj);
		
		// Constructors
		InlinePresentationSpec_Builder(android::util::Size arg0, android::util::Size arg1);
		
		// Methods
		android::widget::inline::InlinePresentationSpec build();
		android::widget::inline::InlinePresentationSpec_Builder setStyle(android::os::Bundle arg0);
	};
} // namespace android::widget::inline

