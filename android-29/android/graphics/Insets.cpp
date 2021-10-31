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
		return getField<jint>(
			"bottom"
		);
	}
	jint Insets::left()
	{
		return getField<jint>(
			"left"
		);
	}
	jint Insets::right()
	{
		return getField<jint>(
			"right"
		);
	}
	jint Insets::top()
	{
		return getField<jint>(
			"top"
		);
	}
	
	// QAndroidJniObject forward
	Insets::Insets(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Insets::add(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"add",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject Insets::max(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"max",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject Insets::min(android::graphics::Insets arg0, android::graphics::Insets arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"min",
			"(Landroid/graphics/Insets;Landroid/graphics/Insets;)Landroid/graphics/Insets;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject Insets::of(android::graphics::Rect arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Insets",
			"of",
			"(Landroid/graphics/Rect;)Landroid/graphics/Insets;",
			arg0.object()
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
			arg0.object(),
			arg1.object()
		);
	}
	jint Insets::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Insets::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Insets::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Insets::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Insets::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

