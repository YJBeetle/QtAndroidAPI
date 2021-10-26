#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST
#define ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textclassifier
{
	class TextClassifier_EntityConfig;
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
	class ConversationActions_Request : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring HINT_FOR_IN_APP();
		static jstring HINT_FOR_NOTIFICATION();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getHints();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
		QAndroidJniObject getTypeConfig();
		QAndroidJniObject getConversation();
		jint getMaxSuggestions();
		jstring getCallingPackageName();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "TextClassifier_EntityConfig.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationActions_Request::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ConversationActions_Request::HINT_FOR_IN_APP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"HINT_FOR_IN_APP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationActions_Request::HINT_FOR_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Request",
			"HINT_FOR_NOTIFICATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ConversationActions_Request::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions$Request",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ConversationActions_Request::getHints()
	{
		return __thiz.callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	jint ConversationActions_Request::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ConversationActions_Request::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ConversationActions_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject ConversationActions_Request::getTypeConfig()
	{
		return __thiz.callObjectMethod(
			"getTypeConfig",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	QAndroidJniObject ConversationActions_Request::getConversation()
	{
		return __thiz.callObjectMethod(
			"getConversation",
			"()Ljava/util/List;"
		);
	}
	jint ConversationActions_Request::getMaxSuggestions()
	{
		return __thiz.callMethod<jint>(
			"getMaxSuggestions",
			"()I"
		);
	}
	jstring ConversationActions_Request::getCallingPackageName()
	{
		return __thiz.callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class ConversationActions_Request : public __jni_impl::android::view::textclassifier::ConversationActions_Request
	{
	public:
		ConversationActions_Request(QAndroidJniObject obj) { __thiz = obj; }
		ConversationActions_Request()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS_REQUEST

