#include "./Rect.hpp"
#include "../os/Parcel.hpp"
#include "./Insets.hpp"

namespace android::graphics
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
	
	Insets::Insets(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Insets::add(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"add",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Insets::max(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"max",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Insets::min(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"min",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Insets::of(android::graphics::Rect arg0)
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
	QAndroidJniObject Insets::subtract(android::graphics::Insets arg0, android::graphics::Insets arg1)
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
	void Insets::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::graphics

