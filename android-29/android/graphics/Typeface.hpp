#pragma once

#ifndef ANDROID_GRAPHICS_TYPEFACE
#define ANDROID_GRAPHICS_TYPEFACE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class AssetManager;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::graphics
{
	class Typeface : public __JniBaseClass
	{
	public:
		// Fields
		static jint BOLD();
		static jint BOLD_ITALIC();
		static QAndroidJniObject DEFAULT();
		static QAndroidJniObject DEFAULT_BOLD();
		static jint ITALIC();
		static QAndroidJniObject MONOSPACE();
		static jint NORMAL();
		static QAndroidJniObject SANS_SERIF();
		static QAndroidJniObject SERIF();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::graphics::Typeface arg0, jint arg1);
		static QAndroidJniObject create(jstring arg0, jint arg1);
		static QAndroidJniObject create(const QString &arg0, jint arg1);
		static QAndroidJniObject create(__jni_impl::android::graphics::Typeface arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject createFromAsset(__jni_impl::android::content::res::AssetManager arg0, jstring arg1);
		static QAndroidJniObject createFromAsset(__jni_impl::android::content::res::AssetManager arg0, const QString &arg1);
		static QAndroidJniObject createFromFile(__jni_impl::java::io::File arg0);
		static QAndroidJniObject createFromFile(jstring arg0);
		static QAndroidJniObject createFromFile(const QString &arg0);
		static QAndroidJniObject defaultFromStyle(jint arg0);
		jboolean equals(jobject arg0);
		jint getStyle();
		jint getWeight();
		jint hashCode();
		jboolean isBold();
		jboolean isItalic();
	};
} // namespace __jni_impl::android::graphics

#include "../content/res/AssetManager.hpp"
#include "../../java/io/File.hpp"

namespace __jni_impl::android::graphics
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
	
	// Constructors
	void Typeface::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Typeface::create(__jni_impl::android::graphics::Typeface arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Landroid/graphics/Typeface;I)Landroid/graphics/Typeface;",
			arg0.__jniObject().object(),
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
	QAndroidJniObject Typeface::create(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Ljava/lang/String;I)Landroid/graphics/Typeface;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Typeface::create(__jni_impl::android::graphics::Typeface arg0, jint arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"create",
			"(Landroid/graphics/Typeface;IZ)Landroid/graphics/Typeface;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Typeface::createFromAsset(__jni_impl::android::content::res::AssetManager arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromAsset",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Typeface::createFromAsset(__jni_impl::android::content::res::AssetManager arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromAsset",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Typeface::createFromFile(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromFile",
			"(Ljava/io/File;)Landroid/graphics/Typeface;",
			arg0.__jniObject().object()
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
	QAndroidJniObject Typeface::createFromFile(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Typeface",
			"createFromFile",
			"(Ljava/lang/String;)Landroid/graphics/Typeface;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Typeface::getStyle()
	{
		return __thiz.callMethod<jint>(
			"getStyle",
			"()I"
		);
	}
	jint Typeface::getWeight()
	{
		return __thiz.callMethod<jint>(
			"getWeight",
			"()I"
		);
	}
	jint Typeface::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Typeface::isBold()
	{
		return __thiz.callMethod<jboolean>(
			"isBold",
			"()Z"
		);
	}
	jboolean Typeface::isItalic()
	{
		return __thiz.callMethod<jboolean>(
			"isItalic",
			"()Z"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Typeface : public __jni_impl::android::graphics::Typeface
	{
	public:
		Typeface(QAndroidJniObject obj) { __thiz = obj; }
		Typeface()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_TYPEFACE

