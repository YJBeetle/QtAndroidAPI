#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextClassificationContext;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent_Builder;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifierEvent : public __JniBaseClass
	{
	public:
		// Fields
		static jint CATEGORY_CONVERSATION_ACTIONS();
		static jint CATEGORY_LANGUAGE_DETECTION();
		static jint CATEGORY_LINKIFY();
		static jint CATEGORY_SELECTION();
		static QAndroidJniObject CREATOR();
		static jint TYPE_ACTIONS_GENERATED();
		static jint TYPE_ACTIONS_SHOWN();
		static jint TYPE_AUTO_SELECTION();
		static jint TYPE_COPY_ACTION();
		static jint TYPE_CUT_ACTION();
		static jint TYPE_LINK_CLICKED();
		static jint TYPE_MANUAL_REPLY();
		static jint TYPE_OTHER_ACTION();
		static jint TYPE_OVERTYPE();
		static jint TYPE_PASTE_ACTION();
		static jint TYPE_SELECTION_DESTROYED();
		static jint TYPE_SELECTION_DRAG();
		static jint TYPE_SELECTION_MODIFIED();
		static jint TYPE_SELECTION_RESET();
		static jint TYPE_SELECTION_STARTED();
		static jint TYPE_SELECT_ALL();
		static jint TYPE_SHARE_ACTION();
		static jint TYPE_SMART_ACTION();
		static jint TYPE_SMART_SELECTION_MULTI();
		static jint TYPE_SMART_SELECTION_SINGLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jintArray getActionIndices();
		jarray getEntityTypes();
		jint getEventCategory();
		QAndroidJniObject getEventContext();
		jint getEventIndex();
		jint getEventType();
		QAndroidJniObject getExtras();
		QAndroidJniObject getLocale();
		jstring getModelName();
		jstring getResultId();
		jfloatArray getScores();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "TextClassificationContext.hpp"
#include "TextClassifierEvent_Builder.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	jint TextClassifierEvent::CATEGORY_CONVERSATION_ACTIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_CONVERSATION_ACTIONS"
		);
	}
	jint TextClassifierEvent::CATEGORY_LANGUAGE_DETECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_LANGUAGE_DETECTION"
		);
	}
	jint TextClassifierEvent::CATEGORY_LINKIFY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_LINKIFY"
		);
	}
	jint TextClassifierEvent::CATEGORY_SELECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"CATEGORY_SELECTION"
		);
	}
	QAndroidJniObject TextClassifierEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassifierEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TextClassifierEvent::TYPE_ACTIONS_GENERATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_ACTIONS_GENERATED"
		);
	}
	jint TextClassifierEvent::TYPE_ACTIONS_SHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_ACTIONS_SHOWN"
		);
	}
	jint TextClassifierEvent::TYPE_AUTO_SELECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_AUTO_SELECTION"
		);
	}
	jint TextClassifierEvent::TYPE_COPY_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_COPY_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_CUT_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_CUT_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_LINK_CLICKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_LINK_CLICKED"
		);
	}
	jint TextClassifierEvent::TYPE_MANUAL_REPLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_MANUAL_REPLY"
		);
	}
	jint TextClassifierEvent::TYPE_OTHER_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_OTHER_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_OVERTYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_OVERTYPE"
		);
	}
	jint TextClassifierEvent::TYPE_PASTE_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_PASTE_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_DESTROYED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_DESTROYED"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_DRAG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_DRAG"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_MODIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_MODIFIED"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_RESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_RESET"
		);
	}
	jint TextClassifierEvent::TYPE_SELECTION_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECTION_STARTED"
		);
	}
	jint TextClassifierEvent::TYPE_SELECT_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SELECT_ALL"
		);
	}
	jint TextClassifierEvent::TYPE_SHARE_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SHARE_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_SMART_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_ACTION"
		);
	}
	jint TextClassifierEvent::TYPE_SMART_SELECTION_MULTI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_SELECTION_MULTI"
		);
	}
	jint TextClassifierEvent::TYPE_SMART_SELECTION_SINGLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextClassifierEvent",
			"TYPE_SMART_SELECTION_SINGLE"
		);
	}
	
	// Constructors
	void TextClassifierEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent",
			"(V)V");
	}
	
	// Methods
	jint TextClassifierEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jintArray TextClassifierEvent::getActionIndices()
	{
		return __thiz.callObjectMethod(
			"getActionIndices",
			"()[I"
		).object<jintArray>();
	}
	jarray TextClassifierEvent::getEntityTypes()
	{
		return __thiz.callObjectMethod(
			"getEntityTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint TextClassifierEvent::getEventCategory()
	{
		return __thiz.callMethod<jint>(
			"getEventCategory",
			"()I"
		);
	}
	QAndroidJniObject TextClassifierEvent::getEventContext()
	{
		return __thiz.callObjectMethod(
			"getEventContext",
			"()Landroid/view/textclassifier/TextClassificationContext;"
		);
	}
	jint TextClassifierEvent::getEventIndex()
	{
		return __thiz.callMethod<jint>(
			"getEventIndex",
			"()I"
		);
	}
	jint TextClassifierEvent::getEventType()
	{
		return __thiz.callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	QAndroidJniObject TextClassifierEvent::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject TextClassifierEvent::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jstring TextClassifierEvent::getModelName()
	{
		return __thiz.callObjectMethod(
			"getModelName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassifierEvent::getResultId()
	{
		return __thiz.callObjectMethod(
			"getResultId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloatArray TextClassifierEvent::getScores()
	{
		return __thiz.callObjectMethod(
			"getScores",
			"()[F"
		).object<jfloatArray>();
	}
	jstring TextClassifierEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextClassifierEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassifierEvent : public __jni_impl::android::view::textclassifier::TextClassifierEvent
	{
	public:
		TextClassifierEvent(QAndroidJniObject obj) { __thiz = obj; }
		TextClassifierEvent()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIEREVENT

