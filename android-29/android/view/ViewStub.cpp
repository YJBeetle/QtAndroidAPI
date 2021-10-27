#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "./LayoutInflater.hpp"
#include "./View.hpp"
#include "./ViewStub.hpp"

namespace android::view
{
	// Fields
	
	ViewStub::ViewStub(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewStub::ViewStub(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ViewStub::ViewStub(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ViewStub::ViewStub(android::content::Context &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ViewStub::ViewStub(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ViewStub::ViewStub(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewStub",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void ViewStub::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint ViewStub::getInflatedId()
	{
		return __thiz.callMethod<jint>(
			"getInflatedId",
			"()I"
		);
	}
	QAndroidJniObject ViewStub::getLayoutInflater()
	{
		return __thiz.callObjectMethod(
			"getLayoutInflater",
			"()Landroid/view/LayoutInflater;"
		);
	}
	jint ViewStub::getLayoutResource()
	{
		return __thiz.callMethod<jint>(
			"getLayoutResource",
			"()I"
		);
	}
	QAndroidJniObject ViewStub::inflate()
	{
		return __thiz.callObjectMethod(
			"inflate",
			"()Landroid/view/View;"
		);
	}
	void ViewStub::setInflatedId(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInflatedId",
			"(I)V",
			arg0
		);
	}
	void ViewStub::setLayoutInflater(android::view::LayoutInflater arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutInflater",
			"(Landroid/view/LayoutInflater;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewStub::setLayoutResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLayoutResource",
			"(I)V",
			arg0
		);
	}
	void ViewStub::setOnInflateListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnInflateListener",
			"(Landroid/view/ViewStub$OnInflateListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewStub::setVisibility(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVisibility",
			"(I)V",
			arg0
		);
	}
} // namespace android::view

