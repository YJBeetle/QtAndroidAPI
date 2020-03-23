#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTSELECTIONEVENT
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTSELECTIONEVENT

#include "TextClassifierEvent.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getRelativeWordStartIndex();
		jint getRelativeWordEndIndex();
		jint getRelativeSuggestedWordStartIndex();
		jint getRelativeSuggestedWordEndIndex();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextClassifierEvent_TextSelectionEvent_Builder.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void TextClassifierEvent_TextSelectionEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent",
			"(V)V");
	}
	
	// Methods
	jint TextClassifierEvent_TextSelectionEvent::getRelativeWordStartIndex()
	{
		return __thiz.callMethod<jint>(
			"getRelativeWordStartIndex",
			"()I");
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeWordEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getRelativeWordEndIndex",
			"()I");
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordStartIndex()
	{
		return __thiz.callMethod<jint>(
			"getRelativeSuggestedWordStartIndex",
			"()I");
	}
	jint TextClassifierEvent_TextSelectionEvent::getRelativeSuggestedWordEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getRelativeSuggestedWordEndIndex",
			"()I");
	}
	void TextClassifierEvent_TextSelectionEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_TextSelectionEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent_TextSelectionEvent
	{
	public:
		TextClassifierEvent_TextSelectionEvent(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_TextSelectionEvent()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT_TEXTSELECTIONEVENT

