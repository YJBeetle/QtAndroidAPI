#pragma once

#ifndef ANDROID_PRINT_PRINTATTRIBUTES
#define ANDROID_PRINT_PRINTATTRIBUTES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_Margins;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_MediaSize;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_Resolution;
}

namespace __jni_impl::android::print
{
	class PrintAttributes : public __JniBaseClass
	{
	public:
		// Fields
		static jint COLOR_MODE_COLOR();
		static jint COLOR_MODE_MONOCHROME();
		static QAndroidJniObject CREATOR();
		static jint DUPLEX_MODE_LONG_EDGE();
		static jint DUPLEX_MODE_NONE();
		static jint DUPLEX_MODE_SHORT_EDGE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getColorMode();
		jint getDuplexMode();
		QAndroidJniObject getMediaSize();
		QAndroidJniObject getMinMargins();
		QAndroidJniObject getResolution();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::print

#include "../os/Parcel.hpp"
#include "PrintAttributes_Margins.hpp"
#include "PrintAttributes_MediaSize.hpp"
#include "PrintAttributes_Resolution.hpp"

namespace __jni_impl::android::print
{
	// Fields
	jint PrintAttributes::COLOR_MODE_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_COLOR"
		);
	}
	jint PrintAttributes::COLOR_MODE_MONOCHROME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_MONOCHROME"
		);
	}
	QAndroidJniObject PrintAttributes::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_LONG_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_LONG_EDGE"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_NONE"
		);
	}
	jint PrintAttributes::DUPLEX_MODE_SHORT_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_SHORT_EDGE"
		);
	}
	
	// Constructors
	void PrintAttributes::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes",
			"(V)V");
	}
	
	// Methods
	jint PrintAttributes::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrintAttributes::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrintAttributes::getColorMode()
	{
		return __thiz.callMethod<jint>(
			"getColorMode",
			"()I"
		);
	}
	jint PrintAttributes::getDuplexMode()
	{
		return __thiz.callMethod<jint>(
			"getDuplexMode",
			"()I"
		);
	}
	QAndroidJniObject PrintAttributes::getMediaSize()
	{
		return __thiz.callObjectMethod(
			"getMediaSize",
			"()Landroid/print/PrintAttributes$MediaSize;"
		);
	}
	QAndroidJniObject PrintAttributes::getMinMargins()
	{
		return __thiz.callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	QAndroidJniObject PrintAttributes::getResolution()
	{
		return __thiz.callObjectMethod(
			"getResolution",
			"()Landroid/print/PrintAttributes$Resolution;"
		);
	}
	jint PrintAttributes::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrintAttributes::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrintAttributes::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintAttributes : public __jni_impl::android::print::PrintAttributes
	{
	public:
		PrintAttributes(QAndroidJniObject obj) { __thiz = obj; }
		PrintAttributes()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTATTRIBUTES

