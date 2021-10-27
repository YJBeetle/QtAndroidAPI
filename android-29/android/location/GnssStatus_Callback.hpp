#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::location
{
	class GnssStatus;
}

namespace __jni_impl::android::location
{
	class GnssStatus_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onFirstFix(jint arg0);
		void onSatelliteStatusChanged(__jni_impl::android::location::GnssStatus arg0);
		void onStarted();
		void onStopped();
	};
} // namespace __jni_impl::android::location

#include "GnssStatus.hpp"

namespace __jni_impl::android::location
{
	// Fields
	
	// Constructors
	void GnssStatus_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssStatus$Callback",
			"()V"
		);
	}
	
	// Methods
	void GnssStatus_Callback::onFirstFix(jint arg0)
	{
		__thiz.callMethod<void>(
			"onFirstFix",
			"(I)V",
			arg0
		);
	}
	void GnssStatus_Callback::onSatelliteStatusChanged(__jni_impl::android::location::GnssStatus arg0)
	{
		__thiz.callMethod<void>(
			"onSatelliteStatusChanged",
			"(Landroid/location/GnssStatus;)V",
			arg0.__jniObject().object()
		);
	}
	void GnssStatus_Callback::onStarted()
	{
		__thiz.callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	void GnssStatus_Callback::onStopped()
	{
		__thiz.callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class GnssStatus_Callback : public __jni_impl::android::location::GnssStatus_Callback
	{
	public:
		GnssStatus_Callback(QAndroidJniObject obj) { __thiz = obj; }
		GnssStatus_Callback()
		{
			__constructor();
		}
	};
} // namespace android::location

