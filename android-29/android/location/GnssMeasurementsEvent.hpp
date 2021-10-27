#pragma once

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
		jint describeContents();
		QAndroidJniObject getClock();
		QAndroidJniObject getMeasurements();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
	jint GnssMeasurementsEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject GnssMeasurementsEvent::getClock()
	{
		return __thiz.callObjectMethod(
			"getClock",
			"()Landroid/location/GnssClock;"
		);
	}
	QAndroidJniObject GnssMeasurementsEvent::getMeasurements()
	{
		return __thiz.callObjectMethod(
			"getMeasurements",
			"()Ljava/util/Collection;"
		);
	}
	jstring GnssMeasurementsEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

