#pragma once

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
	class ComponentName : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::android::content::Context arg0, jclass arg1);
		void __constructor(__jni_impl::android::content::Context arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::Context arg0, const QString &arg1);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		static QAndroidJniObject createRelative(__jni_impl::android::content::Context arg0, jstring arg1);
		static QAndroidJniObject createRelative(__jni_impl::android::content::Context arg0, const QString &arg1);
		static QAndroidJniObject createRelative(jstring arg0, jstring arg1);
		static QAndroidJniObject createRelative(const QString &arg0, const QString &arg1);
		static QAndroidJniObject readFromParcel(__jni_impl::android::os::Parcel arg0);
		static QAndroidJniObject unflattenFromString(jstring arg0);
		static QAndroidJniObject unflattenFromString(const QString &arg0);
		static void writeToParcel(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::Parcel arg1);
		QAndroidJniObject clone();
		jint compareTo(__jni_impl::android::content::ComponentName arg0);
		jint compareTo(jobject arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring flattenToShortString();
		jstring flattenToString();
		jstring getClassName();
		jstring getPackageName();
		jstring getShortClassName();
		jint hashCode();
		jstring toShortString();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "./Context.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject ComponentName::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ComponentName",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ComponentName::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ComponentName::__constructor(__jni_impl::android::content::Context arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/Class;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ComponentName::__constructor(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ComponentName::__constructor(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ComponentName::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ComponentName::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.ComponentName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject ComponentName::createRelative(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ComponentName::createRelative(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ComponentName::createRelative(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ComponentName::createRelative(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"createRelative",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ComponentName::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/ComponentName;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ComponentName::unflattenFromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/content/ComponentName;",
			arg0
		);
	}
	QAndroidJniObject ComponentName::unflattenFromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ComponentName",
			"unflattenFromString",
			"(Ljava/lang/String;)Landroid/content/ComponentName;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ComponentName::writeToParcel(__jni_impl::android::content::ComponentName arg0, __jni_impl::android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.ComponentName",
			"writeToParcel",
			"(Landroid/content/ComponentName;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ComponentName::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/content/ComponentName;"
		);
	}
	jint ComponentName::compareTo(__jni_impl::android::content::ComponentName arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/content/ComponentName;)I",
			arg0.__jniObject().object()
		);
	}
	jint ComponentName::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ComponentName::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ComponentName::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ComponentName::flattenToShortString()
	{
		return __thiz.callObjectMethod(
			"flattenToShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::flattenToString()
	{
		return __thiz.callObjectMethod(
			"flattenToString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::getShortClassName()
	{
		return __thiz.callObjectMethod(
			"getShortClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ComponentName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ComponentName::toShortString()
	{
		return __thiz.callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ComponentName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ComponentName::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

