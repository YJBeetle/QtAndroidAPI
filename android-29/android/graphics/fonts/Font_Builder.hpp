#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class AssetManager;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::graphics::fonts
{
	class Font;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::android::graphics::fonts
{
	class Font_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::ParcelFileDescriptor arg0);
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::nio::ByteBuffer arg0);
		void __constructor(__jni_impl::android::content::res::AssetManager arg0, jstring arg1);
		void __constructor(__jni_impl::android::content::res::AssetManager arg0, const QString &arg1);
		void __constructor(__jni_impl::android::content::res::Resources arg0, jint arg1);
		void __constructor(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setFontVariationSettings(jarray arg0);
		QAndroidJniObject setFontVariationSettings(jstring arg0);
		QAndroidJniObject setFontVariationSettings(const QString &arg0);
		QAndroidJniObject setSlant(jint arg0);
		QAndroidJniObject setTtcIndex(jint arg0);
		QAndroidJniObject setWeight(jint arg0);
	};
} // namespace __jni_impl::android::graphics::fonts

#include "../../content/res/AssetManager.hpp"
#include "../../content/res/Resources.hpp"
#include "./Font.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../java/io/File.hpp"
#include "../../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::android::graphics::fonts
{
	// Fields
	
	// Constructors
	void Font_Builder::__constructor(__jni_impl::android::os::ParcelFileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void Font_Builder::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.Font$Builder",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void Font_Builder::__constructor(__jni_impl::java::nio::ByteBuffer arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.Font$Builder",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Font_Builder::__constructor(__jni_impl::android::content::res::AssetManager arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Font_Builder::__constructor(__jni_impl::android::content::res::AssetManager arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Font_Builder::__constructor(__jni_impl::android::content::res::Resources arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/content/res/Resources;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Font_Builder::__constructor(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.fonts.Font$Builder",
			"(Landroid/os/ParcelFileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject Font_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/fonts/Font;"
		);
	}
	QAndroidJniObject Font_Builder::setFontVariationSettings(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setFontVariationSettings",
			"([Landroid/graphics/fonts/FontVariationAxis;)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	QAndroidJniObject Font_Builder::setFontVariationSettings(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	QAndroidJniObject Font_Builder::setFontVariationSettings(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setFontVariationSettings",
			"(Ljava/lang/String;)Landroid/graphics/fonts/Font$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Font_Builder::setSlant(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSlant",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	QAndroidJniObject Font_Builder::setTtcIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTtcIndex",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
	QAndroidJniObject Font_Builder::setWeight(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setWeight",
			"(I)Landroid/graphics/fonts/Font$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics::fonts

namespace android::graphics::fonts
{
	class Font_Builder : public __jni_impl::android::graphics::fonts::Font_Builder
	{
	public:
		Font_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Font_Builder(__jni_impl::android::os::ParcelFileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
		Font_Builder(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		Font_Builder(__jni_impl::java::nio::ByteBuffer arg0)
		{
			__constructor(
				arg0);
		}
		Font_Builder(__jni_impl::android::content::res::AssetManager arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Font_Builder(__jni_impl::android::content::res::Resources arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Font_Builder(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics::fonts

