#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::mbms
{
	class MbmsErrors_GroupCallErrors : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_DUPLICATE_START_GROUP_CALL();
		static jint ERROR_UNABLE_TO_START_SERVICE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telephony::mbms


namespace __jni_impl::android::telephony::mbms
{
	// Fields
	jint MbmsErrors_GroupCallErrors::ERROR_DUPLICATE_START_GROUP_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"ERROR_DUPLICATE_START_GROUP_CALL"
		);
	}
	jint MbmsErrors_GroupCallErrors::ERROR_UNABLE_TO_START_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"ERROR_UNABLE_TO_START_SERVICE"
		);
	}
	
	// Constructors
	void MbmsErrors_GroupCallErrors::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class MbmsErrors_GroupCallErrors : public __jni_impl::android::telephony::mbms::MbmsErrors_GroupCallErrors
	{
	public:
		MbmsErrors_GroupCallErrors(QAndroidJniObject obj) { __thiz = obj; }
		MbmsErrors_GroupCallErrors()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

