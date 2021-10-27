#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::location
{
	class GnssNavigationMessage : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint STATUS_PARITY_PASSED();
		static jint STATUS_PARITY_REBUILT();
		static jint STATUS_UNKNOWN();
		static jint TYPE_BDS_D1();
		static jint TYPE_BDS_D2();
		static jint TYPE_GAL_F();
		static jint TYPE_GAL_I();
		static jint TYPE_GLO_L1CA();
		static jint TYPE_GPS_CNAV2();
		static jint TYPE_GPS_L1CA();
		static jint TYPE_GPS_L2CNAV();
		static jint TYPE_GPS_L5CNAV();
		static jint TYPE_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jbyteArray getData();
		jint getMessageId();
		jint getStatus();
		jint getSubmessageId();
		jint getSvid();
		jint getType();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::location

#include "../os/Parcel.hpp"

namespace __jni_impl::android::location
{
	// Fields
	QAndroidJniObject GnssNavigationMessage::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.GnssNavigationMessage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint GnssNavigationMessage::STATUS_PARITY_PASSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_PARITY_PASSED"
		);
	}
	jint GnssNavigationMessage::STATUS_PARITY_REBUILT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_PARITY_REBUILT"
		);
	}
	jint GnssNavigationMessage::STATUS_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_UNKNOWN"
		);
	}
	jint GnssNavigationMessage::TYPE_BDS_D1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_BDS_D1"
		);
	}
	jint GnssNavigationMessage::TYPE_BDS_D2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_BDS_D2"
		);
	}
	jint GnssNavigationMessage::TYPE_GAL_F()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GAL_F"
		);
	}
	jint GnssNavigationMessage::TYPE_GAL_I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GAL_I"
		);
	}
	jint GnssNavigationMessage::TYPE_GLO_L1CA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GLO_L1CA"
		);
	}
	jint GnssNavigationMessage::TYPE_GPS_CNAV2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_CNAV2"
		);
	}
	jint GnssNavigationMessage::TYPE_GPS_L1CA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L1CA"
		);
	}
	jint GnssNavigationMessage::TYPE_GPS_L2CNAV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L2CNAV"
		);
	}
	jint GnssNavigationMessage::TYPE_GPS_L5CNAV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L5CNAV"
		);
	}
	jint GnssNavigationMessage::TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	void GnssNavigationMessage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssNavigationMessage",
			"(V)V");
	}
	
	// Methods
	jint GnssNavigationMessage::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jbyteArray GnssNavigationMessage::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jint GnssNavigationMessage::getMessageId()
	{
		return __thiz.callMethod<jint>(
			"getMessageId",
			"()I"
		);
	}
	jint GnssNavigationMessage::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jint GnssNavigationMessage::getSubmessageId()
	{
		return __thiz.callMethod<jint>(
			"getSubmessageId",
			"()I"
		);
	}
	jint GnssNavigationMessage::getSvid()
	{
		return __thiz.callMethod<jint>(
			"getSvid",
			"()I"
		);
	}
	jint GnssNavigationMessage::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring GnssNavigationMessage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssNavigationMessage::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class GnssNavigationMessage : public __jni_impl::android::location::GnssNavigationMessage
	{
	public:
		GnssNavigationMessage(QAndroidJniObject obj) { __thiz = obj; }
		GnssNavigationMessage()
		{
			__constructor();
		}
	};
} // namespace android::location

