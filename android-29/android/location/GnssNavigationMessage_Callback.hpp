#pragma once

#ifndef ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_CALLBACK
#define ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::location
{
	class GnssNavigationMessage;
}

namespace __jni_impl::android::location
{
	class GnssNavigationMessage_Callback : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_LOCATION_DISABLED();
		static jint STATUS_NOT_SUPPORTED();
		static jint STATUS_READY();
		
		// Constructors
		void __constructor();
		
		// Methods
		void onGnssNavigationMessageReceived(__jni_impl::android::location::GnssNavigationMessage arg0);
		void onStatusChanged(jint arg0);
	};
} // namespace __jni_impl::android::location

#include "GnssNavigationMessage.hpp"

namespace __jni_impl::android::location
{
	// Fields
	jint GnssNavigationMessage_Callback::STATUS_LOCATION_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_LOCATION_DISABLED"
		);
	}
	jint GnssNavigationMessage_Callback::STATUS_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_NOT_SUPPORTED"
		);
	}
	jint GnssNavigationMessage_Callback::STATUS_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssNavigationMessage$Callback",
			"STATUS_READY"
		);
	}
	
	// Constructors
	void GnssNavigationMessage_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssNavigationMessage$Callback",
			"()V");
	}
	
	// Methods
	void GnssNavigationMessage_Callback::onGnssNavigationMessageReceived(__jni_impl::android::location::GnssNavigationMessage arg0)
	{
		__thiz.callMethod<void>(
			"onGnssNavigationMessageReceived",
			"(Landroid/location/GnssNavigationMessage;)V",
			arg0.__jniObject().object()
		);
	}
	void GnssNavigationMessage_Callback::onStatusChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class GnssNavigationMessage_Callback : public __jni_impl::android::location::GnssNavigationMessage_Callback
	{
	public:
		GnssNavigationMessage_Callback(QAndroidJniObject obj) { __thiz = obj; }
		GnssNavigationMessage_Callback()
		{
			__constructor();
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_GNSSNAVIGATIONMESSAGE_CALLBACK

