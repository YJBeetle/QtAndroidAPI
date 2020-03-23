#pragma once

#ifndef ANDROID_APP_ASSIST_ASSISTSTRUCTURE
#define ANDROID_APP_ASSIST_ASSISTSTRUCTURE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::app::assist
{
	class AssistStructure_WindowNode;
}

namespace __jni_impl::android::app::assist
{
	class AssistStructure : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getAcquisitionStartTime();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jlong getAcquisitionEndTime();
		QAndroidJniObject getActivityComponent();
		jboolean isHomeActivity();
		jint getWindowNodeCount();
		QAndroidJniObject getWindowNodeAt(jint arg0);
	};
} // namespace __jni_impl::android::app::assist

#include "../../os/Parcel.hpp"
#include "../../content/ComponentName.hpp"
#include "AssistStructure_WindowNode.hpp"

namespace __jni_impl::android::app::assist
{
	// Fields
	QAndroidJniObject AssistStructure::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.assist.AssistStructure",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void AssistStructure::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.assist.AssistStructure",
			"()V");
	}
	
	// Methods
	jlong AssistStructure::getAcquisitionStartTime()
	{
		return __thiz.callMethod<jlong>(
			"getAcquisitionStartTime",
			"()J");
	}
	jint AssistStructure::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void AssistStructure::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong AssistStructure::getAcquisitionEndTime()
	{
		return __thiz.callMethod<jlong>(
			"getAcquisitionEndTime",
			"()J");
	}
	QAndroidJniObject AssistStructure::getActivityComponent()
	{
		return __thiz.callObjectMethod(
			"getActivityComponent",
			"()Landroid/content/ComponentName;");
	}
	jboolean AssistStructure::isHomeActivity()
	{
		return __thiz.callMethod<jboolean>(
			"isHomeActivity",
			"()Z");
	}
	jint AssistStructure::getWindowNodeCount()
	{
		return __thiz.callMethod<jint>(
			"getWindowNodeCount",
			"()I");
	}
	QAndroidJniObject AssistStructure::getWindowNodeAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getWindowNodeAt",
			"(I)Landroid/app/assist/AssistStructure$WindowNode;",
			arg0);
	}
} // namespace __jni_impl::android::app::assist

namespace android::app::assist
{
	class AssistStructure : public __jni_impl::android::app::assist::AssistStructure
	{
	public:
		AssistStructure(QAndroidJniObject obj) { __thiz = obj; }
		AssistStructure()
		{
			__constructor();
		}
	};
} // namespace android::app::assist

#endif // ANDROID_APP_ASSIST_ASSISTSTRUCTURE

