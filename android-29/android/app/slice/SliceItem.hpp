#pragma once

#ifndef ANDROID_APP_SLICE_SLICEITEM
#define ANDROID_APP_SLICE_SLICEITEM

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app::slice
{
	class Slice;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}
namespace __jni_impl::android::app
{
	class RemoteInput;
}

namespace __jni_impl::android::app::slice
{
	class SliceItem : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject FORMAT_ACTION();
		static QAndroidJniObject FORMAT_BUNDLE();
		static QAndroidJniObject FORMAT_IMAGE();
		static QAndroidJniObject FORMAT_INT();
		static QAndroidJniObject FORMAT_LONG();
		static QAndroidJniObject FORMAT_REMOTE_INPUT();
		static QAndroidJniObject FORMAT_SLICE();
		static QAndroidJniObject FORMAT_TEXT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getInt();
		jlong getLong();
		QAndroidJniObject getBundle();
		QAndroidJniObject getFormat();
		QAndroidJniObject getText();
		QAndroidJniObject getSubType();
		QAndroidJniObject getSlice();
		jboolean hasHint(jstring arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getAction();
		QAndroidJniObject getHints();
		QAndroidJniObject getIcon();
		QAndroidJniObject getRemoteInput();
	};
} // namespace __jni_impl::android::app::slice

#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"
#include "Slice.hpp"
#include "../PendingIntent.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../RemoteInput.hpp"

namespace __jni_impl::android::app::slice
{
	// Fields
	QAndroidJniObject SliceItem::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject SliceItem::FORMAT_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_ACTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::FORMAT_BUNDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_BUNDLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::FORMAT_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_IMAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::FORMAT_INT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_INT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::FORMAT_LONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_LONG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::FORMAT_REMOTE_INPUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_REMOTE_INPUT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::FORMAT_SLICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_SLICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::FORMAT_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.SliceItem",
			"FORMAT_TEXT",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void SliceItem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceItem",
			"(V)V");
	}
	
	// Methods
	jint SliceItem::getInt()
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"()I");
	}
	jlong SliceItem::getLong()
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"()J");
	}
	QAndroidJniObject SliceItem::getBundle()
	{
		return __thiz.callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject SliceItem::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject SliceItem::getSubType()
	{
		return __thiz.callObjectMethod(
			"getSubType",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SliceItem::getSlice()
	{
		return __thiz.callObjectMethod(
			"getSlice",
			"()Landroid/app/slice/Slice;");
	}
	jboolean SliceItem::hasHint(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasHint",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jint SliceItem::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SliceItem::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SliceItem::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Landroid/app/PendingIntent;");
	}
	QAndroidJniObject SliceItem::getHints()
	{
		return __thiz.callObjectMethod(
			"getHints",
			"()Ljava/util/List;");
	}
	QAndroidJniObject SliceItem::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;");
	}
	QAndroidJniObject SliceItem::getRemoteInput()
	{
		return __thiz.callObjectMethod(
			"getRemoteInput",
			"()Landroid/app/RemoteInput;");
	}
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class SliceItem : public __jni_impl::android::app::slice::SliceItem
	{
	public:
		SliceItem(QAndroidJniObject obj) { __thiz = obj; }
		SliceItem()
		{
			__constructor();
		}
	};
} // namespace android::app::slice

#endif // ANDROID_APP_SLICE_SLICEITEM

