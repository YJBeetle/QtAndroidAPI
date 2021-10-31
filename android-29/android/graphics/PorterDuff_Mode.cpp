#include "./PorterDuff_Mode.hpp"

namespace android::graphics
{
	// Fields
	QAndroidJniObject PorterDuff_Mode::ADD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"ADD",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::CLEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"CLEAR",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::DARKEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DARKEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::DST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::DST_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_ATOP",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::DST_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_IN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::DST_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_OUT",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::DST_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"DST_OVER",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::LIGHTEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"LIGHTEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::MULTIPLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"MULTIPLY",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::OVERLAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"OVERLAY",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::SCREEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SCREEN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::SRC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::SRC_ATOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_ATOP",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::SRC_IN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_IN",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::SRC_OUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_OUT",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::SRC_OVER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"SRC_OVER",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject PorterDuff_Mode::XOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.PorterDuff$Mode",
			"XOR",
			"Landroid/graphics/PorterDuff$Mode;"
		);
	}
	
	// QAndroidJniObject forward
	PorterDuff_Mode::PorterDuff_Mode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PorterDuff_Mode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PorterDuff$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/PorterDuff$Mode;",
			arg0
		);
	}
	jarray PorterDuff_Mode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.PorterDuff$Mode",
			"values",
			"()[Landroid/graphics/PorterDuff$Mode;"
		).object<jarray>();
	}
} // namespace android::graphics

