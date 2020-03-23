#pragma once

#ifndef ANDROID_CONTENT_COMPONENTNAME
#define ANDROID_CONTENT_COMPONENTNAME

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::content
{
	class ComponentName : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::android::content::Context arg0, jclass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject clone();
		jint compareTo(__jni_impl::android::content::ComponentName arg0);
		jint compareTo(jobject arg0);
		QAndroidJniObject getPackageName();
		QAndroidJniObject toShortString();
		QAndroidJniObject getClassName();
		static QAndroidJniObject readFromParcel(__jni_impl::android::os::Parcel arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static void writeToParcel(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::Parcel arg1);
		static QAndroidJniObject createRelative(__jni_impl::android::content::Context arg0, jstring arg1);
		static QAndroidJniObject createRelative(jstring arg0, jstring arg1);
		QAndroidJniObject getShortClassName();
		QAndroidJniObject flattenToString();
		QAndroidJniObject flattenToShortString();
		static QAndroidJniObject unflattenFromString(jstring arg0);
	};
} // namespace __jni_impl::android::content

#include "../os/Parcel.hpp"
#include "Context.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject ComponentName::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ComponentName",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void ComponentName::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	void ComponentName::__constructor(__jni_impl::android::content::Context arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ComponentName::__constructor(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ComponentName::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean ComponentName::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ComponentName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ComponentName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject ComponentName::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/content/ComponentName;");
	}
	jint ComponentName::compareTo(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object());
	}
	jint ComponentName::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	QAndroidJniObject ComponentName::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ComponentName::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ComponentName::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ComponentName::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/ComponentName;",
			arg0.__jniObject().object());
	}
	jint ComponentName::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ComponentName::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void ComponentName::writeToParcel(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ComponentName",
			"writeToParcel",
			"(Landroid/content/ComponentName;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject ComponentName::createRelative(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ComponentName::createRelative(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0,
			arg1);
	}
	QAndroidJniObject ComponentName::getShortClassName()
	{
		return __thiz.callObjectMethod(
			"getShortClassName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ComponentName::flattenToString()
	{
		return __thiz.callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ComponentName::flattenToShortString()
	{
		return __thiz.callObjectMethod(
			"flattenToShortString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ComponentName::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ComponentName : public __jni_impl::android::content::ComponentName
	{
	public:
		ComponentName(QAndroidJniObject obj) { __thiz = obj; }
		ComponentName(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		ComponentName(__jni_impl::android::content::Context arg0, jclass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ComponentName(__jni_impl::android::content::Context arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ComponentName(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_COMPONENTNAME

