#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class ColorStateList;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class BlendMode;
}
namespace __jni_impl::android::graphics
{
	class PorterDuff_Mode;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Message;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::graphics::drawable
{
	class Icon : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_ADAPTIVE_BITMAP();
		static jint TYPE_BITMAP();
		static jint TYPE_DATA();
		static jint TYPE_RESOURCE();
		static jint TYPE_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createWithAdaptiveBitmap(__jni_impl::android::graphics::Bitmap arg0);
		static QAndroidJniObject createWithBitmap(__jni_impl::android::graphics::Bitmap arg0);
		static QAndroidJniObject createWithContentUri(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject createWithContentUri(jstring arg0);
		static QAndroidJniObject createWithContentUri(const QString &arg0);
		static QAndroidJniObject createWithData(jbyteArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject createWithFilePath(jstring arg0);
		static QAndroidJniObject createWithFilePath(const QString &arg0);
		static QAndroidJniObject createWithResource(__jni_impl::android::content::Context arg0, jint arg1);
		static QAndroidJniObject createWithResource(jstring arg0, jint arg1);
		static QAndroidJniObject createWithResource(const QString &arg0, jint arg1);
		jint describeContents();
		jint getResId();
		jstring getResPackage();
		jint getType();
		QAndroidJniObject getUri();
		QAndroidJniObject loadDrawable(__jni_impl::android::content::Context arg0);
		void loadDrawableAsync(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Message arg1);
		void loadDrawableAsync(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2);
		QAndroidJniObject setTint(jint arg0);
		QAndroidJniObject setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0);
		QAndroidJniObject setTintList(__jni_impl::android::content::res::ColorStateList arg0);
		QAndroidJniObject setTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/Context.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../Bitmap.hpp"
#include "../BlendMode.hpp"
#include "../PorterDuff_Mode.hpp"
#include "./Drawable.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Handler.hpp"
#include "../../os/Message.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	QAndroidJniObject Icon::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.drawable.Icon",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Icon::TYPE_ADAPTIVE_BITMAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_ADAPTIVE_BITMAP"
		);
	}
	jint Icon::TYPE_BITMAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_BITMAP"
		);
	}
	jint Icon::TYPE_DATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_DATA"
		);
	}
	jint Icon::TYPE_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_RESOURCE"
		);
	}
	jint Icon::TYPE_URI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.drawable.Icon",
			"TYPE_URI"
		);
	}
	
	// Constructors
	void Icon::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.Icon",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Icon::createWithAdaptiveBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithAdaptiveBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Icon;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Icon::createWithBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/drawable/Icon;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Icon::createWithContentUri(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Landroid/net/Uri;)Landroid/graphics/drawable/Icon;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Icon::createWithContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0
		);
	}
	QAndroidJniObject Icon::createWithContentUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithContentUri",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Icon::createWithData(jbyteArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithData",
			"([BII)Landroid/graphics/drawable/Icon;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Icon::createWithFilePath(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithFilePath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			arg0
		);
	}
	QAndroidJniObject Icon::createWithFilePath(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithFilePath",
			"(Ljava/lang/String;)Landroid/graphics/drawable/Icon;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Icon::createWithResource(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Landroid/content/Context;I)Landroid/graphics/drawable/Icon;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Icon::createWithResource(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Ljava/lang/String;I)Landroid/graphics/drawable/Icon;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Icon::createWithResource(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.drawable.Icon",
			"createWithResource",
			"(Ljava/lang/String;I)Landroid/graphics/drawable/Icon;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Icon::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint Icon::getResId()
	{
		return __thiz.callMethod<jint>(
			"getResId",
			"()I"
		);
	}
	jstring Icon::getResPackage()
	{
		return __thiz.callObjectMethod(
			"getResPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Icon::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	QAndroidJniObject Icon::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Icon::loadDrawable(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"loadDrawable",
			"(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	void Icon::loadDrawableAsync(__jni_impl::android::content::Context arg0, __jni_impl::android::os::Message arg1)
	{
		__thiz.callMethod<void>(
			"loadDrawableAsync",
			"(Landroid/content/Context;Landroid/os/Message;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Icon::loadDrawableAsync(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"loadDrawableAsync",
			"(Landroid/content/Context;Landroid/graphics/drawable/Icon$OnDrawableLoadedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Icon::setTint(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setTint",
			"(I)Landroid/graphics/drawable/Icon;",
			arg0
		);
	}
	QAndroidJniObject Icon::setTintBlendMode(__jni_impl::android::graphics::BlendMode arg0)
	{
		return __thiz.callObjectMethod(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)Landroid/graphics/drawable/Icon;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Icon::setTintList(__jni_impl::android::content::res::ColorStateList arg0)
	{
		return __thiz.callObjectMethod(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)Landroid/graphics/drawable/Icon;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Icon::setTintMode(__jni_impl::android::graphics::PorterDuff_Mode arg0)
	{
		return __thiz.callObjectMethod(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)Landroid/graphics/drawable/Icon;",
			arg0.__jniObject().object()
		);
	}
	jstring Icon::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Icon::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class Icon : public __jni_impl::android::graphics::drawable::Icon
	{
	public:
		Icon(QAndroidJniObject obj) { __thiz = obj; }
		Icon()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

