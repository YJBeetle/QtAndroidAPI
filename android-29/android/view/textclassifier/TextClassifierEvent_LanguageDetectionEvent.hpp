#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./TextClassifierEvent.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent
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
	QAndroidJniObject TextClassifierEvent_LanguageDetectionEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextClassifierEvent_LanguageDetectionEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent_LanguageDetectionEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent_LanguageDetectionEvent
	{
	public:
		TextClassifierEvent_LanguageDetectionEvent(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent_LanguageDetectionEvent()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

