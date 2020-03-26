#pragma once

#ifndef ANDROID_APP_ASSIST_ASSISTCONTENT
#define ANDROID_APP_ASSIST_ASSISTCONTENT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::app::assist
{
	class AssistContent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getIntent();
		void setIntent(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject getClipData();
		QAndroidJniObject getExtras();
		void setClipData(__jni_impl::android::content::ClipData arg0);
		jboolean isAppProvidedIntent();
		void setStructuredData(jstring arg0);
		jstring getStructuredData();
		void setWebUri(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject getWebUri();
		jboolean isAppProvidedWebUri();
	};
} // namespace __jni_impl::android::app::assist

#include "../../os/Parcel.hpp"
#include "../../content/Intent.hpp"
#include "../../content/ClipData.hpp"
#include "../../os/Bundle.hpp"
#include "../../net/Uri.hpp"

namespace __jni_impl::android::app::assist
{
	// Fields
	QAndroidJniObject AssistContent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.assist.AssistContent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void AssistContent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.assist.AssistContent",
			"()V");
	}
	
	// Methods
	jint AssistContent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AssistContent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AssistContent::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	void AssistContent::setIntent(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AssistContent::getClipData()
	{
		return __thiz.callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	QAndroidJniObject AssistContent::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void AssistContent::setClipData(__jni_impl::android::content::ClipData arg0)
	{
		__thiz.callMethod<void>(
			"setClipData",
			"(Landroid/content/ClipData;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AssistContent::isAppProvidedIntent()
	{
		return __thiz.callMethod<jboolean>(
			"isAppProvidedIntent",
			"()Z"
		);
	}
	void AssistContent::setStructuredData(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setStructuredData",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring AssistContent::getStructuredData()
	{
		return __thiz.callObjectMethod(
			"getStructuredData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AssistContent::setWebUri(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setWebUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AssistContent::getWebUri()
	{
		return __thiz.callObjectMethod(
			"getWebUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean AssistContent::isAppProvidedWebUri()
	{
		return __thiz.callMethod<jboolean>(
			"isAppProvidedWebUri",
			"()Z"
		);
	}
} // namespace __jni_impl::android::app::assist

namespace android::app::assist
{
	class AssistContent : public __jni_impl::android::app::assist::AssistContent
	{
	public:
		AssistContent(QAndroidJniObject obj) { __thiz = obj; }
		AssistContent()
		{
			__constructor();
		}
	};
} // namespace android::app::assist

#endif // ANDROID_APP_ASSIST_ASSISTCONTENT

