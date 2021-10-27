#include "../content/res/AssetManager.hpp"
#include "./Typeface.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "./Typeface_Builder.hpp"

namespace android::graphics
{
	// Fields
	
	Typeface_Builder::Typeface_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Typeface_Builder::Typeface_Builder(java::io::File &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	Typeface_Builder::Typeface_Builder(java::io::FileDescriptor &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	Typeface_Builder::Typeface_Builder(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Typeface_Builder::Typeface_Builder(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	Typeface_Builder::Typeface_Builder(android::content::res::AssetManager &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Typeface_Builder::Typeface_Builder(android::content::res::AssetManager &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject Typeface_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/Typeface;"
		);
	}
	QAndroidJniObject Typeface_Builder::setFallback(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	QAndroidJniObject Typeface_Builder::setFallback(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setFallback",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Typeface_Builder::setFontVariationSettings(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	QAndroidJniObject Typeface_Builder::setFontVariationSettings(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	QAndroidJniObject Typeface_Builder::setFontVariationSettings(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/graphics/Typeface$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Typeface_Builder::setItalic(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setItalic",
			"(Z)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	QAndroidJniObject Typeface_Builder::setTtcIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTtcIndex",
			"(I)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
	QAndroidJniObject Typeface_Builder::setWeight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setWeight",
			"(I)Landroid/graphics/Typeface$Builder;",
			arg0
		);
	}
} // namespace android::graphics

