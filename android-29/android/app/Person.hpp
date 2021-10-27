#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Person_Builder;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getIcon();
		jstring getKey();
		jstring getName();
		jstring getUri();
		jint hashCode();
		jboolean isBot();
		jboolean isImportant();
		QAndroidJniObject toBuilder();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "./Person_Builder.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject Person::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Person",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Person::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.Person",
			"(V)V");
	}
	
	// Methods
	jint Person::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Person::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Person::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring Person::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Person::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Person::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Person::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Person::isBot()
	{
		return __thiz.callMethod<jboolean>(
			"isBot",
			"()Z"
		);
	}
	jboolean Person::isImportant()
	{
		return __thiz.callMethod<jboolean>(
			"isImportant",
			"()Z"
		);
	}
	QAndroidJniObject Person::toBuilder()
	{
		return __thiz.callObjectMethod(
			"toBuilder",
			"()Landroid/app/Person$Builder;"
		);
	}
	void Person::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

