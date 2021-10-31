#include "../content/res/AssetManager.hpp"
#include "../../java/io/File.hpp"
#include "./Typeface.hpp"

namespace android::graphics
{
	// Fields
	jint Typeface::BOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Typeface",
			"BOLD"
		);
	}
	jint Typeface::BOLD_ITALIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Typeface",
			"BOLD_ITALIC"
		);
	}
	QAndroidJniObject Typeface::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Typeface",
			"DEFAULT",
			"Landroid/graphics/Typeface;"
		);
	}
	QAndroidJniObject Typeface::DEFAULT_BOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Typeface",
			"DEFAULT_BOLD",
			"Landroid/graphics/Typeface;"
		);
	}
	jint Typeface::ITALIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Typeface",
			"ITALIC"
		);
	}
	QAndroidJniObject Typeface::MONOSPACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Typeface",
			"MONOSPACE",
			"Landroid/graphics/Typeface;"
		);
	}
	jint Typeface::NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Typeface",
			"NORMAL"
		);
	}
	QAndroidJniObject Typeface::SANS_SERIF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Typeface",
			"SANS_SERIF",
			"Landroid/graphics/Typeface;"
		);
	}
	QAndroidJniObject Typeface::SERIF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Typeface",
			"SERIF",
			"Landroid/graphics/Typeface;"
		);
	}
	
	// QAndroidJniObject forward
	Typeface::Typeface(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Typeface::create(android::graphics::Typeface arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Landroid/graphics/Typeface;I)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Typeface::create(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Ljava/lang/String;I)Landroid/graphics/Typeface;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Typeface::create(android::graphics::Typeface arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Landroid/graphics/Typeface;IZ)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Typeface::createFromAsset(android::content::res::AssetManager arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromAsset",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Typeface::createFromFile(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromFile",
			"(Ljava/io/File;)Landroid/graphics/Typeface;",
			arg0.object()
		);
	}
	QAndroidJniObject Typeface::createFromFile(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromFile",
			"(Ljava/lang/String;)Landroid/graphics/Typeface;",
			arg0
		);
	}
	QAndroidJniObject Typeface::defaultFromStyle(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"defaultFromStyle",
			"(I)Landroid/graphics/Typeface;",
			arg0
		);
	}
	jboolean Typeface::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Typeface::getStyle()
	{
		return callMethod<jint>(
			"getStyle",
			"()I"
		);
	}
	jint Typeface::getWeight()
	{
		return callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jint Typeface::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Typeface::isBold()
	{
		return callMethod<jboolean>(
			"isBold",
			"()Z"
		);
	}
	jboolean Typeface::isItalic()
	{
		return callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace android::graphics

