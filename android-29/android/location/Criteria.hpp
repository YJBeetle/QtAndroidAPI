#pragma once

#ifndef ANDROID_LOCATION_CRITERIA
#define ANDROID_LOCATION_CRITERIA

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::location
{
	class Criteria : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACCURACY_COARSE();
		static jint ACCURACY_FINE();
		static jint ACCURACY_HIGH();
		static jint ACCURACY_LOW();
		static jint ACCURACY_MEDIUM();
		static QAndroidJniObject CREATOR();
		static jint NO_REQUIREMENT();
		static jint POWER_HIGH();
		static jint POWER_LOW();
		static jint POWER_MEDIUM();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::location::Criteria arg0);
		
		// Methods
		jstring toString();
		jint getAccuracy();
		void setAccuracy(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getPowerRequirement();
		void setHorizontalAccuracy(jint arg0);
		jint getHorizontalAccuracy();
		void setVerticalAccuracy(jint arg0);
		jint getVerticalAccuracy();
		void setSpeedAccuracy(jint arg0);
		jint getSpeedAccuracy();
		void setBearingAccuracy(jint arg0);
		jint getBearingAccuracy();
		void setPowerRequirement(jint arg0);
		void setCostAllowed(jboolean arg0);
		jboolean isCostAllowed();
		void setAltitudeRequired(jboolean arg0);
		jboolean isAltitudeRequired();
		void setSpeedRequired(jboolean arg0);
		jboolean isSpeedRequired();
		void setBearingRequired(jboolean arg0);
		jboolean isBearingRequired();
	};
} // namespace __jni_impl::android::location

#include "../os/Parcel.hpp"

namespace __jni_impl::android::location
{
	// Fields
	jint Criteria::ACCURACY_COARSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_COARSE"
		);
	}
	jint Criteria::ACCURACY_FINE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_FINE"
		);
	}
	jint Criteria::ACCURACY_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_HIGH"
		);
	}
	jint Criteria::ACCURACY_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_LOW"
		);
	}
	jint Criteria::ACCURACY_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"ACCURACY_MEDIUM"
		);
	}
	QAndroidJniObject Criteria::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.Criteria",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Criteria::NO_REQUIREMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"NO_REQUIREMENT"
		);
	}
	jint Criteria::POWER_HIGH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"POWER_HIGH"
		);
	}
	jint Criteria::POWER_LOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"POWER_LOW"
		);
	}
	jint Criteria::POWER_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Criteria",
			"POWER_MEDIUM"
		);
	}
	
	// Constructors
	void Criteria::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.Criteria",
			"()V");
	}
	void Criteria::__constructor(__jni_impl::android::location::Criteria arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Criteria",
			"(Landroid/location/Criteria;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring Criteria::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Criteria::getAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	void Criteria::setAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAccuracy",
			"(I)V",
			arg0
		);
	}
	jint Criteria::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Criteria::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Criteria::getPowerRequirement()
	{
		return __thiz.callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	void Criteria::setHorizontalAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHorizontalAccuracy",
			"(I)V",
			arg0
		);
	}
	jint Criteria::getHorizontalAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getHorizontalAccuracy",
			"()I"
		);
	}
	void Criteria::setVerticalAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalAccuracy",
			"(I)V",
			arg0
		);
	}
	jint Criteria::getVerticalAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getVerticalAccuracy",
			"()I"
		);
	}
	void Criteria::setSpeedAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSpeedAccuracy",
			"(I)V",
			arg0
		);
	}
	jint Criteria::getSpeedAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getSpeedAccuracy",
			"()I"
		);
	}
	void Criteria::setBearingAccuracy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBearingAccuracy",
			"(I)V",
			arg0
		);
	}
	jint Criteria::getBearingAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getBearingAccuracy",
			"()I"
		);
	}
	void Criteria::setPowerRequirement(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPowerRequirement",
			"(I)V",
			arg0
		);
	}
	void Criteria::setCostAllowed(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCostAllowed",
			"(Z)V",
			arg0
		);
	}
	jboolean Criteria::isCostAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isCostAllowed",
			"()Z"
		);
	}
	void Criteria::setAltitudeRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAltitudeRequired",
			"(Z)V",
			arg0
		);
	}
	jboolean Criteria::isAltitudeRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isAltitudeRequired",
			"()Z"
		);
	}
	void Criteria::setSpeedRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSpeedRequired",
			"(Z)V",
			arg0
		);
	}
	jboolean Criteria::isSpeedRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isSpeedRequired",
			"()Z"
		);
	}
	void Criteria::setBearingRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setBearingRequired",
			"(Z)V",
			arg0
		);
	}
	jboolean Criteria::isBearingRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isBearingRequired",
			"()Z"
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class Criteria : public __jni_impl::android::location::Criteria
	{
	public:
		Criteria(QAndroidJniObject obj) { __thiz = obj; }
		Criteria()
		{
			__constructor();
		}
		Criteria(__jni_impl::android::location::Criteria arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_CRITERIA

