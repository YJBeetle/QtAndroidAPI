#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class LayoutDirection : public __JniBaseClass
	{
	public:
		// Fields
		static jint INHERIT();
		static jint LOCALE();
		static jint LTR();
		static jint RTL();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jint LayoutDirection::INHERIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.LayoutDirection",
			"INHERIT"
		);
	}
	jint LayoutDirection::LOCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.LayoutDirection",
			"LOCALE"
		);
	}
	jint LayoutDirection::LTR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.LayoutDirection",
			"LTR"
		);
	}
	jint LayoutDirection::RTL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.LayoutDirection",
			"RTL"
		);
	}
	
	// Constructors
	void LayoutDirection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.LayoutDirection",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class LayoutDirection : public __jni_impl::android::util::LayoutDirection
	{
	public:
		LayoutDirection(QAndroidJniObject obj) { __thiz = obj; }
		LayoutDirection()
		{
			__constructor();
		}
	};
} // namespace android::util

