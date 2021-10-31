#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "./ArrayAdapter.hpp"

namespace android::widget
{
	// Fields
	
	ArrayAdapter::ArrayAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jobjectArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;I[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;ILjava/util/List;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, jobjectArray arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;II[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, __JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;IILjava/util/List;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ArrayAdapter::createFromResource(android::content::Context arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.widget.ArrayAdapter",
			"createFromResource",
			"(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ArrayAdapter::add(jobject arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ArrayAdapter::addAll(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"addAll",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void ArrayAdapter::addAll(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addAll",
			"(Ljava/util/Collection;)V",
			arg0.__jniObject().object()
		);
	}
	void ArrayAdapter::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jarray ArrayAdapter::getAutofillOptions()
	{
		return __thiz.callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	QAndroidJniObject ArrayAdapter::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint ArrayAdapter::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject ArrayAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ArrayAdapter::getDropDownViewTheme()
	{
		return __thiz.callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	QAndroidJniObject ArrayAdapter::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	jobject ArrayAdapter::getItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong ArrayAdapter::getItemId(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	jint ArrayAdapter::getPosition(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"getPosition",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject ArrayAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void ArrayAdapter::insert(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"insert",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
	void ArrayAdapter::notifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void ArrayAdapter::remove(jobject arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ArrayAdapter::setDropDownViewResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	void ArrayAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ArrayAdapter::setNotifyOnChange(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNotifyOnChange",
			"(Z)V",
			arg0
		);
	}
	void ArrayAdapter::sort(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

