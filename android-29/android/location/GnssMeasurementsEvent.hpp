#pragma once

#ifndef ANDROID_LOCATION_GNSSMEASUREMENTSEVENT
#define ANDROID_LOCATION_GNSSMEASUREMENTSEVENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::location
{
	class GnssClock;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::location
{
	class GnssMeasurementsEvent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		QAndroidJniObject getClock();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getMeasurements();
	};
} // namespace __jni_impl::android::location

#include "GnssClock.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::location
{
	// Fields
	QAndroidJniObject GnssMeasurementsEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.GnssMeasurementsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void GnssMeasurementsEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssMeasurementsEvent",
			"(V)V");
	}
	
	// Methods
	jstring GnssMeasurementsEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject GnssMeasurementsEvent::getClock()
	{
		return __thiz.callObjectMethod(
			"getClock",
			"()Landroid/location/GnssClock;"
		);
	}
	jint GnssMeasurementsEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void GnssMeasurementsEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject GnssMeasurementsEvent::getMeasurements()
	{
		return __thiz.callObjectMethod(
			"getMeasurements",
			"()Ljava/util/Collection;"
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class GnssMeasurementsEvent : public __jni_impl::android::location::GnssMeasurementsEvent
	{
	public:
		GnssMeasurementsEvent(QAndroidJniObject obj) { __thiz = obj; }
		GnssMeasurementsEvent()
		{
			__constructor();
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_GNSSMEASUREMENTSEVENT

