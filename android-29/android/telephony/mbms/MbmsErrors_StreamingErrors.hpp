#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class MbmsErrors_StreamingErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_CONCURRENT_SERVICE_LIMIT_REACHED();
		static jint ERROR_DUPLICATE_START_STREAM();
		static jint ERROR_UNABLE_TO_START_SERVICE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint MbmsErrors_StreamingErrors::ERROR_CONCURRENT_SERVICE_LIMIT_REACHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_CONCURRENT_SERVICE_LIMIT_REACHED"
		);
	}
	jint MbmsErrors_StreamingErrors::ERROR_DUPLICATE_START_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_DUPLICATE_START_STREAM"
		);
	}
	jint MbmsErrors_StreamingErrors::ERROR_UNABLE_TO_START_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_UNABLE_TO_START_SERVICE"
		);
	}
	
	// Constructors
	void MbmsErrors_StreamingErrors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsErrors_StreamingErrors : public __jni_impl::android::telephony::mbms::MbmsErrors_StreamingErrors
	{
	public:
		MbmsErrors_StreamingErrors(QAndroidJniObject obj) { __thiz = obj; }
		MbmsErrors_StreamingErrors()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

