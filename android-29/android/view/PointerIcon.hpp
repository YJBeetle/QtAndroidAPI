#pragma once

#ifndef ANDROID_VIEW_POINTERICON
#define ANDROID_VIEW_POINTERICON

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class PointerIcon : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_ALIAS();
		static jint TYPE_ALL_SCROLL();
		static jint TYPE_ARROW();
		static jint TYPE_CELL();
		static jint TYPE_CONTEXT_MENU();
		static jint TYPE_COPY();
		static jint TYPE_CROSSHAIR();
		static jint TYPE_DEFAULT();
		static jint TYPE_GRAB();
		static jint TYPE_GRABBING();
		static jint TYPE_HAND();
		static jint TYPE_HELP();
		static jint TYPE_HORIZONTAL_DOUBLE_ARROW();
		static jint TYPE_NO_DROP();
		static jint TYPE_NULL();
		static jint TYPE_TEXT();
		static jint TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW();
		static jint TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW();
		static jint TYPE_VERTICAL_DOUBLE_ARROW();
		static jint TYPE_VERTICAL_TEXT();
		static jint TYPE_WAIT();
		static jint TYPE_ZOOM_IN();
		static jint TYPE_ZOOM_OUT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		static QAndroidJniObject load(__jni_impl::android::content::res::Resources arg0, jint arg1);
		static QAndroidJniObject create(__jni_impl::android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2);
		static QAndroidJniObject getSystemIcon(__jni_impl::android::content::Context arg0, jint arg1);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../content/res/Resources.hpp"
#include "../graphics/Bitmap.hpp"
#include "../content/Context.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject PointerIcon::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.PointerIcon",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PointerIcon::TYPE_ALIAS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ALIAS");
	}
	jint PointerIcon::TYPE_ALL_SCROLL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ALL_SCROLL");
	}
	jint PointerIcon::TYPE_ARROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ARROW");
	}
	jint PointerIcon::TYPE_CELL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_CELL");
	}
	jint PointerIcon::TYPE_CONTEXT_MENU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_CONTEXT_MENU");
	}
	jint PointerIcon::TYPE_COPY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_COPY");
	}
	jint PointerIcon::TYPE_CROSSHAIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_CROSSHAIR");
	}
	jint PointerIcon::TYPE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_DEFAULT");
	}
	jint PointerIcon::TYPE_GRAB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_GRAB");
	}
	jint PointerIcon::TYPE_GRABBING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_GRABBING");
	}
	jint PointerIcon::TYPE_HAND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_HAND");
	}
	jint PointerIcon::TYPE_HELP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_HELP");
	}
	jint PointerIcon::TYPE_HORIZONTAL_DOUBLE_ARROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_HORIZONTAL_DOUBLE_ARROW");
	}
	jint PointerIcon::TYPE_NO_DROP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_NO_DROP");
	}
	jint PointerIcon::TYPE_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_NULL");
	}
	jint PointerIcon::TYPE_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_TEXT");
	}
	jint PointerIcon::TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_TOP_LEFT_DIAGONAL_DOUBLE_ARROW");
	}
	jint PointerIcon::TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_TOP_RIGHT_DIAGONAL_DOUBLE_ARROW");
	}
	jint PointerIcon::TYPE_VERTICAL_DOUBLE_ARROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_VERTICAL_DOUBLE_ARROW");
	}
	jint PointerIcon::TYPE_VERTICAL_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_VERTICAL_TEXT");
	}
	jint PointerIcon::TYPE_WAIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_WAIT");
	}
	jint PointerIcon::TYPE_ZOOM_IN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ZOOM_IN");
	}
	jint PointerIcon::TYPE_ZOOM_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.PointerIcon",
			"TYPE_ZOOM_OUT");
	}
	
	// Constructors
	void PointerIcon::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.PointerIcon",
			"(V)V");
	}
	
	// Methods
	jboolean PointerIcon::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject PointerIcon::load(__jni_impl::android::content::res::Resources arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.PointerIcon",
			"load",
			"(Landroid/content/res/Resources;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject PointerIcon::create(__jni_impl::android::graphics::Bitmap arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.PointerIcon",
			"create",
			"(Landroid/graphics/Bitmap;FF)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	QAndroidJniObject PointerIcon::getSystemIcon(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.PointerIcon",
			"getSystemIcon",
			"(Landroid/content/Context;I)Landroid/view/PointerIcon;",
			arg0.__jniObject().object(),
			arg1);
	}
	jint PointerIcon::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PointerIcon::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class PointerIcon : public __jni_impl::android::view::PointerIcon
	{
	public:
		PointerIcon(QAndroidJniObject obj) { __thiz = obj; }
		PointerIcon()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_POINTERICON

