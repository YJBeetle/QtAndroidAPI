#pragma once

#ifndef ANDROID_PRINT_PRINTATTRIBUTES
#define ANDROID_PRINT_PRINTATTRIBUTES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::print
{
	class PrintAttributes_Resolution;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_MediaSize;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_Margins;
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
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getResolution();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getMediaSize();
		QAndroidJniObject getMinMargins();
		jint getDuplexMode();
		jint getColorMode();
	};
} // namespace __jni_impl::android::print

#include "PrintAttributes_Resolution.hpp"
#include "../os/Parcel.hpp"
#include "PrintAttributes_MediaSize.hpp"
#include "PrintAttributes_Margins.hpp"

namespace __jni_impl::android::print
{
	// Fields
	jint PrintAttributes::COLOR_MODE_COLOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_COLOR");
	}
	jint PrintAttributes::COLOR_MODE_MONOCHROME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"COLOR_MODE_MONOCHROME");
	}
	QAndroidJniObject PrintAttributes::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PrintAttributes::DUPLEX_MODE_LONG_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_LONG_EDGE");
	}
	jint PrintAttributes::DUPLEX_MODE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_NONE");
	}
	jint PrintAttributes::DUPLEX_MODE_SHORT_EDGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrintAttributes",
			"DUPLEX_MODE_SHORT_EDGE");
	}
	
	// Constructors
	void PrintAttributes::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes",
			"(V)V");
	}
	
	// Methods
	jboolean PrintAttributes::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject PrintAttributes::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PrintAttributes::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject PrintAttributes::getResolution()
	{
		return __thiz.callObjectMethod(
			"getResolution",
			"()Landroid/print/PrintAttributes$Resolution;");
	}
	jint PrintAttributes::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PrintAttributes::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject PrintAttributes::getMediaSize()
	{
		return __thiz.callObjectMethod(
			"getMediaSize",
			"()Landroid/print/PrintAttributes$MediaSize;");
	}
	QAndroidJniObject PrintAttributes::getMinMargins()
	{
		return __thiz.callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;");
	}
	jint PrintAttributes::getDuplexMode()
	{
		return __thiz.callMethod<jint>(
			"getDuplexMode",
			"()I");
	}
	jint PrintAttributes::getColorMode()
	{
		return __thiz.callMethod<jint>(
			"getColorMode",
			"()I");
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

