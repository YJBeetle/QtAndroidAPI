#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent : public android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextClassifierEvent_TextLinkifyEvent(QAndroidJniObject obj);
		// Constructors
		TextClassifierEvent_TextLinkifyEvent() = default;
		
		// Methods
	};
} // namespace android::view::textclassifier

