#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		QAndroidJniObject getClipData();
		QAndroidJniObject getExtras();
		QAndroidJniObject getIntent();
		jstring getStructuredData();
		QAndroidJniObject getWebUri();
		jboolean isAppProvidedIntent();
		jboolean isAppProvidedWebUri();
		void setClipData(__jni_impl::android::content::ClipData arg0);
		void setIntent(__jni_impl::android::content::Intent arg0);
		void setStructuredData(jstring arg0);
		void setStructuredData(const QString &arg0);
		void setWebUri(__jni_impl::android::net::Uri arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::assist

#include "../../content/ClipData.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

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
			"()V"
		);
	}
	
	// Methods
	jint AssistContent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
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
	QAndroidJniObject AssistContent::getIntent()
	{
		return __thiz.callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring AssistContent::getStructuredData()
	{
		return __thiz.callObjectMethod(
			"getStructuredData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AssistContent::getWebUri()
	{
		return __thiz.callObjectMethod(
			"getWebUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean AssistContent::isAppProvidedIntent()
	{
		return __thiz.callMethod<jboolean>(
			"isAppProvidedIntent",
			"()Z"
		);
	}
	jboolean AssistContent::isAppProvidedWebUri()
	{
		return __thiz.callMethod<jboolean>(
			"isAppProvidedWebUri",
			"()Z"
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
	void AssistContent::setIntent(__jni_impl::android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
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
	void AssistContent::setStructuredData(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setStructuredData",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void AssistContent::setWebUri(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setWebUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
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

