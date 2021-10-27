#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::database
{
	class DataSetObserver;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class ViewGroup;
}

namespace __jni_impl::android::widget
{
	class BaseAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean areAllItemsEnabled();
		jarray getAutofillOptions();
		QAndroidJniObject getDropDownView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2);
		jint getItemViewType(jint arg0);
		jint getViewTypeCount();
		jboolean hasStableIds();
		jboolean isEmpty();
		jboolean isEnabled(jint arg0);
		void notifyDataSetChanged();
		void notifyDataSetInvalidated();
		void registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
		void setAutofillOptions(jarray arg0);
		void unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
	};
} // namespace __jni_impl::android::widget

#include "../database/DataSetObserver.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void BaseAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.BaseAdapter",
			"()V"
		);
	}
	
	// Methods
	jboolean BaseAdapter::areAllItemsEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	jarray BaseAdapter::getAutofillOptions()
	{
		return __thiz.callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		).object<jarray>();
	}
	QAndroidJniObject BaseAdapter::getDropDownView(jint arg0, __jni_impl::android::view::View arg1, __jni_impl::android::view::ViewGroup arg2)
	{
		return __thiz.callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint BaseAdapter::getItemViewType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getItemViewType",
			"(I)I",
			arg0
		);
	}
	jint BaseAdapter::getViewTypeCount()
	{
		return __thiz.callMethod<jint>(
			"getViewTypeCount",
			"()I"
		);
	}
	jboolean BaseAdapter::hasStableIds()
	{
		return __thiz.callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	jboolean BaseAdapter::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean BaseAdapter::isEnabled(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"(I)Z",
			arg0
		);
	}
	void BaseAdapter::notifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void BaseAdapter::notifyDataSetInvalidated()
	{
		__thiz.callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	void BaseAdapter::registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void BaseAdapter::setAutofillOptions(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAutofillOptions",
			"([Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void BaseAdapter::unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class BaseAdapter : public __jni_impl::android::widget::BaseAdapter
	{
	public:
		BaseAdapter(QAndroidJniObject obj) { __thiz = obj; }
		BaseAdapter()
		{
			__constructor();
		}
	};
} // namespace android::widget

