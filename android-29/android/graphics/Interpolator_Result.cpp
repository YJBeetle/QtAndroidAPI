#include "./Interpolator_Result.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject Interpolator_Result::FREEZE_END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"FREEZE_END",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	QAndroidJniObject Interpolator_Result::FREEZE_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"FREEZE_START",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	QAndroidJniObject Interpolator_Result::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Interpolator$Result",
			"NORMAL",
			"Landroid/graphics/Interpolator$Result;"
		);
	}
	
	// QAndroidJniObject forward
	Interpolator_Result::Interpolator_Result(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Interpolator_Result::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Interpolator$Result;",
			arg0
		);
	}
	jarray Interpolator_Result::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Interpolator$Result",
			"values",
			"()[Landroid/graphics/Interpolator$Result;"
		).object<jarray>();
	}
} // namespace android::graphics

