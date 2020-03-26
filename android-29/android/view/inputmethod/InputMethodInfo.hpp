#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO
#define ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::pm
{
	class ResolveInfo;
}
namespace __jni_impl::android::content::pm
{
	class ServiceInfo;
}
namespace __jni_impl::android::content::pm
{
	class PackageManager;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::view::inputmethod
{
	class InputMethodSubtype;
}

namespace __jni_impl::android::view::inputmethod
{
	class InputMethodInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getPackageName();
		jstring getId();
		QAndroidJniObject getServiceInfo();
		jstring getServiceName();
		jstring loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
		jstring getSettingsActivity();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		QAndroidJniObject getComponent();
		QAndroidJniObject getSubtypeAt(jint arg0);
		jint getSubtypeCount();
		jint getIsDefaultResourceId();
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../content/Context.hpp"
#include "../../content/pm/ResolveInfo.hpp"
#include "../../content/pm/ServiceInfo.hpp"
#include "../../content/pm/PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"
#include "../../content/ComponentName.hpp"
#include "InputMethodSubtype.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	QAndroidJniObject InputMethodInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.InputMethodInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void InputMethodInfo::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputMethodInfo",
			"(Landroid/content/Context;Landroid/content/pm/ResolveInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void InputMethodInfo::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputMethodInfo",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jboolean InputMethodInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring InputMethodInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputMethodInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InputMethodInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject InputMethodInfo::getServiceInfo()
	{
		return __thiz.callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	jstring InputMethodInfo::getServiceName()
	{
		return __thiz.callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InputMethodInfo::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject InputMethodInfo::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring InputMethodInfo::getSettingsActivity()
	{
		return __thiz.callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InputMethodInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void InputMethodInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void InputMethodInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject InputMethodInfo::getComponent()
	{
		return __thiz.callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	QAndroidJniObject InputMethodInfo::getSubtypeAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSubtypeAt",
			"(I)Landroid/view/inputmethod/InputMethodSubtype;",
			arg0
		);
	}
	jint InputMethodInfo::getSubtypeCount()
	{
		return __thiz.callMethod<jint>(
			"getSubtypeCount",
			"()I"
		);
	}
	jint InputMethodInfo::getIsDefaultResourceId()
	{
		return __thiz.callMethod<jint>(
			"getIsDefaultResourceId",
			"()I"
		);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class InputMethodInfo : public __jni_impl::android::view::inputmethod::InputMethodInfo
	{
	public:
		InputMethodInfo(QAndroidJniObject obj) { __thiz = obj; }
		InputMethodInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ResolveInfo arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InputMethodInfo(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_INPUTMETHODINFO

