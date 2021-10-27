#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class View_MeasureSpec : public __JniBaseClass
	{
	public:
		// Fields
		static jint AT_MOST();
		static jint EXACTLY();
		static jint UNSPECIFIED();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getMode(jint arg0);
		static jint getSize(jint arg0);
		static jint makeMeasureSpec(jint arg0, jint arg1);
		static jstring toString(jint arg0);
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	jint View_MeasureSpec::AT_MOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View$MeasureSpec",
			"AT_MOST"
		);
	}
	jint View_MeasureSpec::EXACTLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View$MeasureSpec",
			"EXACTLY"
		);
	}
	jint View_MeasureSpec::UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.View$MeasureSpec",
			"UNSPECIFIED"
		);
	}
	
	// Constructors
	void View_MeasureSpec::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.View$MeasureSpec",
			"()V"
		);
	}
	
	// Methods
	jint View_MeasureSpec::getMode(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.View$MeasureSpec",
			"getMode",
			"(I)I",
			arg0
		);
	}
	jint View_MeasureSpec::getSize(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.View$MeasureSpec",
			"getSize",
			"(I)I",
			arg0
		);
	}
	jint View_MeasureSpec::makeMeasureSpec(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.View$MeasureSpec",
			"makeMeasureSpec",
			"(II)I",
			arg0,
			arg1
		);
	}
	jstring View_MeasureSpec::toString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.View$MeasureSpec",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class View_MeasureSpec : public __jni_impl::android::view::View_MeasureSpec
	{
	public:
		View_MeasureSpec(QAndroidJniObject obj) { __thiz = obj; }
		View_MeasureSpec()
		{
			__constructor();
		}
	};
} // namespace android::view

