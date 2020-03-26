#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT

#include "../../../__JniBaseClass.hpp"
#include "TextClassifierEvent.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifierEvent_TextLinkifyEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextClassifierEvent_TextLinkifyEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextLinkifyEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent_TextLinkifyEvent
	{
	public:
		TextClassifierEvent_TextLinkifyEvent(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_TextLinkifyEvent()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTLINKIFYEVENT

