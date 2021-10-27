#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::print
{
	class PrintAttributes;
}
namespace __jni_impl::android::print
{
	class PrintAttributes_Margins;
}

namespace __jni_impl::android::print
{
	class PrinterCapabilitiesInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getColorModes();
		QAndroidJniObject getDefaults();
		jint getDuplexModes();
		QAndroidJniObject getMediaSizes();
		QAndroidJniObject getMinMargins();
		QAndroidJniObject getResolutions();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::print

#include "../os/Parcel.hpp"
#include "PrintAttributes.hpp"
#include "PrintAttributes_Margins.hpp"

namespace __jni_impl::android::print
{
	// Fields
	QAndroidJniObject PrinterCapabilitiesInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrinterCapabilitiesInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void PrinterCapabilitiesInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterCapabilitiesInfo",
			"(V)V");
	}
	
	// Methods
	jint PrinterCapabilitiesInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PrinterCapabilitiesInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrinterCapabilitiesInfo::getColorModes()
	{
		return __thiz.callMethod<jint>(
			"getColorModes",
			"()I"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo::getDefaults()
	{
		return __thiz.callObjectMethod(
			"getDefaults",
			"()Landroid/print/PrintAttributes;"
		);
	}
	jint PrinterCapabilitiesInfo::getDuplexModes()
	{
		return __thiz.callMethod<jint>(
			"getDuplexModes",
			"()I"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo::getMediaSizes()
	{
		return __thiz.callObjectMethod(
			"getMediaSizes",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo::getMinMargins()
	{
		return __thiz.callObjectMethod(
			"getMinMargins",
			"()Landroid/print/PrintAttributes$Margins;"
		);
	}
	QAndroidJniObject PrinterCapabilitiesInfo::getResolutions()
	{
		return __thiz.callObjectMethod(
			"getResolutions",
			"()Ljava/util/List;"
		);
	}
	jint PrinterCapabilitiesInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrinterCapabilitiesInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PrinterCapabilitiesInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class PrinterCapabilitiesInfo : public __jni_impl::android::print::PrinterCapabilitiesInfo
	{
	public:
		PrinterCapabilitiesInfo(QAndroidJniObject obj) { __thiz = obj; }
		PrinterCapabilitiesInfo()
		{
			__constructor();
		}
	};
} // namespace android::print

