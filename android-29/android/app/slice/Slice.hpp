#pragma once

#ifndef ANDROID_APP_SLICE_SLICE
#define ANDROID_APP_SLICE_SLICE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::app::slice
{
	class SliceSpec;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::app::slice
{
	class Slice : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_RANGE_VALUE();
		static jstring EXTRA_TOGGLE_STATE();
		static jstring HINT_ACTIONS();
		static jstring HINT_ERROR();
		static jstring HINT_HORIZONTAL();
		static jstring HINT_KEYWORDS();
		static jstring HINT_LARGE();
		static jstring HINT_LAST_UPDATED();
		static jstring HINT_LIST();
		static jstring HINT_LIST_ITEM();
		static jstring HINT_NO_TINT();
		static jstring HINT_PARTIAL();
		static jstring HINT_PERMISSION_REQUEST();
		static jstring HINT_SEE_MORE();
		static jstring HINT_SELECTED();
		static jstring HINT_SHORTCUT();
		static jstring HINT_SUMMARY();
		static jstring HINT_TITLE();
		static jstring HINT_TTL();
		static jstring SUBTYPE_COLOR();
		static jstring SUBTYPE_CONTENT_DESCRIPTION();
		static jstring SUBTYPE_LAYOUT_DIRECTION();
		static jstring SUBTYPE_MAX();
		static jstring SUBTYPE_MESSAGE();
		static jstring SUBTYPE_MILLIS();
		static jstring SUBTYPE_PRIORITY();
		static jstring SUBTYPE_RANGE();
		static jstring SUBTYPE_SOURCE();
		static jstring SUBTYPE_TOGGLE();
		static jstring SUBTYPE_VALUE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getSpec();
		QAndroidJniObject getItems();
		QAndroidJniObject getHints();
		jboolean isCallerNeeded();
		QAndroidJniObject getUri();
	};
} // namespace __jni_impl::android::app::slice

#include "../../os/Parcel.hpp"
#include "SliceSpec.hpp"
#include "../../net/Uri.hpp"

namespace __jni_impl::android::app::slice
{
	// Fields
	QAndroidJniObject Slice::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring Slice::EXTRA_RANGE_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"EXTRA_RANGE_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::EXTRA_TOGGLE_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"EXTRA_TOGGLE_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_ACTIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_ACTIONS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_ERROR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_ERROR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_HORIZONTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_KEYWORDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_KEYWORDS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_LARGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LARGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_LAST_UPDATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LAST_UPDATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_LIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_LIST_ITEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_LIST_ITEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_NO_TINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_NO_TINT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_PARTIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_PARTIAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_PERMISSION_REQUEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_PERMISSION_REQUEST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_SEE_MORE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SEE_MORE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_SELECTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SELECTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_SHORTCUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SHORTCUT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_SUMMARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_SUMMARY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::HINT_TTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"HINT_TTL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_COLOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_CONTENT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_CONTENT_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_LAYOUT_DIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_LAYOUT_DIRECTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_MAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MAX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_PRIORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_PRIORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_RANGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_SOURCE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_TOGGLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_TOGGLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Slice::SUBTYPE_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.slice.Slice",
			"SUBTYPE_VALUE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Slice::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.Slice",
			"(V)V");
	}
	
	// Methods
	jstring Slice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Slice::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Slice::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Slice::getSpec()
	{
		return __thiz.callObjectMethod(
			"getSpec",
			"()Landroid/app/slice/SliceSpec;"
		);
	}
	QAndroidJniObject Slice::getItems()
	{
		return __thiz.callObjectMethod(
			"getItems",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject Slice::getHints()
	{
		return __thiz.callObjectMethod(
			"getHints",
			"()Ljava/util/List;"
		);
	}
	jboolean Slice::isCallerNeeded()
	{
		return __thiz.callMethod<jboolean>(
			"isCallerNeeded",
			"()Z"
		);
	}
	QAndroidJniObject Slice::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class Slice : public __jni_impl::android::app::slice::Slice
	{
	public:
		Slice(QAndroidJniObject obj) { __thiz = obj; }
		Slice()
		{
			__constructor();
		}
	};
} // namespace android::app::slice

#endif // ANDROID_APP_SLICE_SLICE

