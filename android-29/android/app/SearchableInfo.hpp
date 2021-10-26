#pragma once

#ifndef ANDROID_APP_SEARCHABLEINFO
#define ANDROID_APP_SEARCHABLEINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}

namespace __jni_impl::android::app
{
	class SearchableInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getInputType();
		jint getImeOptions();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getSuggestAuthority();
		jstring getSuggestPackage();
		QAndroidJniObject getSearchActivity();
		jboolean shouldRewriteQueryFromData();
		jboolean shouldRewriteQueryFromText();
		jint getSettingsDescriptionId();
		jstring getSuggestPath();
		jstring getSuggestSelection();
		jstring getSuggestIntentAction();
		jstring getSuggestIntentData();
		jint getSuggestThreshold();
		jint getHintId();
		jboolean getVoiceSearchEnabled();
		jboolean getVoiceSearchLaunchWebSearch();
		jboolean getVoiceSearchLaunchRecognizer();
		jint getVoiceLanguageModeId();
		jint getVoicePromptTextId();
		jint getVoiceLanguageId();
		jint getVoiceMaxResults();
		jboolean shouldIncludeInGlobalSearch();
		jboolean queryAfterZeroResults();
		jboolean autoUrlDetect();
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"
#include "../content/ComponentName.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject SearchableInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.SearchableInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void SearchableInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.SearchableInfo",
			"(V)V");
	}
	
	// Methods
	jint SearchableInfo::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jint SearchableInfo::getImeOptions()
	{
		return __thiz.callMethod<jint>(
			"getImeOptions",
			"()I"
		);
	}
	jint SearchableInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SearchableInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring SearchableInfo::getSuggestAuthority()
	{
		return __thiz.callObjectMethod(
			"getSuggestAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestPackage()
	{
		return __thiz.callObjectMethod(
			"getSuggestPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SearchableInfo::getSearchActivity()
	{
		return __thiz.callObjectMethod(
			"getSearchActivity",
			"()Landroid/content/ComponentName;"
		);
	}
	jboolean SearchableInfo::shouldRewriteQueryFromData()
	{
		return __thiz.callMethod<jboolean>(
			"shouldRewriteQueryFromData",
			"()Z"
		);
	}
	jboolean SearchableInfo::shouldRewriteQueryFromText()
	{
		return __thiz.callMethod<jboolean>(
			"shouldRewriteQueryFromText",
			"()Z"
		);
	}
	jint SearchableInfo::getSettingsDescriptionId()
	{
		return __thiz.callMethod<jint>(
			"getSettingsDescriptionId",
			"()I"
		);
	}
	jstring SearchableInfo::getSuggestPath()
	{
		return __thiz.callObjectMethod(
			"getSuggestPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestSelection()
	{
		return __thiz.callObjectMethod(
			"getSuggestSelection",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestIntentAction()
	{
		return __thiz.callObjectMethod(
			"getSuggestIntentAction",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SearchableInfo::getSuggestIntentData()
	{
		return __thiz.callObjectMethod(
			"getSuggestIntentData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SearchableInfo::getSuggestThreshold()
	{
		return __thiz.callMethod<jint>(
			"getSuggestThreshold",
			"()I"
		);
	}
	jint SearchableInfo::getHintId()
	{
		return __thiz.callMethod<jint>(
			"getHintId",
			"()I"
		);
	}
	jboolean SearchableInfo::getVoiceSearchEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"getVoiceSearchEnabled",
			"()Z"
		);
	}
	jboolean SearchableInfo::getVoiceSearchLaunchWebSearch()
	{
		return __thiz.callMethod<jboolean>(
			"getVoiceSearchLaunchWebSearch",
			"()Z"
		);
	}
	jboolean SearchableInfo::getVoiceSearchLaunchRecognizer()
	{
		return __thiz.callMethod<jboolean>(
			"getVoiceSearchLaunchRecognizer",
			"()Z"
		);
	}
	jint SearchableInfo::getVoiceLanguageModeId()
	{
		return __thiz.callMethod<jint>(
			"getVoiceLanguageModeId",
			"()I"
		);
	}
	jint SearchableInfo::getVoicePromptTextId()
	{
		return __thiz.callMethod<jint>(
			"getVoicePromptTextId",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceLanguageId()
	{
		return __thiz.callMethod<jint>(
			"getVoiceLanguageId",
			"()I"
		);
	}
	jint SearchableInfo::getVoiceMaxResults()
	{
		return __thiz.callMethod<jint>(
			"getVoiceMaxResults",
			"()I"
		);
	}
	jboolean SearchableInfo::shouldIncludeInGlobalSearch()
	{
		return __thiz.callMethod<jboolean>(
			"shouldIncludeInGlobalSearch",
			"()Z"
		);
	}
	jboolean SearchableInfo::queryAfterZeroResults()
	{
		return __thiz.callMethod<jboolean>(
			"queryAfterZeroResults",
			"()Z"
		);
	}
	jboolean SearchableInfo::autoUrlDetect()
	{
		return __thiz.callMethod<jboolean>(
			"autoUrlDetect",
			"()Z"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class SearchableInfo : public __jni_impl::android::app::SearchableInfo
	{
	public:
		SearchableInfo(QAndroidJniObject obj) { __thiz = obj; }
		SearchableInfo()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_SEARCHABLEINFO

