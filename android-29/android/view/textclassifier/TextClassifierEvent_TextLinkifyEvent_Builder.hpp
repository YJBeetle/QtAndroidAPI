#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent_Builder.hpp"

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent_Builder : public android::view::textclassifier::TextClassifierEvent_Builder
	{
	public:
		// Fields
		
		TextClassifierEvent_TextLinkifyEvent_Builder(QAndroidJniObject obj);
		// Constructors
		TextClassifierEvent_TextLinkifyEvent_Builder(jint arg0);
		TextClassifierEvent_TextLinkifyEvent_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
	};
} // namespace android::view::textclassifier

