#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::telephony
{
	class CellIdentity;
}
namespace __jni_impl::android::telephony
{
	class CellSignalStrength;
}

namespace __jni_impl::android::telephony
{
	class CellInfoNr : public __jni_impl::android::telephony::CellInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getCellIdentity();
		QAndroidJniObject getCellSignalStrength();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./CellSignalStrength.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	QAndroidJniObject CellInfoNr::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfoNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CellInfoNr::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellInfoNr",
			"(V)V");
	}
	
	// Methods
	jboolean CellInfoNr::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CellInfoNr::getCellIdentity()
	{
		return __thiz.callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	QAndroidJniObject CellInfoNr::getCellSignalStrength()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrength;"
		);
	}
	jint CellInfoNr::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellInfoNr::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellInfoNr::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellInfoNr : public __jni_impl::android::telephony::CellInfoNr
	{
	public:
		CellInfoNr(QAndroidJniObject obj) { __thiz = obj; }
		CellInfoNr()
		{
			__constructor();
		}
	};
} // namespace android::telephony

