#pragma once

#include "../../../__JniBaseClass.hpp"
#include "MeasureUnit.hpp"


namespace __jni_impl::android::icu::util
{
	class TimeUnit : public __jni_impl::android::icu::util::MeasureUnit
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void TimeUnit::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TimeUnit",
			"(V)V");
	}
	
	// Methods
	jarray TimeUnit::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.TimeUnit",
			"values",
			"()[Landroid/icu/util/TimeUnit;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class TimeUnit : public __jni_impl::android::icu::util::TimeUnit
	{
	public:
		TimeUnit(QAndroidJniObject obj) { __thiz = obj; }
		TimeUnit()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

