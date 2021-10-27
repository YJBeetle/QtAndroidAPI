#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::graphics
{
	class Insets : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject NONE();
		jint bottom();
		jint left();
		jint right();
		jint top();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject add(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Insets arg1);
		static QAndroidJniObject max(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Insets arg1);
		static QAndroidJniObject min(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Insets arg1);
		static QAndroidJniObject of(__jni_impl::android::graphics::Rect arg0);
		static QAndroidJniObject of(jint arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject subtract(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Insets arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics

#include "Rect.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Insets::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Insets",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject Insets::NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Insets",
			"NONE",
			"Landroid/graphics/Insets;"
		);
	}
	jint Insets::bottom()
	{
		return __thiz.getField<jint>(
			"bottom"
		);
	}
	jint Insets::left()
	{
		return __thiz.getField<jint>(
			"left"
		);
	}
	jint Insets::right()
	{
		return __thiz.getField<jint>(
			"right"
		);
	}
	jint Insets::top()
	{
		return __thiz.getField<jint>(
			"top"
		);
	}
	
	// Constructors
	void Insets::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Insets",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Insets::add(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"add",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Insets::max(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"max",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Insets::min(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"min",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Insets::of(__jni_impl::android::graphics::Rect arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"of",
			"(Landroid/graphics/Rect;)Landroid/graphics/Insets;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Insets::of(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"of",
			"(IIII)Landroid/graphics/Insets;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Insets::subtract(__jni_impl::android::graphics::Insets arg0, __jni_impl::android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"subtract",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Insets::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Insets::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Insets::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Insets::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Insets::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Insets : public __jni_impl::android::graphics::Insets
	{
	public:
		Insets(QAndroidJniObject obj) { __thiz = obj; }
		Insets()
		{
			__constructor();
		}
	};
} // namespace android::graphics

