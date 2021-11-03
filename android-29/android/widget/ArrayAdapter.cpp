#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/Resources_Theme.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "../../JObject.hpp"
#include "./ArrayAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ArrayAdapter::ArrayAdapter(QAndroidJniObject obj) : android::widget::BaseAdapter(obj) {}
	
	// Constructors
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, JObjectArray arg2)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;I[Ljava/lang/Object;)V",
			arg0.object(),
			arg1,
			arg2.object<jobjectArray>()
		) {}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, JObject arg2)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;ILjava/util/List;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, JObjectArray arg3)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;II[Ljava/lang/Object;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jobjectArray>()
		) {}
	ArrayAdapter::ArrayAdapter(android::content::Context arg0, jint arg1, jint arg2, JObject arg3)
		: android::widget::BaseAdapter(
			"android.widget.ArrayAdapter",
			"(Landroid/content/Context;IILjava/util/List;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	android::widget::ArrayAdapter ArrayAdapter::createFromResource(android::content::Context arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.widget.ArrayAdapter",
			"createFromResource",
			"(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ArrayAdapter::add(JObject arg0)
	{
		callMethod<void>(
			"add",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ArrayAdapter::addAll(JObjectArray arg0)
	{
		callMethod<void>(
			"addAll",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	void ArrayAdapter::addAll(JObject arg0)
	{
		callMethod<void>(
			"addAll",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void ArrayAdapter::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	JArray ArrayAdapter::getAutofillOptions()
	{
		return callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		);
	}
	android::content::Context ArrayAdapter::getContext()
	{
		return callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint ArrayAdapter::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	android::view::View ArrayAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::content::res::Resources_Theme ArrayAdapter::getDropDownViewTheme()
	{
		return callObjectMethod(
			"getDropDownViewTheme",
			"()Landroid/content/res/Resources$Theme;"
		);
	}
	android::widget::Filter ArrayAdapter::getFilter()
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	JObject ArrayAdapter::getItem(jint arg0)
	{
		return callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jlong ArrayAdapter::getItemId(jint arg0)
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	jint ArrayAdapter::getPosition(JObject arg0)
	{
		return callMethod<jint>(
			"getPosition",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	android::view::View ArrayAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2)
	{
		return callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void ArrayAdapter::insert(JObject arg0, jint arg1)
	{
		callMethod<void>(
			"insert",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	void ArrayAdapter::notifyDataSetChanged()
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void ArrayAdapter::remove(JObject arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ArrayAdapter::setDropDownViewResource(jint arg0)
	{
		callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	void ArrayAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void ArrayAdapter::setNotifyOnChange(jboolean arg0)
	{
		callMethod<void>(
			"setNotifyOnChange",
			"(Z)V",
			arg0
		);
	}
	void ArrayAdapter::sort(JObject arg0)
	{
		callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		);
	}
} // namespace android::widget

