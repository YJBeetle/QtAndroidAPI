#pragma once

#ifndef ANDROID_CONTENT_INTENT_SHORTCUTICONRESOURCE
#define ANDROID_CONTENT_INTENT_SHORTCUTICONRESOURCE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class Intent_ShortcutIconResource : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		QAndroidJniObject packageName();
		QAndroidJniObject resourceName();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		static QAndroidJniObject fromContext(__jni_impl::android::content::Context arg0, jint arg1);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "Context.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject Intent_ShortcutIconResource::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.Intent$ShortcutIconResource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject Intent_ShortcutIconResource::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;");
	}
	QAndroidJniObject Intent_ShortcutIconResource::resourceName()
	{
		return __thiz.getObjectField(
			"resourceName",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Intent_ShortcutIconResource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.Intent$ShortcutIconResource",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Intent_ShortcutIconResource::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Intent_ShortcutIconResource::fromContext(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.Intent$ShortcutIconResource",
			"fromContext",
			"(Landroid/content/Context;I)Landroid/content/Intent$ShortcutIconResource;",
			arg0.__jniObject().object(),
			arg1);
	}
	jint Intent_ShortcutIconResource::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Intent_ShortcutIconResource::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class Intent_ShortcutIconResource : public __jni_impl::android::content::Intent_ShortcutIconResource
	{
	public:
		Intent_ShortcutIconResource(QAndroidJniObject obj) { __thiz = obj; }
		Intent_ShortcutIconResource()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_INTENT_SHORTCUTICONRESOURCE

