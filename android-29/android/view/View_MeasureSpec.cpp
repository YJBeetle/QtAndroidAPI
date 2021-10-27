#include "./View_MeasureSpec.hpp"

namespace android::view
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
	
	View_MeasureSpec::View_MeasureSpec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	View_MeasureSpec::View_MeasureSpec()
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
} // namespace android::view

