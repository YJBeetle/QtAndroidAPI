#pragma once

#ifndef ANDROID_PRINT_PRINTERINFO
#define ANDROID_PRINT_PRINTERINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::print
{
	class PrinterId;
}
namespace __jni_impl::android::print
{
	class PrinterCapabilitiesInfo;
}

namespace __jni_impl::android::print
{
	class PrinterInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint STATUS_BUSY();
		static jint STATUS_IDLE();
		static jint STATUS_UNAVAILABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		QAndroidJniObject getId();
		jint getStatus();
		jstring getDescription();
		QAndroidJniObject getCapabilities();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::print

#include "../os/Parcel.hpp"
#include "PrinterId.hpp"
#include "PrinterCapabilitiesInfo.hpp"

namespace __jni_impl::android::print
{
	// Fields
	QAndroidJniObject PrinterInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrinterInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PrinterInfo::STATUS_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_BUSY"
		);
	}
	jint PrinterInfo::STATUS_IDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_IDLE"
		);
	}
	jint PrinterInfo::STATUS_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.print.PrinterInfo",
			"STATUS_UNAVAILABLE"
		);
	}
	
	// Constructors
	void PrinterInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.print.PrinterInfo",
			"(V)V");
	}
	
	// Methods
	jstring PrinterInfo::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean PrinterInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PrinterInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PrinterInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject PrinterInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Landroid/print/PrinterId;"
		);
	}
	jint PrinterInfo::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jstring PrinterInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PrinterInfo::getCapabilities()
	{
		return __thiz.callObjectMethod(
			"getCapabilities",
			"()Landroid/print/PrinterCapabilitiesInfo;"
		);
	}
	jint PrinterInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PrinterInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class PrinterInfo : public __jni_impl::android::print::PrinterInfo
	{
	public:
		PrinterInfo(QAndroidJniObject obj) { __thiz = obj; }
		PrinterInfo()
		{
			__constructor();
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTERINFO

