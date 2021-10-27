#pragma once

#ifndef ANDROID_GRAPHICS_TYPEFACE_BUILDER
#define ANDROID_GRAPHICS_TYPEFACE_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class AssetManager;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::graphics
{
	class Typeface_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::FileDescriptor arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::android::content::res::AssetManager arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::res::AssetManager arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setFallback(jstring arg0);
		QAndroidJniObject setFallback(const QString &arg0);
		QAndroidJniObject setFontVariationSettings(jarray arg0);
		QAndroidJniObject setFontVariationSettings(jstring arg0);
		QAndroidJniObject setFontVariationSettings(const QString &arg0);
		QAndroidJniObject setItalic(jboolean arg0);
		QAndroidJniObject setTtcIndex(jint arg0);
		QAndroidJniObject setWeight(jint arg0);
	};
} // namespace __jni_impl::android::graphics

#include "../content/res/AssetManager.hpp"
#include "Typeface.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Typeface_Builder::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void Typeface_Builder::__constructor(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void Typeface_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Typeface_Builder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Typeface_Builder::__constructor(__jni_impl::android::content::res::AssetManager arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Typeface$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Typeface_Builder::__constructor(__jni_impl::android::content::res::AssetManager arg0, const QString &arg1)
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
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Typeface_Builder : public __jni_impl::android::graphics::Typeface_Builder
	{
	public:
		Typeface_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Typeface_Builder(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		Typeface_Builder(__jni_impl::java::io::FileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
		Typeface_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Typeface_Builder(__jni_impl::android::content::res::AssetManager arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_TYPEFACE_BUILDER

