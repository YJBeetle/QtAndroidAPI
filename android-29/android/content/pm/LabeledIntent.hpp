#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Intent.hpp"

namespace __jni_impl::android::content
{
	class Intent;
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

namespace __jni_impl::android::content::pm
{
	class LabeledIntent : public __jni_impl::android::content::Intent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(const QString &arg0, jint arg1, jint arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2);
		void __constructor(__jni_impl::android::content::Intent arg0, jstring arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Intent arg0, const QString &arg1, jint arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Intent arg0, jstring arg1, jstring arg2, jint arg3);
		void __constructor(__jni_impl::android::content::Intent arg0, const QString &arg1, const QString &arg2, jint arg3);
		
		// Methods
		jint getIconResource();
		jint getLabelResource();
		jstring getNonLocalizedLabel();
		jstring getSourcePackage();
		QAndroidJniObject loadIcon(__jni_impl::android::content::pm::PackageManager arg0);
		jstring loadLabel(__jni_impl::android::content::pm::PackageManager arg0);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../Intent.hpp"
#include "./PackageManager.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject LabeledIntent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.LabeledIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void LabeledIntent::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void LabeledIntent::__constructor(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void LabeledIntent::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void LabeledIntent::__constructor(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	void LabeledIntent::__constructor(__jni_impl::android::content::Intent arg0, jstring arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void LabeledIntent::__constructor(__jni_impl::android::content::Intent arg0, const QString &arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;II)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	void LabeledIntent::__constructor(__jni_impl::android::content::Intent arg0, jstring arg1, jstring arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void LabeledIntent::__constructor(__jni_impl::android::content::Intent arg0, const QString &arg1, const QString &arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.LabeledIntent",
			"(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	
	// Methods
	jint LabeledIntent::getIconResource()
	{
		return __thiz.callMethod<jint>(
			"getIconResource",
			"()I"
		);
	}
	jint LabeledIntent::getLabelResource()
	{
		return __thiz.callMethod<jint>(
			"getLabelResource",
			"()I"
		);
	}
	jstring LabeledIntent::getNonLocalizedLabel()
	{
		return __thiz.callObjectMethod(
			"getNonLocalizedLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring LabeledIntent::getSourcePackage()
	{
		return __thiz.callObjectMethod(
			"getSourcePackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject LabeledIntent::loadIcon(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadIcon",
			"(Landroid/content/pm/PackageManager;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	jstring LabeledIntent::loadLabel(__jni_impl::android::content::pm::PackageManager arg0)
	{
		return __thiz.callObjectMethod(
			"loadLabel",
			"(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void LabeledIntent::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void LabeledIntent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class LabeledIntent : public __jni_impl::android::content::pm::LabeledIntent
	{
	public:
		LabeledIntent(QAndroidJniObject obj) { __thiz = obj; }
		LabeledIntent(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		LabeledIntent(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		LabeledIntent(__jni_impl::android::content::Intent arg0, jstring arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		LabeledIntent(__jni_impl::android::content::Intent arg0, jstring arg1, jstring arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::content::pm

