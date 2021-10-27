#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class CellLocation : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getEmpty();
		static void requestLocationUpdate();
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void CellLocation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellLocation",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CellLocation::getEmpty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.CellLocation",
			"getEmpty",
			"()Landroid/telephony/CellLocation;"
		);
	}
	void CellLocation::requestLocationUpdate()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.telephony.CellLocation",
			"requestLocationUpdate",
			"()V"
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellLocation : public __jni_impl::android::telephony::CellLocation
	{
	public:
		CellLocation(QAndroidJniObject obj) { __thiz = obj; }
		CellLocation()
		{
			__constructor();
		}
	};
} // namespace android::telephony

