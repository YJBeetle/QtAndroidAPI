#include "../../../java/time/MonthDay.hpp"
#include "./FreezePeriod.hpp"

namespace android::app::admin
{
	// Fields
	
	FreezePeriod::FreezePeriod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FreezePeriod::FreezePeriod(java::time::MonthDay &arg0, java::time::MonthDay &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.FreezePeriod",
			"(Ljava/time/MonthDay;Ljava/time/MonthDay;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject FreezePeriod::getEnd()
	{
		return __thiz.callObjectMethod(
			"getEnd",
			"()Ljava/time/MonthDay;"
		);
	}
	QAndroidJniObject FreezePeriod::getStart()
	{
		return __thiz.callObjectMethod(
			"getStart",
			"()Ljava/time/MonthDay;"
		);
	}
	jstring FreezePeriod::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::admin

