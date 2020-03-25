#pragma once

#ifndef ANDROID_APP_PERSON
#define ANDROID_APP_PERSON

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::app
{
	class Person_Builder;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}

namespace __jni_impl::android::app
{
	class Person : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getKey();
		QAndroidJniObject toBuilder();
		QAndroidJniObject getUri();
		jboolean isImportant();
		jboolean isBot();
		QAndroidJniObject getIcon();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"
#include "Person_Builder.hpp"
#include "../graphics/drawable/Icon.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject Person::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Person",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void Person::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Person",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Person::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;");
	}
	jboolean Person::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint Person::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Person::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Person::toBuilder()
	{
		return __thiz.callObjectMethod(
			"toBuilder",
			"()Landroid/app/Person$Builder;");
	}
	QAndroidJniObject Person::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Ljava/lang/String;");
	}
	jboolean Person::isImportant()
	{
		return __thiz.callMethod<jboolean>(
			"isImportant",
			"()Z");
	}
	jboolean Person::isBot()
	{
		return __thiz.callMethod<jboolean>(
			"isBot",
			"()Z");
	}
	QAndroidJniObject Person::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;");
	}
	jint Person::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Person::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Person : public __jni_impl::android::app::Person
	{
	public:
		Person(QAndroidJniObject obj) { __thiz = obj; }
		Person()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_PERSON

